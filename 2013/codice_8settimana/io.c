#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000];
    char c;

    c = getchar();
    putchar(c);

    c = getchar();
    putchar(c);

    c = getchar();
    putchar(c);

    /* return 0; */
    printf("//");

    /* scanf("%s", str); */
    gets(str);

    /* printf("%s\n", str); */
    puts(str);

    return 0;
}
