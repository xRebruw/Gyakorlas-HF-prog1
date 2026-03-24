#include <stdio.h>

int main() {
    int n;

     printf("Hany db szamot szeretnel bevinni?\n");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Hiba! Ervenytelen darabszam.\n");
        return 1;
    }

    int eredeti[n];
    int masolat[n];

   
    for (int i = 0; i < n; i++) {
        printf("%d. szam: ", i + 1);
        if (scanf("%d", &eredeti[i]) != 1) {
            printf("Hiba! Ez nem egy szam.\n");
            return 1;
        }
    }

    
    for (int i = 0; i < n; i++) {
        
        if (eredeti[i] < 0) {
            masolat[i] = -eredeti[i];
        } else {
            masolat[i] = eredeti[i];
        }
    }

    
    printf("\nA bevitt szamok abszolutertekei: ");
    for (int i = 0; i < n; i++) {
        printf("%d", masolat[i]);
        if (i < n - 1) printf(", "); 
    }
    printf("\n");

    printf("A megadott szamok: ");
    for (int i = 0; i < n; i++) {
        printf("%d", eredeti[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}2
