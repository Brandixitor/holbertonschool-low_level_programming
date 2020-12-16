#include "lists.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * rev_string - Function that reverse a string,
 * @s: pointer to char
 */
void rev_string(char *s)
{
	int n, i;
	char temp;

	n = 0;
	i = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + ((n  - 1) - i));
		*(s + ((n - 1) - i)) = temp;
	}
}

/**
 * hb_palindromes - A palindromic number reads the same both ways. The largest
 * palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 * Return: the largest palindromic in string
 **/
char *hb_palindromes(void)
{
	int a = 0, b = 0, res = 0, largest = 0;
	char buffer[150];
	char *rev;
	char *str;

	for (a = 0; a <= 999; a++)
	{
		for (b = 0; b <= 999; b++)
		{
			res = a * b;
			snprintf(buffer, sizeof(buffer), "%d", res);
			rev = strdup(buffer);
			rev_string(rev);
			if (strcmp(rev, buffer) == 0)
			{
				if (atoi(buffer) > largest)
					largest = atoi(buffer);
			}
		}
	}
	snprintf(str, sizeof(buffer), "%d", largest);
	return (str);
}

/**
 * main - Program that export a result the largest palindrome made from
 * the product of two 3-digit numbers.
 * Return: exit (1) if no error otherwise -1
 **/
int main(void)
{
	int fd = 0, i = 0, wstate = 0;
	char error[6] = "fails\n";
	char *text_content;

	fd = open("./102-result", O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
		write(1, error, 6);
	}
	text_content = hb_palindromes();
	if (text_content == NULL)
		return (1);
	while (text_content[i] != '\0')
		i++;
	wstate = write(fd, hb_palindromes(), i);
	if (wstate == -1)
	{
		write(1, error, 6);
		return (-1);
	}
	close(fd);
	exit(1);
}
