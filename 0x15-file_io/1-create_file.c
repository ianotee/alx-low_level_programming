#include "main.h"

/**
 * create_file - This function creates a file.
 * @filename: The file with the string characters.
 * @text_content:It displays the characters in the file.
 * Return: 1 if(the code works).
 */

int create_file(const char *filename, char *text_content)
{
	int code;
	int my_Num;

	int permi;

	if (!filename)
		return (-1);

	code = open(filename,O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (code == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (my_Num = 0; text_content[my_Num]; my_Num++)
		;

	permi = write(code, text_content, my_Num);

	if (permi == -1)
		return (-1);

	close(code);

	return (1);

}
