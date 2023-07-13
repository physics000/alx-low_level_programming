#include "main.h"
/**
 * create_file - i right a code that creat a file and fill it with what
 * some of things that i did is to check if the file
 * NULL and if it not if it null so i will create a file
 * if it not i will truncit with )_TRUNC function
 * @filename: larg 1
 * @text_content: bach na7ssab lii lenght w n3rf file ch7aal fiih
 * f lenght
 * Return: -1 or 1
*/
int create_file(const char *filename, char *text_content)
{
	int o, i = 0, w;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (; text_content[i]; i++)
			;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*hnaa drt creation w O_CREAT w had lfile ykuum */
	/*n9eduu na9rawah w nktbuh*/
	/* trunc bach file ila kant fiih chii haja yakhwa 0600 permission w sf*/
	w = write(o, text_content, i);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
