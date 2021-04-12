#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char ten[100] = {0};
    int i=0;
    printf("nhap ten:");
    do {
        c = getchar();
        ten[i] = c;
        putchar(c);
        i++;
    }while (c != '\n');
    printf ("\n%s", ten);


    printf("Hello world!\n");
    return 0;
}
