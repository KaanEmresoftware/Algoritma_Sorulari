//BİR DİZİDEKİ EN BUYUK 1. VE 2. SAYIYI BULMA

#include <stdio.h>
#include<stdlib.h>
#include<time.h>




int main() {
    int N;

    printf("Dizi boyutu:");
    scanf("%d",&N);

    int dizi[N];
    int i;

    srand(time(0));
    
    printf("Dizi:");
    for(i=0;i<N;i++){
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
    }

    int buyuk1=dizi[0];
    int buyuk2=-1;
    for(i=0;i<N;i++){

       if(dizi[i] > buyuk1){
            buyuk2 = buyuk1;  
            buyuk1 = dizi[i]; 
        }

        else if(buyuk2 != buyuk1 && dizi[i] > buyuk2){
            buyuk2 = dizi[i];
        }


    }



printf("\n1.:%d\n",buyuk1);
printf("2.:%d",buyuk2);

    return 0;
}