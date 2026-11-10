#include <stdio.h>
int summarek(int chislo, int delitel)
{
    if (delitel == 0)
        return 0;
    if (chislo % delitel == 0)
        return delitel + summarek(chislo, delitel - 1);
    else
        return summarek(chislo, delitel - 1);
}
int summacikl(int chislo)
{
    int i, summa = 0;
    for (i = 1; i <= chislo / 2; i++)
    {
        if (chislo % i == 0)
            summa = summa + i;
    }
    return summa;
}
int main(void)
{
    int chislo, rek, cikl;
    printf("Введите натуральное число: ");
    if (scanf("%d", &chislo) == 1 && chislo > 0)
    {
        rek = summarek(chislo, chislo / 2);
        cikl = summacikl(chislo);
        printf("Рекурсия: сумма делителей %d, %s\n", rek, (rek == chislo) ? "число совершенное" : "число не совершенное");
        printf("Цикл:     сумма делителей %d, %s\n", cikl, (cikl == chislo) ? "число совершенное" : "число не совершенное");
    }
    else
        printf("Ошибка: нужно целое число больше 0\n");
    return 0;
}
