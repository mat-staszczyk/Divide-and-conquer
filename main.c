#include <stdio.h>

int i = 0, m = 1, w = 100, temp;
char l;

int main() {
    printf("Pomysl o liczbe z przedzialu 1-100\n");
    temp = (m+w)/2
    printf("Czy Twoja liczba to %d? (t/n)\n", temp;
    scanf(" %c", &l);

    switch (l) {
        case 't':
            printf("Twoja liczba to %d.", temp);
            break;
        case 'n':
            while (m <= w)
                printf("Czy Twoja liczba jest wieksza od %d? (t/n)\n", temp;
                scanf(" %c", &l);
                if (l == 't') {
                    m = temp
                    if (w-m == 1) {
                        printf("Liczba o ktorej pomyslales to %d, prawda?\n", m);
                        return 0;
                    }

                }
                else if (l == 'n') {
                    w = temp;
                    if (m <= w) {
                        printf("Liczba o ktorej pomyslales to %d, prawda?\n", temp);
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
    return 0;
}
