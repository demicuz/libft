#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != c)
		s++;

	if (*s == c)
		return ((char *) s);
	else
		return (NULL);
}

// int main(void)
// {
// 	char s[] = "hello world";
// 	int c = '&';

// 	char *r = strchr(s, c);
// 	char *r2 = ft_strchr(s, c);
// 	// char *r2 = r;
// 	if (r)
// 		printf("%c\n", *r);
// 	else
// 		puts("nullptr");

// 	if (r2)
// 		printf("%c\n", *r2);
// 	else
// 		puts("nullptr");
// }