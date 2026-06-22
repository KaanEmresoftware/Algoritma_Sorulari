package com.mycompany.soru17;

public class ogrenci {

    private int numara;
    private String ad;
    private String Sinif;


    public void setAd(String gad){
        this.ad=gad;
    }


    public void setSinif(String gsinif){
        this.Sinif=gsinif;
    }


    public void setNumara(int gnumara){
        this.numara=gnumara;
    }



    public int getNumara(){
        return this.numara;
    }


    public String getSinif(){
        return this.Sinif;
    }


    public String getAd(){
        return this.ad;
    }

    public void BilgiYazdir(){
        System.out.println("Ogrenci Isim:"+this.ad);
        System.out.println("Ogrenci Numara:"+this.numara);
        System.out.println("Ogrenci Sinif:"+this.Sinif);
    }

}
