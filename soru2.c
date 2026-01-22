// ARANAN KAREKTER ADETİ BULMA VE ARANAN HARFİN İLK KONUMUNU BULMA


#include<stdio.h>
#include<stdlib.h>

void harfara(char *kelime,char aranacak,int *konum,int *adet){
    int i=0,sayac=0;
    while(*(kelime+i)!='\0'){
        if(*(kelime+i)==aranacak){
            sayac++;
            if(sayac==1){
                *konum=i+1;
            }
        }
        i++;
    }
*adet=sayac;



}





int main(){
    char *kelime=(char *)malloc(sizeof(char)*80);
    char aranacak;
    int *konum=(int *)malloc(sizeof(int));
    int *adet=(int *)malloc(sizeof(int));
    printf("Kelime gir:");
    gets(kelime);
    printf("Aranacak harf:");
    scanf(" %c",&aranacak);

    harfara(kelime,aranacak,konum,adet);

        if(*adet>0){
            printf("%d adet bulundu.",*adet);
            printf(" ilk konum=%d",*konum);
        }
        else{
            printf("Bulunamadi");
        }
        free(kelime);
        free(konum);
        free(adet);

    }



