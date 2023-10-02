#include "main.h"

/**
* read_textfile isa function - return number of letters it read and print
* @filename: file to be read
* @letters: the number of letters it should read and print
*
* Return: number bytes read/print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t bytes;
    char c;
    
    int openFile = open(filename, O_RDONLY);
    if (filename == NULL | openFile == -1 | !letters)
        return (0);
    bytes = read(openFile, &c, letters);
    bytes = write(STDOUT_FILENO, &c, bytes);
    close(openFile);
    return (bytes);
}
