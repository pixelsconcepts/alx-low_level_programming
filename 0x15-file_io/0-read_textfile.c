#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads text file and prints it using STDOUT_FILENO
 * @filename: body of text to be printed
 * @letters: the number of letters it should read and print
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, err, bytes_read;
	char *buffer;

	file = err = bytes_read = 0;
	if (!filename || !letters)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters + 1);
	if (!buffer)
		return (0);
	bytes_read = read(file, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	err = write(STDOUT_FILENO, buffer, bytes_read);
	if (err <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes_read);

}
