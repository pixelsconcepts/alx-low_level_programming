#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - append text to the end of a file
 * @filename: name of file to write into.
 * @text_content: text to append to file
 *
 * Return: 1 (SUCCESS), else -1 (FAILURE)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, err, len;

	file = err = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(file, text_content, len);
	if (err < 0)
		return (-1);
	close(file);
	return (1);
}

