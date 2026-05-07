#include<stdio.h>
#include<stdlib.h>


typedef struct Node{
    int data;
    struct Node *sonraki;
}Node;

Node *ilk=NULL;


void basaekle(int veri){
    Node *yeni=(Node *)malloc(sizeof(Node));
    yeni->data=veri;
    yeni->sonraki=ilk;
    ilk=yeni;
    printf("%d Basa Eklendi\n",veri);

}

void sonaekle(int veri){
    Node *yeni=(Node *)malloc(sizeof(Node));
    yeni->data=veri;
    yeni->sonraki=NULL;
    if(ilk==NULL){
        ilk=yeni;
    }
    else{
        Node *gecici=ilk;
        while(gecici->sonraki!=NULL){
            gecici=gecici->sonraki;
        }
        gecici->sonraki=yeni;
    }
    printf("%d Sona Eklendi\n",veri);
}

void arayaekle(int aranan,int veri){
    if(ilk==NULL)   return;
    Node *gecici=ilk;
    while(gecici!=NULL){
        if(gecici->data==aranan){
            Node *yeni=(Node *)malloc(sizeof(Node));
            yeni->data=veri;
            yeni->sonraki=gecici->sonraki;
            gecici->sonraki=yeni;
            printf("%d Araya Eklendi\n",veri);
            return;
        }
        gecici=gecici->sonraki;

    }

}