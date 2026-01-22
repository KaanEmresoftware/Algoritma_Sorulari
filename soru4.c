// KELİME KARAKTER SAYİSİ BULMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 



int main(){

    char cumle[80];
    printf("Cumle gir:");
    gets(cumle);
    int sayac1=0,sayac2=0,i=0;
    while(cumle[i]!='\0'){
        sayac1++;
        i++;
    }
    i=0;
while(cumle[i]!='\0'){
        if(cumle[i]==' '){
            sayac2++;
        }
        i++;
    }
printf("\nKarakter sayisi:%d",sayac1-sayac2);
printf("\nKelime sayisi:%d",sayac2+1);


}
