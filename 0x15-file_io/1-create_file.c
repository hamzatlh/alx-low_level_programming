#include "main.h"

/**
 *create_file - create a file
 *@filename: the name of the file
 *@text_content: the content of file
 *Return: 1 else -1 in error
 */

int create_file(const char *filename, char *text_content)
{
	int	fd;
	int w;

	w = 0;
	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
	{
		w = dprintf(fd, "%s", text_content);
		if (w < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
