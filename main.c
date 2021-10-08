#include <stdio.h> // TODO
#include <ctype.h> // TODO
#include <string.h> // TODO
#include "libft.h"

// TODO remove .gitignore

// hello 
// ^      - dest
// hello 
//  ^     - src
// 2
int	main(void)
{
	char text[] = "hello";
	char *d = text;
	char *s = text + 1;

	char *r = memcpy(d, s, 2);

	printf("%s\n", text);
}
