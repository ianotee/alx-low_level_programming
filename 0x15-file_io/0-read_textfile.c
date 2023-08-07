#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - This function interprates characters.
 * @filename:the file that stores string.
 * @letters:The size of the characters.
 * Return:0 if success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int n;
	size_t lan, jev;

	char *boot;

	if (filename == NULL)
		return (0);

	n = open(filename, O_RDONLY);

	if (n == -1)
		return (0);

	boot = malloc(sizeof(char) * letters);

	if (boot == NULL)
	{
		close(n);
		return (0);
	}

	lan = read(n, boot, letters);
	close(n);

	if (lan == -1)
	{
		free(boot);
		return (0);
	}

	jev = write(STDOUT_FILENO, boot, lan);

	free(boot);
	if (lan != jev)
		return (0);
	return (jev);
}
