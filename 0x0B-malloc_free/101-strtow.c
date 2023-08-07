#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
            in_word = 0;
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int num_words = count_words(str);
    char **result = malloc((num_words + 1) * sizeof(char *));
    
    if (result == NULL)
        return NULL;

    int i = 0;
    int word_len = 0;
    int in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            if (in_word)
            {
                result[i] = malloc((word_len + 1) * sizeof(char));
                if (result[i] == NULL)
                {
                    for (int j = 0; j < i; j++)
                        free(result[j]);
                    free(result);
                    return NULL;
                }
                strncpy(result[i], str - word_len, word_len);
                result[i][word_len] = '\0';
                i++;
                in_word = 0;
                word_len = 0;
            }
        }
        else
        {
            in_word = 1;
            word_len++;
        }
        str++;
    }

    if (in_word)
    {
        result[i] = malloc((word_len + 1) * sizeof(char));
        if (result[i] == NULL)
        {
            for (int j = 0; j < i; j++)
                free(result[j]);
            free(result);
            return NULL;
        }
        strncpy(result[i], str - word_len, word_len);
        result[i][word_len] = '\0';
        i++;
    }

    result[i] = NULL;
    return result;
}

