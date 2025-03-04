/*
** PERSONAL PROJECT, 2025
** tokenizer.h
** File description:
** Tokenizer header
*/

#ifndef TOKENIZER_H
    #define TOKENIZER_H

    //----------------------------------------------------------------//
    /* INCLUDE */

    /* type */
    #include <stdbool.h>

//----------------------------------------------------------------//
/* TYPEDEF */

typedef struct {
    int start_line;
    int start_column;
    int end_line;
    int end_column;
    char *name;
} Token;

typedef struct {
    Token *tokens;
    int count;
} TokenVector;

//----------------------------------------------------------------//
/* PROTOTYPE */

/* tokenizer */
TokenVector *tokenizer(char const *file_name,
    int from_line, int from_colum,
    int to_line, int to_colum,
    char const **token_filter); // Error: KO

#endif /* TOKENIZER_H */
