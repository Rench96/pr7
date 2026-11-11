#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int simvol;
    printf("Введите текст:\n");
    while ((simvol = getchar()) != EOF)
    {
        if (isprint(simvol))
            putchar(simvol);
    }
    putchar('\n');
    return 0;
}
