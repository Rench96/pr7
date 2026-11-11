#include <stdio.h>
int prostoe(int kod)
{
    int i;
    if (kod < 2)
        return 0;
    for (i = 2; i * i <= kod; i++)
    {
        if (kod % i == 0)
            return 0;
    }
    return 1;
}
int main(void)
{
    int simvol;
    int kol = 0, vsego = 0;
    printf("Введите текст:\n");
    while ((simvol = getchar()) != EOF)
    {
        vsego++;
        if (prostoe(simvol))
            kol++;
    }
    printf("Символов с простым ASCII-кодом: %d\n", kol);
    printf("Всего обработано символов: %d\n", vsego);
    return 0;
}
