#include <iostream>
using namespace std;
void konversi(int bilangan, int jam, int menit, int detik);
int main()
{ int bilangan, jam=0, menit=0, detik=0;
	cout<<"Bilangan: ";
	cin >> bilangan;
	konversi(bilangan, jam, menit, detik);
	
}
	void konversi(int bilangan, int jam, int menit, int detik){
		int sisa = bilangan%3600;
		jam = bilangan/3600;
		int sisa2 = sisa%60;
		menit = sisa/60;
		detik = sisa2;
		cout << "Bilangan = " << bilangan << endl;
		cout << bilangan << " detik = " << jam << " jam " << menit << " menit " << detik << " detik"<<endl;
	}
