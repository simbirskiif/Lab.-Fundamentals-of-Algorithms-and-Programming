#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <time.h>

void l111() {
    printf("Test Вывод\n");
    printf("\n");
}

void l112() {
    printf("Вывод информации об ученике\n");
    char *name = "Александр";
    const int age = 18;
    char *group = "ПИбд-11";
    printf("Имя: %s \n", name);
    printf("Возраст: %d \n", age);
    printf("Группа: %s \n", group);
    printf("\n");
}

void l113() {
    printf("Вывод информации об ученике в обратном порядке\n");
    char *name = "Александр";
    const int age = 18;
    char *group = "ПИбд-11";
    printf("Группа: %s \n", group);
    printf("Возраст: %d \n", age);
    printf("Имя: %s \n", name);
    printf("\n");
}

void l114() {
    printf("!@#$^&*\n");
    printf("*!@#$^&\n");
    printf("&*!@#$^\n");
    printf("^&*!@#$\n");
    printf("$^&*!@#\n");
    printf("#$^&*!@\n");
    printf("@#$^&*!\n");
}

void l121(float height, float g) {
    printf("Падение с высоты \n\n");
    printf("Предмет падает с высоты %f метров,\nон коснется земли через %f секунд.\n", height, (sqrt(2 * height / g)));
}

void l122() {
    float height;
    const float g = 9.8;
    printf("Падение с высоты + консольный ввод\n\n");
    printf("Введите высоту: ");
    scanf("%f", &height);
    printf("Предмет падает с высоты %f метров,\nон коснется земли через %f секунд.", height, (sqrt(2 * height / g)));
}

void l123() {
    float oneSqMeter;
    float price;
    printf("Покупаем квартиру\n");
    printf("Введите стоимость м² в RUB:");
    scanf("%f", &oneSqMeter);
    printf("Введите количество м²:");
    scanf("%f", &price);
    printf("Квартира будет стоить %.2f RUB \n", (oneSqMeter * price));
}

void l124() {
    float oneSqMeter;
    float price;
    float salary;
    printf("Покупаем квартиру\n");
    printf("Введите стоимость м² в RUB:");
    scanf("%f", &oneSqMeter);
    printf("Введите количество м²:");
    scanf("%f", &price);
    printf("Введите свою зарплату: ");
    scanf("%f", &salary);
    float f = (oneSqMeter * price);
    printf("Квартира будет стоить %.2f RUB \nИ копить на нее надо будет %.1f месяцев(a)\n", f, ceil(f / (salary / 2)));
}

void l125() {
    printf("Простая задача из математики\n");
    int masha = rand() % 99;
    int kolya = rand() % 99;
    printf("У Маши было %d яблок, а у Коли %d\nСколько всего яблок у двоих?\n", masha, kolya);
    while (true) {
        printf("Введите ответ: ");
        int thisAnswer;
        scanf("%i", &thisAnswer);
        if (thisAnswer == masha + kolya) {
            printf("Ответ верный!\n");
            break;
        } else {
            printf("Ответ неверный!\n");
        }
    }
}

void l126() {
    printf("Простая задача из физики\n");
    int speed = (30 + rand() % (150 - 30 + 1)); //От 30 до 150
    int time = 1 + rand() % 10;
    printf("Машина ехала %d час(а/ов) со скоростю %d км/ч\nСколько проехала машина?\n", time, speed);
    while (true) {
        printf("Введите ответ: ");
        int thisAnswer;
        scanf("%i", &thisAnswer);
        if (thisAnswer == speed * time) {
            printf("Ответ верный!\n");
            break;
        } else {
            printf("Овтет неверный!\n");
        }
    }
}

void l127() {
    printf("Простая экономическая задача\n");
    int apples = 2 + rand() % (35 - 2 + 1);
    int bananas = 2 + rand() % (35 - 2 + 1);
    int priceApples = 60 + rand() % (150 - 60 + 1);
    int priceBananas = 60 + rand() % (150 - 60 + 1);
    printf(
        "Ваня купил %d кг яблок за %d RUB за килограмм и %d кг бананов %d RUB за килограмм. Сколько всего Ваня заплатил? \n",
        apples, priceApples, bananas, priceBananas);
    while (true) {
        printf("Введите ответ: ");
        int thisAnswer;
        scanf("%d", &thisAnswer);
        if (thisAnswer == (apples * priceApples) + (bananas * priceBananas)) {
            printf("Ответ верный! \n");
            break;
        } else {
            printf("Ответ неверный!\n");
        }
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
    printf("Лабораторная работа №1.1\n");
    l111();
    printf("Вывод информации об  ученике и в прямом и в обратном порядке:\n");
    printf("\n");
    l112();
    l113();
    printf("В консоли при помощи printf сформирован красивый рисунок \n");
    l114();
    // printf("\n");
    // printf("Лабораторная работа №1.2\n");
    // printf("\n");
    // l121(15, 9.8);
    // l122();
    // l123();
    // l124();
    // printf("\n");
    // printf("Домашняя работа\n");
    // printf("\n");
    // l125();
    // l126();
    l127();
    return 0;
}
