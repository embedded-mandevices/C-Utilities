/**
 * \file            utilities_functions.h
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
#ifndef UTILITIES_FUNCTIONS_H
#define UTILITIES_FUNCTIONS_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/**
 * \brief           Splits a string by the delimiter
 * \param[in]       input_string: pointer to location of the string to be splitted
 * \param[in]       delimiter: a sequence of one or more characters for specifying the boundary between separate
 * \param[in]       max_num: maximum number of the tokens to separate
 * \return          pointer to an array of tokens - must be free after use
 * \example:
 *   int main() {
 *      char test_str[] = "This is an example - splits string";
 *      char** tokens;
 *      int i;
 *      printf("-----------------------\n");
 *      tokens = stringSplits(test_str, " -", 10);
 *      for (i = 0; tokens[i] != NULL; i++) {
 *          printf("Token %d: %s\n", i, tokens[i]);
 *      }
 *      printf("==================\n"); 
 *      free(tokens);
 *      return 0;
 *   }
 * \result: 
 *   -----------------------
 *   Token 0: This
 *   Token 1: is
 *   Token 2: an
 *   Token 3: example
 *   Token 4: splits
 *   Token 5: string
 *   ==================
 */
char** stringSplits(char* input_string, const char* delimiter, int max_num);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UTILITIES_FUNCTIONS_H */