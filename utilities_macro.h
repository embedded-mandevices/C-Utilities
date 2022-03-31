/**
 * \file            utilities_macro.h
 * \brief           Some useful macro not depend of any platform
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
#ifndef UTILITIES_MACRO_H
#define UTILITIES_MACRO_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z’)
#define IS_ALPHABET(x) (IS_LOWER(x) || IS_UPPER(x))

#define IS_VOWEL_LOWER(x) (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
#define IS_VOWEL_UPPER(x) (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
#define IS_VOWEL(x) (IS_VOWEL_LOWER(x) || IS_VOWEL_UPPER(x))

#define IS_DIGIT(x) (x >= '0' && x <= '9')
#define IS_ALPHANUMERIC(x) (IS_ALPHABET(x) || IS_DIGIT(x))

#define IS_WHITE_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x == '\n' || x == '\0')

#define IS_SPECIAL_CHARACTERS(x) (x >= 32 && x <= 127 && !IS_ALPHABET(x) && !IS_DIGIT(x) && !IS_WHITE_SPACE(x))

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* UTILITIES_MACRO_H */