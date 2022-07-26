#include "main.h"

/**
 * _strcat - Concat string, src appended to dest
 *
 * @dest: Destination string
 * @src: Source string
 * Return: Concat newString to dest
 */
char *_strcat(char *dest, char *src)
{
        int a, b;

        for (a = 0; dest[a] != '\0'; a++)
                ;
        for (b = 0; src[b] != '\0'; b++)
        {
                dest[a] = src[b];
                a++;
        }
        return (dest);
}

/**
 * _strlen - Return the number of the length of the string
 *
 * @s: This is the string to check
 *
 * Return: Return the length of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
