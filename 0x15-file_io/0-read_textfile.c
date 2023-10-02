#include "main.h"

/**
* read_textfile - a function - return number of letters it read and print
* @filename: file to be read
* @letters: the number of letters it should read and print
*
* Return: number bytes read/print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{	ssize_t open_file, write_file, read_file;
	char *c;

	if (filename == NULL)
		return (0);
	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);
	c = malloc(letters);
	if (c == NULL)
		return (0);
	read_file = read(open_file, c, letters);
	if (read_file == -1)
		return (0);
	write_file = write(STDOUT_FILENO, c, read_file);
	if (write_file == -1 || write_file != read_file)
		return (0);
	close(open_file);
	free(c);
	return (write_file);
}
