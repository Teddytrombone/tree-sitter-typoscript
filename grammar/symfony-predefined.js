const symfonyFunctions = [
    'constant',
    'enum',
    'min',
    'max',
];

const typo3Functions = [
    'date',
    'like',
    'traverse',
    'compatVersion',
    'getenv',
    'feature',
    'ip',
    'session',
    'site',
    'siteLanguage',
    'locale',
    'loginUser',
    'usergroup',
];

const legacyTypo3Functions = [
    'getTSFE',
];

const typo3Objects = [
    'applicationContext',
    'page',
    'tree',
    'backend',
    'frontend',
    'workspace',
    'typo3',
    'request',

];

module.exports = {
    functions: [...symfonyFunctions, ...typo3Functions, ...legacyTypo3Functions],
    objects: [...typo3Objects],
};
