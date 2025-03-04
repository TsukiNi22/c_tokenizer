/*
** PERSONAL PROJECT, 2025
** tokenizer.c
** File description:
** Main file of the tokenizer
*/

#include "tokenizer.h"
#include "ouput.h"
#include <stddef.h>

TokenVector *tokenizer(char const *file_name,
    int from_line, int from_colum,
    int to_line, int to_colum,
    char const **token_filter)
{
    TokenVector *tokens = NULL;

    if (!file_name)
        return NULL;
    return tokens;
}
