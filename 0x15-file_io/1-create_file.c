#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: the name of the file to create.
 * @text_content:  create an empty file
 *
 * Return: If the function success 1.
 *         failure -1.
*/

int create_file(const char *filename, char *text_content)
{
	int fn, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fn, text_content, leng);

	if (fn == -1 || w == -1)
		return (-1);

	close(fn);

	return (1);
}
