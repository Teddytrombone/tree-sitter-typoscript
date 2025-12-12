import treesitter from 'eslint-config-treesitter';

export default [
    ...treesitter,
    // I prefer 4 spaces for indentation in js files
    {
        rules: {
            'indent': [
                'error',
                4,
                {
                    'SwitchCase': 1,
                },
            ],
        },
    },
];
