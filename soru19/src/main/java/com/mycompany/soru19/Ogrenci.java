
package com.mycompany.soru19;


public class Ogrenci {

private String ad;
private int vize;
private int finalnot;

public void setAd(String gad){
    this.ad=gad;
}

public void setVize(int gvize){
    this.vize=gvize;
}

public void setFinalnot(int Final){
    this.finalnot=Final;
}

public int ortalamaHesapla(){
    return (this.vize *40 /100) + (this.finalnot *60 /100);
}

public void BilgiYazdir(){
    System.out.println("Ogrenci Ad:"+this.ad);
    System.out.println("Ogrenci vize:"+this.vize);
    System.out.println("Ogrenci final:"+this.finalnot);
    System.out.println("Ogrenci Ortalama:"+this.ortalamaHesapla());
    this.gectimikaldimi();

    System.out.println("\n");

    
}


public float siniforthesapla(int dizi[],int N){
    int toplam=0;
    
    for(int i=0;i<N;i++){
        toplam+=dizi[i];
    }
    
    float ortalama= (float) toplam/N;
    return ortalama;
    
}


public void gectimikaldimi(){
    
    if(this.ortalamaHesapla()>=55){
        System.out.println(this.ad+" "+"Adli ogrenci gecti");
    }
    else{
         System.out.println(this.ad+" "+"Adli ogrenci kaldi");
    }
}





    
}
