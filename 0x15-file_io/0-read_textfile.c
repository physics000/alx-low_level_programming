#include "main.h"
/**
 * read_textfile - func can read file
 * @filename: kadawaz l arg 1
 * @letters: nmbr d char
 * Return: 0 if there any error or r
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t r, w;
	char *buff;

	if (!filename)
		return (0);
	fp = fopen(filename, "r");
		if (!fp)
			return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		fclose(fp);
		return (0);
	}
	r = fread(buff, sizeof(char), letters, fp);
	w = write(STDOUT_FILENO, buff, r);
	if (r != w)
	{
		fclose(fp);
		free(buff);
		return (0);
	}
	fclose(fp);
	free(buff);
	return (r);
}
