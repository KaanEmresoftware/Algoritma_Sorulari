//NEGATİF SAYİ DİZİYE AKTARMA.

#include<stdio.h>
#include<stdlib.h>
void negatifbul(int *dizi,int *dizi2,int *adet){
    int i=0,sayac=0;
    for(i=0;i<10;i++){
        if(*(dizi+i)<0){
            *(dizi2+sayac)=*(dizi+i);
            sayac++;
        }
    }
*adet=sayac;
}


int main(){

int *dizi=(int *)malloc(sizeof(int)*10);
int *dizi2=(int *)malloc(sizeof(int)*10);

int *adet=(int *)malloc(sizeof(int));
int i;
for(i=0;i<10;i++){
    printf("%d.sayiyi gir:",i+1);
    scanf("%d",(dizi+i));
}
negatifbul(dizi,dizi2,adet);
printf("\nDizi:");
for(i=0;i<*adet;i++){
    printf("%d ",*(dizi2+i));
}
free(dizi);
    free(dizi2);
    free(adet);
}
