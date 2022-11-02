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

	if (filename == 0)
		return (0);

	buf = malloc(letters);
	
	if (buf == NULL)
		return (0);
	
	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	f = read(f, buf, letters);
	f = write(STDOUT_FILENO, buf, f);
	close(f);
	free(buf);
	return (letters);
}
