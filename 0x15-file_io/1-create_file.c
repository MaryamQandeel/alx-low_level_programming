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
	int opened, written, i, closed;

	opened = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (text_content == NULL)
	{
		i = 0;
	}
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}
	written = write(opened, text_content, i);
	closed = close(opened);
  if (closed == -1 || opened == -1 || written == -1 || filename == NULL)
		return (-1);
	return (1);
}
