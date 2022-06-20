#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string s.
 * @c: string .
 * Return: a pointer to the first occurence.
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
}
while (*s++);
return (0);
}
