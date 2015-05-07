#include <stdio.h>

int i = 0, m = 1, w = 100, temp;
char l;

int main() {
    printf("Pomysl o liczbe z przedzialu 1-100\n");
    temp = (m+w)/2;
    printf("Czy Twoja liczba to %d? (t/n)\n", temp);
    scanf(" %c", &l);

    switch (l) {
        case 't':
            printf("Twoja liczba to %d.", temp);
            break;
        case 'n':
            while (1) {
                temp = (m+w)/2;
                printf("Czy Twoja liczba jest wieksza od %d? (t/n)\n", temp);
                scanf(" %c", &l);
                if (l == 't') {
                    m = temp;
                    if (m >= w) break;
                } else if (l == 'n') {
                    w = temp;
                    if (m >= w) break;
                } else {
                    printf("Podales bledna odpowiedz.\n");
                    break;
                }
            }
            printf("Liczba o ktorej pomyslales to %d, prawda?\n", temp+1);
            return 0;

        default:
            printf("Podales bledna odpowiedz.\n");
            return 0;
        }
        return 0;
}
