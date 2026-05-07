#include<stdio.h>

#define boyut 5


int yigit[boyut];
int top=-1;


int bosmu(){
    if(top==-1)
        return 1;
    else
        return 0;
}

int dolumu(){
    if(top==boyut-1)
        return 1;
    else
        return 0;
}



void ekle(int data){
    if(dolumu()==1){
        printf("Yigit Dolu\n");
        return;
    }
    top++;
    yigit[top]=data;
    printf("%d Eklendi\n",data);
}


void cikar(){
    if(bosmu()==1){
        printf("Yigit Bos\n");
        return;
    }
    int data=yigit[top];
    top--;
    printf("%d Cikarildi\n",data);
}


void listele(){
    if(bosmu()==1){
        printf("Yigit Bos\n");
        return;
    }
    printf("Yigit: ");
    for(int i=0;i<=top;i++){
        printf("%d ",yigit[i]);
    }
    printf("\n");
}


int main(){
    ekle(10);
    ekle(20);
    ekle(30);
    ekle(40);
    listele();
    cikar();
    cikar();
    listele();
}