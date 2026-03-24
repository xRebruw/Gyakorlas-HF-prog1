#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  

int main() {
    int n, also, felso;

    srand(time(NULL));

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);

    printf("Also hatar: ");
    scanf("%d", &also);

    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    printf("\nA generalt szamok: ");

    for (int i = 0; i < n; i++) {
    
        int random_szam = rand() % (felso - also + 1) + also;
        
        printf("%d ", random_szam);
    }

    printf("\n");

    return 0;
}
