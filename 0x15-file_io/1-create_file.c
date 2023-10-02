#include "main.h"
/**
  * create_file - creates a file.
 *@filename: file created
 *@text_content: written to file.
 *
 * Return: chars read
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, x, close_file;

	if (filename == NULL)
		return (-1);
	open_file = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (open_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		x = 0;
	}
	else
	{
		x = 0;
		while (text_content[x] != '\0')
			x++;
	}
	write_file = write(open_file, text_content, x);
	if (write_file == -1)
		return (-1);
	close_file = close(open_file);
	if (close_file == -1)
		return (-1);
	return (1);
}
