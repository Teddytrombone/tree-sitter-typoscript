// cObjects currently defined in TypoScript
// https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/ContentObjects/Index.html
const COBJECTS = [
    'CASE',
    'COA',
    'COA_INT',
    'CONTENT',
    'FILES',
    'FLUIDTEMPLATE',
    'HMENU',
    'IMAGE',
    'IMG_RESOURCE',
    'LOAD_REGISTER',
    'RECORDS',
    'RESTORE_REGISTER',
    'SVG',
    'TEXT',
    'USER',
    'USER_INT',
    'PAGE',
    'EXTBASEPLUGIN',
    'PAGEVIEW',
];

// cObjects of older versions of TYPO3
// We support them but consider them as deprecated. They may be removed in the future.
const COBJECTS_LEGACY = [
    // valid until TYPO3 v11
    'EDITPANEL',
    // valid until TYPO3 v10
    'TEMPLATE',
];

// Menu objects
const MENU_OBJECTS = [
    // https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/ContentObjects/Hmenu/Tmenu/Index.html
    'TMENU',
];

// Menu objects for TYPO3 v9 and older
// https://docs.typo3.org/m/typo3/reference-typoscript/9.5/en-us/MenuObjects/Index.html
const MENU_OBJECTS_LEGACY = [
    'GMENU',
    'IMGMENU',
    // available in TYPO3 v8 and older
    'JSMENU',
];

// GifBuilder and GifBuilder objects. Not really cObjects but kind of reserved/known
// https://docs.typo3.org/m/typo3/reference-typoscript/main/en-us/Gifbuilder/Index.html
const GIFBUILDER_OBJECTS = [
    'GIFBUILDER',
    'ADJUST',
    'BOX',
    'CROP',
    'EFFECT',
    'ELLIPSE',
    'EMBOSS',
    'OUTLINE',
    'SCALE',
    'SHADOW',
    'WORKAREA',
];

module.exports = new RegExp('(?:' + [...COBJECTS, ...COBJECTS_LEGACY, ...MENU_OBJECTS, ...MENU_OBJECTS_LEGACY, ...GIFBUILDER_OBJECTS].join('|') + ')');

