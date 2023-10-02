#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    /*
    * read_textfile isa function - returns the actual number of letters it could read and print
    *
    * @filename: file to be read
    * @letters: the number of letters it should read and print
    * 
    * return 0 if filename is NULL, can not be opened or read
    * Return: number bytes read/print
    **/
    ssize_t bytes;
    char c;
    int openFile = open(filename, O_RDONLY);

    bytes = read(openFile, &c, letters);
    bytes = write(STDOUT_FILENO, &c, bytes);
    if (filename == NULL | openFile == -1 | !letters)
        return (0);
        close(openFile);
        return (bytes);
}
