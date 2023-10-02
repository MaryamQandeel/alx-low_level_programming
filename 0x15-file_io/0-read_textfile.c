#include "main.h"

/**
* read_textfile - a function - return number of letters it read and print
* @filename: file to be read
* @letters: the number of letters it should read and print
*
* Return: number bytes read/print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_bytes, write_bytes, openFile;
	char *c = malloc(letters);
	openFile = open(filename, O_RDONLY);

		if (!filename | (openFile == -1) | !letters)
		return (0);
	read_bytes = read(openFile, c, letters);
	write_bytes = write(STDOUT_FILENO, c, read_bytes);
	close(openFile);
	return (write_bytes);
}
