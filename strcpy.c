#include <stdio.h>
#include <string.h>
int main(int argc, const char *argv[])
{
    char dest[128];
    char src[128] = "this is a test";
    strcpy(dest , src);
    printf("%s\n", dest);
    return 0;
}
