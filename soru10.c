//   ALINAN 4 BASAMAKLI SAYILARI MATRİXTE YAZDIRMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int matrix[5][4];
    int dizi[5];
    int sayi1,sayi2;
    int i,j;
    for(i=0;i<5;i++){
        printf("%d.sayiyi gir:",i+1);
        scanf("%d",&sayi1);
        dizi[i]=sayi1;
    }


    for(i=0;i<5;i++){
         sayi2=dizi[i];
        for(j=3;j>=0;j--){
            matrix[i][j]=sayi2%10;
            sayi2=sayi2/10;
            
        }
       for(j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    }





