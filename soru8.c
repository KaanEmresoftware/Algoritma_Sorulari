// MUKEMMEL VE HARSHAD SAYI KONTROLU
#include<stdio.h>





int main(){
    int sayi,gecici,i;
    printf("sayi gir:");
    scanf("%d",&sayi);
    gecici=sayi;


    int toplam1=0;
    int toplam2=0;


// HARSHAD KONTROLU

   while(sayi>0){
    int basamak= sayi%10;
    sayi=sayi/10;
    printf("%d ",basamak);
    toplam1+=basamak;
   }


    printf("\nToplam:%d\n",toplam1);

   //MUKEMMEL KONTROLU



    printf("\nBolenler:\n");

   for(i=1;i<gecici;i++){
    if(gecici%i==0){
        printf("%d ",i);
        toplam2+=i;
    }
   }


printf("\nBolen toplam:%d\n",toplam2);


if(toplam1 != 0 && gecici % toplam1 == 0){
    printf("\nHarshad");
}
else{
    printf("\nHarshad degil");
}

if(gecici != 0 && gecici == toplam2){
    printf("\nMukemmel");
}

else{
    printf("\nMukemmel degil");

}

return 0;

}