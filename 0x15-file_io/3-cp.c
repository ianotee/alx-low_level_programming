#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - The block function that copies the string.
 * @argc: counts the number of argument passed.
 * @argv: the vector argument.
 * Return: 1 if success.
 */

int main(int argc, char *argv[])
{
	int sue, desk, counts = 1024, wrote, close_sue, close_desk;
	unsigned int node = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char boot[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	sue = open(argv[1], O_RDONLY);
	check_IO_stat(sue, -1, argv[1], 'O');
	desk = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, node);
	check_IO_stat(desk, -1, argv[2], 'W');
	while (counts == 1024)
	{
		counts = read(sue, boot, sizeof(boot));
		if (counts == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(desk, boot, counts);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_sue = close(sue);
	check_IO_stat(close_sue, sue, NULL, 'C');
	close_desk = close(desk);
	check_IO_stat(close_desk, desk, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks the status of a file.
 * @stats: it describes the file to be opened.
 * @filename: the name of the file.
 * @mood: Is used to close and open file.
 * @counter: This is the instructional file.
 * Return:0 if seccessful
 */

void check_IO_stat(int stats, int counter, char *filename, char mood)
{
	if (mood == 'C' && stats == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", counter);
		exit(100);
	}
	else if (mood == 'O' && stats == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mood == 'W' && stats == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
