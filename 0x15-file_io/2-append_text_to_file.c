#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename:  Pointer to the FILE.
 * @text_content: Final string to include in file.
 *
 * Return: If the filename is NULL - -1 or the function fails
 *         If the file does not exist then user lacks write permission - -1.
 *         Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
