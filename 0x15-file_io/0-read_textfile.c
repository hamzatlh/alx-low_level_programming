#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t	r;
	ssize_t	write_it;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);
	r = read(fd, buffer, letters);
	if (r < -1)
		return (0);
	buffer[letters] = '\0';
	write_it = write(STDOUT_FILENO, buffer, r);
	if (write_it < -1 || write_it != r)
		return (0);
	free(buffer);
	close(fd);
	return (r);
}
