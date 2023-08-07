#include "main.h"

/**
 * append_text_to_file - This function appends texts.
 * @filename: file containing the appended content.
 * @text_content: The text that is appended
 * Return: 1 if code is okay.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int run;
	int course;
	int permi;

	if (!filename)
		return (-1);

	run = open(filename, O_WRONLY | O_APPEND);

	if (run == -1)
		return (-1);

	if (text_content)
	{
		for (course = 0; text_content[course]; course++)
			;

		permi = write(run, text_content, course);

		if (permi == -1)
			return (-1);

	}

	close(run);

	return (1);

}




