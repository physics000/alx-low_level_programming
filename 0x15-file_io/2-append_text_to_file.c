#include "main.h"
/**
 * append_text_to_file - add a text to a file that hold a text
 * but with no removing or editing the text
 * @filename: larg 1
 * @text_content: larg 2
 * Return: -1 or 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i = 0;

	if (!filename)
		return (-1);
	if (text_content)
	for (; text_content[i]; i++)
		;
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	write(fp, text_content, i);
	return (1);
}
