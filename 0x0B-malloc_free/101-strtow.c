#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // Include the header for using bool type

/**
 * strtow - concatenates all the arguments of your program
 * @str: string
 * @av: arguments
 * Return: a pointer to a new string
 */
char **strtow(char *str)
{
    int i, w, j, k, count, m, wordf;
    char **p;
    char *x;

    w = 0;
    j = 0;
    i = 0;
    count = 0;
    if (str == NULL || *str == '\0') // Check for NULL or empty string
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && (str[i + 1] != ' ' || str[i + 1] == '\0'))
            w++;
    }
    p = (char **)malloc((w + 1) * sizeof(char *));
    if (p == NULL)
        return (NULL);
    for (wordf = 0; str[wordf] && j <= w; wordf++)
    {
        count = 0;
        if (str[wordf] != ' ')
        {
            for (i = wordf ; str[i] != '\0'; i++)
            {
                if (str[i] == ' ')
                    break;
                count++;
            }
            if (count > 0) // Only allocate memory if word length is greater than 0
            {
                *(p + j) = (char *)malloc((count + 1) * sizeof(char));
                if (*(p + j) == NULL)
                {
                    for (k = 0; k <= j; k++)
                    {
                        x = p[k];
                        free(x);
                    }
                    free(p);
                    return (NULL);
                }
                for (m = 0; wordf < i; wordf++)
                {
                    p[j][m] = str[wordf];
                    m++;
                }
                p[j][m] = '\0';
                j++;
            }
        }
    }
    p[j] = NULL;
    return (p);
}
