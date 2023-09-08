#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout.
 * @filename: pointer to name of file.
 * @letters: number of letters func and print.
 *
 * Return: If the function fails or filename return 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, written, readme;
	char *buf;

	opened = open(filename, O_RDONLY);
	buf = malloc(letters);
	readme = read(opened, buf, letters);
	written = write(STDOUT_FILENO, buf, readme);
	if (written == -1 || written != readme)
		return (0);
	if (filename == NULL)
		return (0);
	if (opened == -1)
		return (0);
	if (readme == -1)
		return (0);
	if (buf == NULL)
		return (0);
	close(opened);
	free(buf);
	return (written);
}
