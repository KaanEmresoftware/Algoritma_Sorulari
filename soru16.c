#include<stdio.h>

#define boyut 10

int kuyurk[boyut];

int ilk=-1;
int son=-1;

int bosmu(){
    if(ilk==-1)
        return 1;
    else
        return 0;
}

int dolumu(){
    if(son==boyut-1)
        return 1;
    else
        return 0;
}


void ekle(int data){
    if(dolumu()==1){
        printf("Kuyurk Dolu\n");
        return;
    }
    if(ilk=-1){
        ilk++;

    }
    son++;
    kuyurk[son]=data;
    printf("%d Eklendi\n",data);
}

void cikar(){
    if(bosmu()==1){
        printf("Kuyruk Bos\n");
        return;
    }
    int data=kuyurk[ilk];
    if(ilk==son){
        ilk=-1;
        son=-1;
    }
    else{
        ilk++;
    }
    printf("%d Cikarildi\n",data);
}



void listele(){
    if(bosmu()==1){
        printf("Kuyurk Bos\n");
        return;
    }
    printf("Kuyurk: ");
    for(int i=ilk;i<=son;i++){
        printf("%d ",kuyurk[i]);
    }
    printf("\n");
}




int main(){
    ekle(10);
    ekle(20);
    ekle(30);
    ekle(40);
    ekle(50);
    listele();
    cikar();
    cikar();
    listele();
}