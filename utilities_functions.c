/**
 * \file            utilities_functions.c
 * \brief           Some useful functions not depend of any platform
 */

/*
 * Copyright (c) 2022 DAT GREEN
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE
 * AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * This file is part of my utility snippets.
 *
 * Author:          NGUYEN BA DAT <datnb.2202@gmail.com>
 * Version:         1.0
 */
#include "utilities_functions.h"

/**
 * \brief           Splits a string by the delimiter
 * \param[in]       input_string: pointer to location of the string to be splitted
 * \param[in]       delimiter: a sequence of one or more characters for specifying the boundary between separate
 * \param[in]       max_num: maximum number of the tokens to separate
 * \return          pointer to an array of tokens - must be free after use
 */
char** stringSplits(char* input_string, const char* delimiter, int max_num) {
    char** tokens;
    tokens = (char**)malloc(max_num*sizeof(char*));
    int token_num = 0;
    int i;
    tokens[token_num] = strtok(input_string, delimiter);
    while (tokens[token_num] != NULL && token_num < max_num) {
        tokens[++token_num] = strtok(NULL, delimiter);
    }
    return tokens;
}