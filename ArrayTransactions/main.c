#include <stdio.h>
#define SIZE 12

int main() {
    
    int x[SIZE] = {30,25,22,17,98,47,3,55,126,10,49,11};
    int secimsoru=0;
    int secimsayi=0;
    int bolum=0;
    int gecici, i;
    char devam;
    
soru:
    printf("\nNe Yapmak İstersiniz ?\n\n");
    printf("1. Dizideki, Girdiğiniz Sayıya Kalansız Bölünen Elemanları Görmek İçin ---> 1\n2. Küçükten Büyüğe Sıralanmış Dizideki İstediğiniz Elemanı Görmek İçin ---> 2\n\n");
    printf("Yapmak İstediğiniz İşlemin Kodunu Giriniz: ");
    scanf("%d", &secimsoru);
    if (secimsoru==1) {
        for(i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE-1; j++) {
         if(x[j]>x[j+1]){
          gecici=x[j];
          x[j]=x[j+1];
          x[j+1]=gecici;
         }
        }
       }
        printf("\nLütfen Bir Sayı Giriniz: ");
        scanf("%d", &secimsayi);
        for (int i=0; i<SIZE; i++) {
            if (x[i] %secimsayi==0) {
                printf("\n");
                printf("Dizide, Girdiğiniz Sayıya Tam Bölünen Sayı(lar): %d ", x[i] );
                bolum = 1;
            }
        }
        if (bolum==0){
            printf("\nDizide, Girdiğiniz Sayıya Tam Bölünen Sayı Yoktur. ");
        }
    }
    else if (secimsoru==2) {
        for(i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE-1; j++) {
         if(x[j]>x[j+1]){
          gecici=x[j];
          x[j]=x[j+1];
          x[j+1]=gecici;
         }
        }
       }
    yanlis:
        printf("\nLütfen 1-12 Aralığında Bir Sayı Giriniz: ");
        scanf("%d", &secimsayi);
        if (secimsayi>=1 && secimsayi<=12) {
            printf("\n");
            printf("Dizideki %d. En Küçük Sayı: %d ", secimsayi, x[secimsayi-1]);
        }
        else {
            printf("\nGeçersiz Bir Değer Girdiniz!");
            goto yanlis;
        }
    }
    else {
        printf("\nGeçersiz İşlem Kodu Girdiniz!");
    }
gecersiz:
        printf("\n\nBaşka İşlem Yapmak İster Misiniz?\n");
        printf("Evet İçin ---> E/e\nHayır İçin ---> H/h\n");
        scanf("%s", &devam);
        if(devam=='e' || devam=='E') {
            goto soru;
        }
        else if(devam=='h' || devam=='H') {
            return 0;
        }
        else {
            printf("Geçersiz Bir Karakter Girdiniz.");
            goto gecersiz;
        }
    return 0;
}
