#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secim;
    int eded;

    // Генерация случайного числа
    srand(time(0));
    eded = rand() % 100 + 1; // число от 1 до 100

    printf("=== Tək-Cüt Təxmin Oyunu ===\n");
    printf("0 - Cüt (even)\n");
    printf("1 - Tək (odd)\n");
    printf("Seciminizi daxil edin: ");
    scanf("%d", &secim);

    printf("Kompüterin seçdiyi ədəd: %d\n", eded);

    if (eded % 2 == 0 && secim == 0) {
        printf("Düz tapdınız! Ədəd cütdür.\n");
    }
    else if (eded % 2 == 1 && secim == 1) {
        printf("Düz tapdınız! Ədəd təkdir.\n");
    }
    else {
        printf("Səhv tapdınız!\n");
    }

    return 0;
}
