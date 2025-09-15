#include <math.h>
#include <stdio.h>
#include <windows.h>

void l211() {
    printf("1 и 2 число; \n");
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("%d большее число\n", a);
        printf("%d меньшее число\n", b);
    }
    if (a < b) {
        printf("%d большее число\n", b);
        printf("%d меньшее число\n", a);
    }
}

void l212() {
    int a, b, c;
    printf("1, 2 и 3 число: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d самое большое", max(max(a,b), max(b,c)));
}

void l213() {
    int a;
    printf("Температура: ");
    scanf("%d", &a);
    if (a < 18) {
        printf("холодно\n");
    }
    if (a >= 18 & a < 22) {
        printf("прохладно\n");
    }
    if (a >= 22 & a < 26) {
        printf("тепло\n");
    }
    if (a >= 26) {
        printf("жарко\n");
    }
}

void l214() {
    printf("5 чисел: ");
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int m = max(max(max(a,b), max(c,d)), e);
    printf("%d самое большое", m);
}

void l215() {
    //Блок схема
    printf("Температура: ");
    int a;
    scanf("%d", &a);
    if (a < -25) {
        printf("мороз");
    }
    else if (a >= -25 & a < 9) {
        printf("холодно");
    }
    else if (a >= 9 & a < 22) {
        printf("тепло");
    }
    else if (a >= 22) {
        printf("жарко");
    }
}

void l216() {
    //б
    printf("Цена: ");
    int a;
    scanf("%d", &a);
    if (a < 13000) {
        printf("дешево");
    }
    else if (a >= 13000 & a < 40000) {
        printf("нормально");
    }
    else if (a >= 40000 & a < 80000) {
        printf("дорого");
    }
    else if (a >= 80000) {
        printf("ужас дорого");
    }
}

void l217() {
    //
    printf("Скорость км/ч: ");
    int a;
    scanf("%d", &a);
    if (a < 35) {
        printf("очень медленно");
    }
    if (a >= 35 & a < 60) {
        printf("медленно");
    }
    if (a >= 60 & a < 90) {
        printf("нормально");
    }
    if (a >= 90 & a < 120) {
        printf("быстро");
    }
    if (a >= 120 & a < 1079252847) {
        printf("очень быстро");
    }
    if (a >= 1079252847) {
        printf("мгновенно");
    }
}

void l221() {
    // бс
    printf("Число: ");
    int a;
    scanf("%d", &a);
    int b = 1;
    while (b <= a) {
        printf("%d ", b);
        b++;
    }
}

void l222() {
    //бс
    int a = 1;
    while (a <= 5) {
        printf("2 в %d степени: %.0f \n", a, pow(2, a));
        a++;
    }
}

void l223() {
    float r;
    int n;
    printf("Сколько положили денег и под какой годовой процент? : ");
    scanf("%f %d", &r, &n);
    int year = 1;
    while (year <= 10) {
        float t = r + (r / 100 * n);
        printf("За %d год на счете будет %.2f руб \n", year, t);
        year++;
        r = t;
    }
}

void l224() {
    printf("Число: ");
    int a;
    scanf("%d", &a);
    int b = 1;
    while (b <= a) {
        printf("%d ", b * 2);
        b++;
    }
}

void l225() {
    printf("Число и кратность: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int c = 1;
    while (c <= a) {
        printf("%d ", c * b);
        c++;
    }
}

void l226() {
    //Вывести все натуральные числа от 1 до a, которые не делятся без остатка на 3.
    printf("Число: ");
    int a;
    scanf("%d", &a);
    int c = 1;
    while (c <= a) {
        printf(c % 3 != 0 ? "%d " : "", c);
        c++;
    }
}

//Получает 2500 руб и тратит 500 в месяц
void l227() {
    int a = 24;
    int n = 0;
    int t = 0;
    while (t <= a) {
        printf("%d месяц - %d \n",t, (2500 - 500) * t);
        t++;
    }
}

//224 - код и бс
//225 -
//226 код и бс
//227 код и бс

void main(void) {
    SetConsoleOutputCP(CP_UTF8);
    l227();
}
