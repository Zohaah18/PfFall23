/**
* programmer:Zoha Ahmed
* Desc: question 3, Assignment 2
* Date: 31 October,2023
*
*/

include <stdio.h>

int main() {
    int f[5][2],i,m[5],e[5];

    for ( i = 0; i < 5; i++) {
        printf("Day %d - Morning (0 or 1): ", i + 1);
        scanf("%d", &f[i][0]);
        printf("Day %d - Evening (0 or 1): ", i + 1);
        scanf("%d", &f[i][1]);
    }

    printf("Enter prices for morning flights:\n");
    for ( i = 0; i < 5; i++) {
        printf("Day %d: $", i + 1);
        scanf("%d", &m[i]);
    }

    printf("Enter prices for evening flights:\n");
    for (i = 0; i < 5; i++) {
        printf("Day %d: $", i + 1);
        scanf("%d", &e[i]);
    }

    int bestmorning = -1;
    int bestevening = -1;
    int cheapestmorning = -1;
    int cheapestevening = -1;

    for (i = 0; i < 5; i++) {
        if (f[i][0] == 1) {
            if (m[i] < cheapestmorning || cheapestmorning == -1) {
                cheapestmorning = m[i];
                bestmorning = i;
            }
        }
        if (f[i][1] == 1) {
            if (e[i] < cheapestevening || cheapestevening == -1) {
                cheapestevening = e[i];
                bestevening = i;
            }
        }
    }

    printf("1. Best option based on time and price:\n");
    printf("Morning: %d on Day %d for $%d\n", f[bestmorning][0], bestmorning + 1, cheapestmorning);
    printf("Evening: %d on Day %d for $%d\n", f[bestevening][1], bestevening + 1, cheapestevening);

    int dd;
    printf("Enter the desired day (1 to 5): ");
    scanf("%d", &dd);
    dd--;

    if (dd >= 0 && dd < 5) {
        printf("4. Availability and price for Day %d:\n", dd + 1);
        printf("Morning: %d for $%d\n", f[dd][0], m[dd]);
        printf("Evening: %d for $%d\n", f[dd][1], e[dd]);
    } else {
        printf("4. Invalid day selection.\n");
    }
}