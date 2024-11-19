#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buf;
    const char *mymaker = "Audi";
    if (asprintf(&buf, "%s", mymaker) == -1)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("%s\n", buf);
    free(buf);
    return 0;
}
