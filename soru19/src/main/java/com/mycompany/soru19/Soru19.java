package com.mycompany.soru19;

import java.util.Scanner;

public class Soru19 {

    public static void main(String[] args) {
        Ogrenci ogrenciler[] = new Ogrenci[3];
        
        Scanner klavye = new Scanner(System.in);
        
        String ad;
        int vize;
        int Final;
        
        for(int i = 0; i < 3; i++){
            System.out.printf("Ad gir:");
            ad = klavye.nextLine();
            
            System.out.printf("Vize:");
            vize = klavye.nextInt();
            
            System.out.printf("Final:");
            Final = klavye.nextInt();
            klavye.nextLine();
            
            ogrenciler[i] = new Ogrenci();
            
            ogrenciler[i].setAd(ad);
            ogrenciler[i].setVize(vize);
            ogrenciler[i].setFinalnot(Final);
        }
        
        ogrenciler[0].BilgiYazdir();
        ogrenciler[1].BilgiYazdir();
        ogrenciler[2].BilgiYazdir();
    }
}