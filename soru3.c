//TERS YAZMA

#include <stdio.h>
#include <stdlib.h>
void terscevir(char *kelime, char *kelime2, int *uzunluk) {
    int i = 0, sayac = 0;
    
    
    while (kelime[i] != '\0') {
        sayac++;
        i++;
    }
    *uzunluk = sayac;

   
    for (i = 0; i < sayac; i++) {
        
        *(kelime2 + i) = *(kelime + (sayac - 1 - i));
    }
    *(kelime2 + sayac) = '\0'; 
}


int main() {
    char cumle[80];  
    char cumle2[80];  
    int uzunlukVal = 0; 

    printf("Cumle gir: ");
    gets(cumle);

    
    terscevir(cumle, cumle2, &uzunlukVal);

    printf("Ters hali: %s\n", cumle2);
    printf("Uzunluk: %d\n", uzunlukVal);

    return 0;
}
