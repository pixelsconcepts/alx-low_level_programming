#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

/**
 * create_file - function that will create a new file and fill with with some
 * content.
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on scucess, -1 on Failure
 */
int create_file(const char *filename, char *text_content)
{
	int err, len, file;

	err = len = file = 0;
	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (file < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	err = write(file, text_content, len);
	if (err < 0)
		return (-1);
	close(file);
	return (1);
}

