#include <iostream>
using namespace std;
 class Musteri {
protected:
	double bakiye = 1000;
};
class Islemler : public Musteri {
public:
	double Miktar ;
	double ParaÇekme() {
		cout << "miktar giriniz" << endl;
		cin >> Miktar;
		if (Miktar >= 0) {
			if (bakiye >= Miktar) {
				bakiye = bakiye - Miktar;
				cout << Miktar << " tl çekildi";
				return bakiye;
			}
			else {
				cout << "yetersiz bakiye" << endl;
			}
		 }
     else{
			cout << "geçersiz miktar" << endl;
		 }
	}
	double ParaYatırma() {
		cout << "miktar giriniz" << endl;
		cin >> Miktar;
		if (Miktar >= 0) {
			bakiye = bakiye + Miktar;
			cout << Miktar << "tl yatırıldı";
			return 0;
		}
		else{
			cout << "geçersiz miktar" << endl;
		}
	}
	void BakiyeGöster() {
		cout << "Mevcut bakiye = "<< bakiye << "tl";
	}
};
int main() {
	setlocale(LC_ALL,"Turkish");
	Islemler islem;
	int secim;
	while (true) {
		cout << "\n--- ATM MENU ---" << endl;
		cout << "1. Bakiye Görüntüle" << endl;
		cout << "2. Para çek" << endl;
		cout << "3. para yatır" << endl;
		cout << "4. çıkış" << endl;
		cout << "seçim yapınız" << endl;
		cin >> secim;
		switch (secim) {
		case 1 :
			islem.BakiyeGöster();
			cout << endl;
			break;
		case 2 :
			islem.ParaÇekme();
			cout << endl;
			break;
		case 3:
			islem.ParaYatırma();
			cout << endl;
			break;
		case 4:
			cout << "çıkış yapıldı" << endl;
			return 0;
			break;
		default :
			cout << "yanlış seçim" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
}