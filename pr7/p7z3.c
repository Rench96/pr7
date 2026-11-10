#include <stdio.h>
#include <math.h>
double tangens(double chislo1, double chislo2)
{
    return tan(chislo1 * chislo2);
}
int main(void)
{
    double chislo1, chislo2;
    printf("Вводите пары чисел через пробел (для выхода введите букву):\n");
    while (scanf("%lf %lf", &chislo1, &chislo2) == 2)
        printf("Тангенс произведения: %.4f\n", tangens(chislo1, chislo2));
    return 0;
}
