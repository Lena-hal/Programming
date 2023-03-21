#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char k1='1', k2='2', k3='3', k4='4', k5='5', k6='6', k7='7', k8='8'; //1+7, 2+8, 3+6, 4+5
    char ka='?', kb='!', kc='+', kd='-', ke='-', kf='+', kg='?', kh='!';
    int pokusy = 0, pary = 4,karta1,karta2;

    while (pary > 0) {
        system("cls");
        printf("### ### ### ###\n");
        printf("#%c# #%c# #%c# #%c# \n", k1, k2, k3, k4);
        printf("### ### ### ###\n\n");

        printf("### ### ### ###\n");
        printf("#%c# #%c# #%c# #%c# \n", k5, k6, k7, k8);
        printf("### ### ### ###\n");
        printf("zadej kartu 1:\n");
        scanf("%i", &karta1);
        switch (karta1) {
        case(1): printf("%c\n", ka); break;
        case(2): printf("%c\n", kb); break;
        case(3): printf("%c\n", kc); break;
        case(4): printf("%c\n", kd); break;
        }
        printf("zadej kartu 2:\n");
        scanf("%i", &karta2);
        switch (karta2) {
        case(5): printf("%c\n", ke); break;
        case(6): printf("%c\n", kf); break;
        case(7): printf("%c\n", kg); break;
        case(8): printf("%c\n", kh); break;
        }
        if (karta1 == 1 && karta2 == 7) {
            k1 = ' ';
            k7 = ' ';
            pary--;
        }
        if (karta1 == 2 && karta2 == 8) {
            k2 = ' ';
            k8 = ' ';
            pary--;
        }
        if (karta1 == 3 && karta2 == 6) {
            k3 = ' ';
            k6 = ' ';
            pary--;
        }
        if (karta1 == 4 && karta2 == 5) {
            k4 = ' ';
            k5 = ' ';
            pary--;
        }
        pokusy++;
        getchar(); getchar();
        

        }
    system("cls");
    printf("VYHRAL JSI");
    getchar(); getchar();
}
    


