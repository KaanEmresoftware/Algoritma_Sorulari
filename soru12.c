//RECURSİVE FONKSİYON ILE DOGRUSAL(LİNEER) ARAMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int lineersearch(int dizi[],int N,int aranacak){
   if(N<0){
    return -1;
   }

   if(dizi[N]==aranacak){
    return N;
   }
   return lineersearch(dizi,N-1,aranacak);
}





int main(){


    int N;
    printf("Boyut gir:");
    scanf("%d",&N);

    int dizi[N];
    srand(time(0));

    printf("\nDizi:");

    for(int i=0;i<N;i++){
        dizi[i]=rand()%100;
        printf("%d ",dizi[i]);
        
    }

    int aranacak;
    printf("\nAranacak :");
    scanf("%d",&aranacak);

 int konum  =  lineersearch(dizi,N-1,aranacak);

    if(konum!=-1){
        printf("\nAranan sayinin konum:%d",konum);
    }
    else{
        printf("\nBulunamadi");
    }








}