// Predefined modifier functions for ":=" operator
// https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/Syntax/Operators/Index.html#typoscript-syntax-syntax-value-modification
const MODIFIER_FUNCTIONS = [
    'prependString',
    'appendString',
    'removeString',
    'replaceString',
    'addToList',
    'removeFromList',
    'uniqueList',
    'reverseList',
    'sortList',
    // since TYPO3 v12
    'getEnv',
];

module.exports = new RegExp(MODIFIER_FUNCTIONS.join('|'));
