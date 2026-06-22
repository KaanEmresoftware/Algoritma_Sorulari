
package com.mycompany.soru18;


public class Urun {
    
    private String ad;
    private int en ;
    private  int boy;
    private int yukseklik;
    
    
    public void setAd(String gad){
        this.ad=gad;
    }
    
    public void setEn(int gen){
        this.en=gen;
    }
    
    public void setBoy(int gboy){
        this.boy=gboy;
    }
    
    public void setYuk(int gyuk){
        this.yukseklik=gyuk;
    }
    
   public int AlanHesapla(){
       return 2 * ((this.en * this.boy) + (this.en * this.yukseklik) + (this.boy * this.yukseklik));
   }
    
    public void BilgiYazdir(){
        System.out.println("Urun Ad:"+this.ad); 
        System.out.println("Urun En:"+this.en);
        System.out.println("Urun Boy:"+this.boy);
        System.out.println("Urun Yukseklik:"+this.yukseklik);
       System.out.println("Urun Tüm  Alan:"+this.AlanHesapla());

    }
    
}
