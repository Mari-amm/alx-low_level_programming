/**
 * _strncpy - A function that copies a string.
 *
 * @dest: destination input buffer
 * @src: source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int o;

	for (o = 0; o < n && src[o] != '\0'; o++)
		dest[o] = src[o];

	while (o < n)
	{
		dest[o] = '\0';
		o++;
	}

	return (dest);
}
