// IKI FAKLI DİZİDEKİ AYNI KONUMDAKİ SAYILARI DEGISME



#include<stdio.h>
#include<stdlib.h>


void elemandegis(int *dizi1,int *dizi2,int N,int konum){


int i;
int temp=*(dizi1+konum);
*(dizi1+konum)=*(dizi2+konum);
*(dizi2+konum)=temp;





}


int main(){
int N;
printf("Dizi boyutu gir:");
scanf("%d",&N);
int *dizi1=(int *)malloc(sizeof(int)*N);
int *dizi2=(int *)malloc(sizeof(int)*N);


int i;
printf("Birinci dizi elemanlari gir:\n");
for(i=0;i<N;i++){
    printf("%d.sayiyi gir:",i+1);
    scanf("%d",(dizi1+i));
}
printf("\nIkinci dizi elemanlari gir:\n");
for(i=0;i<N;i++){
    printf("%d.sayiyi gir:",i+1);
    scanf("%d",(dizi2+i));
}

printf("\n1.Dizi:");
for(i=0;i<N;i++){
    printf("%d ",*(dizi1+i));
}

printf("\n2.Dizi:");
for(i=0;i<N;i++){
    printf("%d ",*(dizi2+i));
}






int konum;
printf("\nDegisecek konumu gir (0-%d arasi):", N - 1);
scanf("%d",&konum);

elemandegis(dizi1,dizi2,N,konum);


printf("\nYeni 1.Dizi:");
for(i=0;i<N;i++){
    printf("%d ",*(dizi1+i));
}

printf("\nYeni2.Dizi:");
for(i=0;i<N;i++){
    printf("%d ",*(dizi2+i));
}


free(dizi1);
free(dizi2);



}