#include <stdio.h>
#include <stdlib.h>

void giris();
int toplama();
int cikarma();
int carpma();
int bolme();
int faktoriyel();
int uslu();
int karekokSayi();
int mutlakSayi();
int dikdortgenCevre();



int main() {
	int islem,sonuc=0;
	int sayi1,sayi2;
	int fakSayi;
	int karekok,mutlak;
	int kenar1,kenar2,cevre;
	int yaricap,alan;
	
	
	giris();
	printf("Yapmak istediginiz islemi secin:\n\n");
	printf("1- Toplama\n");
	printf("2- Cikarma\n");
	printf("3- Carpma\n");
	printf("4- Bolme\n");
	printf("5- Faktoriyel hesaplama\n");
	printf("6- Uslu ifade hesaplama\n");
	printf("7- Karekok hesaplama\n");
	printf("8- Mutlak deger hesaplama\n");
	printf("9- Dikdortgen cevre hesaplama\n");
	printf("10- Daire alan hesaplama\n");
	
	
	
	printf("\nSecim: ");
	scanf("%d",&islem);
	switch(islem){
		case 1: 
		  printf("1. sayiyi girin: ");
		  scanf("%d",&sayi1);
		  printf("2. sayiyi girin: ");
		  scanf("%d",&sayi2);
		
		  sonuc=toplama(sayi1,sayi2);
		  printf("Toplama isleminin sonucu: %d",sonuc);
		  break;
		
		case 2: 
		  printf("1. Sayiyi girin: ");
		  scanf("%d",&sayi1);
		  printf("2. Sayiyi girin: ");
		  scanf("%d",&sayi2);
		  
		  sonuc=cikarma(sayi1,sayi2);
		  printf("Cikarma isleminin sonucu: %d",sonuc);
		  break;
		  
		case 3:
		  printf("1. Sayiyi girin: ");
		  scanf("%d",&sayi1);
		  printf("2. Sayiyi girin: ");
		  scanf("%d",&sayi2);
		  
		  sonuc=carpma(sayi1,sayi2);
		  printf("Carpma isleminin sonucu: %d",sonuc);
		  break;
		  
		case 4:
		  printf("1. Sayiyi girin: ");
		  scanf("%d",&sayi1);
		  printf("2. Sayiyi girin: ",&sayi2);
		  scanf("%d",&sayi2);
		  
		  sonuc=bolme(sayi1,sayi2);
		  printf("Bolme isleminizin sonucu: %d",sonuc);
		  break;
		  
		case 5:
		  printf("Faktoriyelini hesaplamak istediginiz sayiyi girin: ");
		  scanf("%d",&fakSayi);
		  printf("Faktoriyel: %d",faktoriyel(fakSayi));
		  break;
		  
		case 6:
		  printf("Taban sayiyi girin: ");
		  scanf("%d",&sayi1);
		  printf("Us sayiyi girin: ");
		  scanf("%d",&sayi2);
		  
		  sonuc=uslu(sayi1,sayi2);
		  printf("Uslu ifadenin sonucu: %d",sonuc);
		  break;
		  
		case 7:
		  printf("Bir sayi girin: ");
		  scanf("%d",&karekok);
		  printf("Girdiginiz sayinin karekoku: %d",karekokSayi(karekok));
		  break;
		  
		case 8:
		  printf("Bir sayi girin: ");
		  scanf("%d",&mutlak);
		  printf("Mutlak deger: %d",mutlakSayi(mutlak));
		  break;
		
		case 9:
		  printf("1. Kenari girin: ");
		  scanf("%d",&kenar1);
		  printf("2. Kenari girin: ");
		  scanf("%d",&kenar2);
		  
		  cevre=dikdortgenCevre(kenar1,kenar2);
		  printf("Kenarlari girilen dikdortgenin cevresi: %d",cevre);
		  break;
		  
		case 10:
		  printf("Yaricap degerini girin: ");
		  scanf("%d",&yaricap);
		  
		  alan=daireAlan(yaricap);
		  printf("Dairenin alani: %d",alan);
		  break;
		  
	}
	
	
	return 0;
}
void giris(int giris){
	printf("********\n");
	printf("* MENU *\n");
	printf("********\n");
}
int toplama(int x,int y){
	return x+y;
}
int cikarma(int x,int y){
	return x-y;
}
int carpma(int x,int y){
	return x*y;
}
int bolme(int x,int y){
	return x/y;
}
int faktoriyel(int x){
	int faktor;
	faktor=1;
	while(x>1){
		faktor=faktor*x;
		x--;
	}
}
int uslu(int x,int y){
	return pow(x,y);
}
int karekokSayi(int x){
	return sqrt(x);
}
int mutlakSayi(int x){
	return fabs(x);
	
}
int dikdortgenCevre(int x,int y){
	return 2*x+2*y;
}
int daireAlan(int x){
	float pi;
	pi=3.14;
	return x*x*pi;
}
