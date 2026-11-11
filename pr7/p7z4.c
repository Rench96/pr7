#include <stdio.h>
void pereschet(double *pervoe, double *vtoroe, double *trete)
{
    double maks, minim, sred;
    maks = *pervoe;
    if (*vtoroe > maks)
        maks = *vtoroe;
    if (*trete > maks)
        maks = *trete;
    minim = *pervoe;
    if (*vtoroe < minim)
        minim = *vtoroe;
    if (*trete < minim)
        minim = *trete;
    sred = *pervoe + *vtoroe + *trete - maks - minim;
    *pervoe = maks;
    *vtoroe = minim;
    *trete = sred;
}
int main(void)
{
    double pervoe, vtoroe, trete;
    printf("Введите три числа через пробел: ");
    scanf("%lf %lf %lf", &pervoe, &vtoroe, &trete);
    printf("До функции:    %.2f %.2f %.2f\n", pervoe, vtoroe, trete);
    pereschet(&pervoe, &vtoroe, &trete);
    printf("После функции: %.2f %.2f %.2f\n", pervoe, vtoroe, trete);
    return 0;
}
