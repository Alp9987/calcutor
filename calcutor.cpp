#include <iostream>
#include <locale.h>
#include <unistd.h> 

// Creator By Alp2024

using namespace std;


void hesapmakinesi() {
	
	int islemsecimi;
	
	float sayi1, sayi2;

	
	cout << "\nİşlem Numaraları\n \n 1 - Toplama\n 2 - Çıkarma\n 3 - Çarpma\n 4 - Bölme\n" << endl << "Lütfen işlem yapmak istediğiniz numarayı seçiniz : ";
	cin >> islemsecimi;
	
	if (islemsecimi > 4 or islemsecimi < 1) {
		cout << "Hatalı işlem yaptınız.\nYeniden Başlatılıyor..." << endl;
		return hesapmakinesi();
	}
	

	else if (islemsecimi == 1) {
		cout << "Birinci sayıyı giriniz ; ";
		cin >> sayi1;
		cout << "İkinci sayıyı giriniz ; ";
		cin >> sayi2;
		
		cout << "Toplama işlemi sonucu : " << sayi1 + sayi2; 
	}
	
	else if (islemsecimi == 2 ) {
		cout << "Birinci sayıyı giriniz ; ";
		cin >> sayi1;
		cout << "İkinci sayıyı giriniz ; ";
		cin >> sayi2;
		
		cout << "Çıkarma işlemi sonucu : " << sayi1 - sayi2; 
	}
		
	else if (islemsecimi == 3 ) {
		cout << "Birinci sayıyı giriniz ; ";
		cin >> sayi1;
		cout << "İkinci sayıyı giriniz ; ";
		cin >> sayi2;
		
		cout << "Çarpma işlemi sonucu : " << sayi1 * sayi2; 
	}
	
		else if (islemsecimi == 4 ) {
		cout << "Birinci sayıyı giriniz ; ";
		cin >> sayi1;
		cout << "İkinci sayıyı giriniz ; ";
		cin >> sayi2;
		
		cout << "Bölme işlemi sonucu bölüm : " << sayi1 / sayi2;
	}
}

int main () 
{
	setlocale(LC_ALL, "Turkish");
		
	cout << "Hesap Makinesi Projesine\nHoş geldiniz " << endl;
	
	
	hesapmakinesi();
	
		

sleep(3);
cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
return main();
}

