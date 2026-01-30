//RANDOM DİZİDEKİ ÇİFT SAYILARIN KONUM VE ADETİNİ BULMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

int N;
printf("Boyut gir:");
scanf("%d",&N);
int *dizi=(int *)malloc(sizeof(int)*N);
int i;
srand(time(0));
printf("Dizi:");
for(i=0;i<N;i++){
    *(dizi+i)=rand()%100;
    printf("%d ",*(dizi+i));
}
int sayac=0,konum;
printf("\nMevcut Olan Konumlar:");
for(i=0;i<N;i++){
    if(*(dizi+i)%2==0){
        sayac++;
        konum=i+1;
        printf("%d  ",konum);
    }
}
if(sayac>0){
    printf("\n%d adet çift sayi var",sayac);
}
else{
    printf("\nBulanamadi");
}

free(dizi);




}