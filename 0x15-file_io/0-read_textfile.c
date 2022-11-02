#include "main.h"
/**
 * read_textfile - function
 * @filename: string pointer
 * @letters: size_t
 * Return: size_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;

	if (!filename)
		return (0);

	buf = malloc(letters);
	
	if (!buf)
		return (0);
	
	f = open(filename, O_RDONLY, 444);

	if (f == -1)
		return (0);

	read(f, buf, letters);
	printf("%s\n", buf);
	close(f);
	return (letters);
}
