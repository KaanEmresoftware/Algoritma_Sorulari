// EN BUYUK ÇİFT VE EN KUCUK TEK SAYİ BULMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int buyukbulcift(int dizi[]){
int buyukcift=dizi[0];
int i; 
for(i=0;i<15;i++){
    if(dizi[i]%2==0 && dizi[i]>buyukcift){
        buyukcift=dizi[i];
    }
}
return buyukcift;
}


int kucukbultek(int dizi[]){
int kucuktek=dizi[0];
int i;
for(i=0;i<15;i++){
    if(dizi[i]%2!=0 && dizi[i]<kucuktek){
        kucuktek=dizi[i];
    }
}
return kucuktek;
}

int main(){
    int dizi[15];
    int i;
    
    srand(time(0));
    for(i=0;i<15;i++){
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);
    }
int ciftbuyuk=buyukbulcift(dizi);
int tekkucuk=kucukbultek(dizi);

printf("\nEn buyuk cift:%d",ciftbuyuk);
printf("\nEn kucuk tek:%d",tekkucuk);
    

}
