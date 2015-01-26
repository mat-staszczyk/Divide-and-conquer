#include <stdio.h>

int i = 0, m = 1, w = 100;
char l;

int main() {
    printf("Pomysl o liczbe z przedzialu 1-100\n");

    printf("Czy Twoja liczba to %d? (t/n)\n", (w-m)/2+m);
    scanf(" %c", &l);

    switch (l) {
        case 't':
            printf("Twoja liczba to 50.");
            break;
        case 'n':
            for (i; i < 7; i++) {
            printf("Czy Twoja liczba jest wieksza od %d? (t/n)\n", (w-m)/2+m);
            scanf(" %c", &l);
            if (l == 't') {
                m = (w-m)/2+m+1;
                if (w-m == 1) {
                    printf("Liczba o ktorej pomyslales to %d, prawda?\n", m);
                    return 0;
                }

            }
            else if (l == 'n') {
                w = (w-m)/2+m;
                if (w-m == 1) {
                    printf("Liczba o ktorej pomyslales to %d, prawda?\n", m);
                    return 0;
                }
            } else {
                printf("Podales bledna odpowiedz.\n");
                break;
            }
            }
            printf("Liczba o ktorej pomyslales to %d, prawda?\n", m);
            return 0;
            default:
            printf("Podales bledna odpowiedz.\n");
            return 0;
    }
}
