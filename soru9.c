// MATRİS SATIR ORTALAMA VE SUTUNDAKI EN BUYUK ELEMANI  BULMA

#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int matrix[3][3];
    srand(time(0));
    int i,j;
    for(i=0;i<3;i++){
         int toplam=0;
        
        for(j=0;j<3;j++){
            matrix[i][j]=rand()%100;
            printf("%d ",matrix[i][j]);
            toplam+=matrix[i][j];
        }
       float ortalama = (float)toplam / 3;
        
         printf(" -> %d. satir ortalamasi: %.2f\n", i + 1, ortalama);
    }
    printf("\n");
   for(j=0;j<3;j++){
    int buyuk=matrix[0][j];
    for(i=0;i<3;i++){
        if(matrix[i][j]>buyuk){
            buyuk=matrix[i][j];
        }
    }
    printf("\n%d.sutun en buyuk:%d",j+1,buyuk);
   }

return 0;

}

