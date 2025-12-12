/**
 * Creates a pattern that matches a sequence of constants or any character
 * that is not the specified end character.
 *
 * @param {object} $ - Context object that provides grammar constructs (e.g. $.constant).
 * @param {string} stringForRegex - Character to exclude in the regex.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function repeatedStringWithConstants($, stringForRegex) {
    const regex = '[^\\' + stringForRegex + ']';
    return optional(repeat1(choice(
        $.constant,
        new RegExp(regex))));
}

/**
 * Creates a sequence that starts with the given start string,
 * contains repeated allowed content, and ends with the given end string.
 *
 * @param {object} $ - Context object.
 * @param {string} startString - The starting delimiter.
 * @param {string} endString - The ending delimiter.
 * @param {string} endStringForRegex - The end character used for regex exclusion.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function stringWithConstantsSeq($, startString, endString, endStringForRegex) {
    if (typeof (endString) === 'undefined') {
        endString = startString;
    }
    if (typeof (endStringForRegex) === 'undefined') {
        endStringForRegex = endString;
    }
    return seq(startString, repeatedStringWithConstants($, endStringForRegex), endString);
}


/**
 * Creates a pattern that matches a single escaped character for a specific quote
 * which also can be escaped.
 *
 * @param {object} $ - Context object.
 * @param {string} quote - The delimiter.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function symfonyEscapeSequence($, quote) {
    return token(seq('\\', choice(
        quote, '\\', 'n', 'r', 't', 'b', 'f', 'v',
    )));
}

/**
 * Creates a sequence that starts with the given start string,
 * and can contain constants, escaped characters and an other sequence.
 *
 * @param {object} $ - Context object.
 * @param {string} quote - The delimiter.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function symfonyString($, quote) {
    return seq(
        quote,
        repeat(choice(
            $.constant,
            symfonyEscapeSequence($, quote),
            quote === '"' ? /[^"\\]/ : /[^'\\]/,
            '{',
            '}',
            '\\',
        )),
        quote,
    );
}

/**
 * Creates an optionally repeated, separated list.
 *
 * @param {*} separator - The separator between elements.
 * @param {*} rule - The rule for each element.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function sep(separator, rule) {
    return optional(sep1(separator, rule));
}

/**
 * Creates a list that appears at least once, with separator handling.
 *
 * @param {*} separator - The separator between elements.
 * @param {*} rule - The rule for each element.
 * @returns {*} A Tree-sitter-style grammar rule.
 */
function sep1(separator, rule) {
    return seq(rule, repeat(seq(separator, rule)));
}

/**
 * Converts a character into a regex snippet that matches both
 * uppercase and lowercase versions of the character.
 *
 * @param {string} a - A single character.
 * @returns {string} A regex fragment supporting case-insensitive matching for the character.
 */
function toCaseInsensitive(a) {
    const ca = a.charCodeAt(0);
    if (ca >= 97 && ca <= 122) return `[${a}${a.toUpperCase()}]`;
    if (ca >= 65 && ca <= 90) return `[${a.toLowerCase()}${a}]`;
    return a;
}

/**
 * Builds a case-insensitive regular expression from the given keyword.
 *
 * @param {string} keyword - The keyword to match.
 * @returns {RegExp} A case-insensitive regular expression.
 */
function caseInsensitive(keyword) {
    return new RegExp(keyword
        .split('')
        .map(toCaseInsensitive)
        .join(''));
}

module.exports = {
    stringWithConstantsSeq,
    symfonyString,
    sep,
    caseInsensitive,
};
