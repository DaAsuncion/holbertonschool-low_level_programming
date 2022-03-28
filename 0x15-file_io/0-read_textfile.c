#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read and prints to POSIX stdout
 * @filename: * to name
 * @letters: num of letters
 * Return: if fails NULL | num of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reandpri;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	reandpri = read(fd, buffer, letters);
	if (reandpri == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	if (write(STDOUT_FILENO, buffer, reandpri) == -1)
		return (0);
	free(buffer);
	close(fd);
	return (reandpri);
}
