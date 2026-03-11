// DIZIDE ARAMA ALGORİTMALARI


#include<stdio.h>
int buyukbul(int dizi[],int N){
     int enby=dizi[0];
     for(int i=0;i<N;i++){
          if(dizi[i]>enby){
               enby=dizi[i];
          }
     }
     return enby;
}


int kucukbul(int dizi[],int N){
     int enkck=dizi[0];

     for(int i=0;i<N;i++){
          if(dizi[i]<enkck){
               enkck=dizi[i];
          }
     }
     return enkck;
}

void kabarciksiralama(int dizi[],int N){
     int i,j;
     for(i=0;i<N;i++){
          for(j=0;j<N-1-i;j++){
               if(dizi[j]<dizi[j+1]){
                    int gecici=dizi[j];
                    dizi[j]=dizi[j+1];
                    dizi[j+1]=gecici;
               }
          }
     }
}


int lineersearch(int dizi[],int N,int aranacak){

     if(N<0){
          return -1;
     }
     if(dizi[N]==aranacak){
          return N;
     }

     return lineersearch(dizi,N-1,aranacak);

}

void diziyazdir(int dizi[],int N){
     for(int i=0;i<N;i++){
          printf("%d ",dizi[i]);
     }
}


int main(){


     int N;
     printf("N giriniz:");
     scanf("%d",&N);
     int dizi[N];


     for(int i=0;i<N;i++){
          printf("%d.sayiyi gir:",i+1);
          scanf("%d",&dizi[i]);
     }

     kabarciksiralama(dizi,N);
     printf("\nDizi siralandi");
     printf("\n");

     diziyazdir(dizi,N);

     int aranacak;
     printf("\nAranacak elemani gir:");
     scanf("%d",&aranacak);

int konum = lineersearch(dizi,N-1,aranacak);

printf("\nAranan eleman konum:%d",konum);


FILE *dosya;
dosya=fopen("C:\\Projects\\C2\\cProjects\\sayilar.txt","w");


if(dosya==NULL){
     printf("\nDosya acilamadi!!\n");
     return 1;
}

int sayac=0;

for(int i=0;i<N;i++){
     fprintf(dosya,"%d ",dizi[i]);
     sayac++;
     if(sayac%2==0){
          fprintf(dosya,"\n");
     }
}

printf("\nDosya yazma basarili!!");

fclose(dosya);

int ortlama,toplam=0;
for(int i=0;i<N;i++){
     toplam+=dizi[i];
}
 ortlama=toplam/N;

 int enbuyuk=buyukbul(dizi,N);
 int enkucuk=kucukbul(dizi,N);

 printf("\nOrtlama:%d",ortlama);
 printf("\nEn kucuk:%d",enkucuk);
 printf("\nEn buyuk:%d\n\n",enbuyuk);


dosya=fopen("C:\\Projects\\C2\\cProjects\\sayilar.txt","r");

if(dosya==NULL){
     printf("\nDosya acilmadi!!");
     return 1;
}
int k=0;
while(fscanf(dosya,"%d",&dizi[k])!=EOF){
     printf("%d ",dizi[k]);
     k++;
}
printf("\nDosya okuma basarili!!");

fclose(dosya);

}