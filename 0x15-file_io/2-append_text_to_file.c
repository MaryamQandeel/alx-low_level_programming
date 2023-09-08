#include "main.h"
/**
 *append_text_to_file - appends text at end of a file
 *@filename: path to file
 *@text_content: string to add to the end of the file
 *Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opened, written, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	opened = open(filename, O_WRONLY | O_APPEND);
	written = write(opened, text_content, i);

	if (opened == -1 || written == -1)
		return (-1);

	close(opened);
	return (1);
}
