#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @letters: the number of letters it should read and print
 * @filename: text file
 * Return:  actual number of letters it could read and print
 * if filename is NULL return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t jd;
	ssize_t i;
	ssize_t t;

	jd = open(filename, O_RDONLY);
	if (jd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(jd, buffer, letters);
	i = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(jd);
	return (i);
}
