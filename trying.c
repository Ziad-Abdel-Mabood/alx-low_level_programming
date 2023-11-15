#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s;

    s = malloc(strlen("Best School"));
    if (s == NULL)
    {
	    printf("malloc failed\n");
	    return(0);
    }
    strcpy(s, "best School");

    printf("%s\n", s);
    return (0);
}
