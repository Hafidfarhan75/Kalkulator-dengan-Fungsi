#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void petunjuk();

main ()
{
petunjuk();

double Hasil;
double Angka;
double AngkaMasukan;
char op;
char jwb;

cout << "Masukan Angka = ";
cin >> Angka;
do
{
if (Angka == 0) {
cout << "MasukanAngka = ";
cin >> Angka;
}
cout << "Operasi : ";
cin >> op;

switch(op)
{
case 'c' : Angka = 0;
break;

case '+' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka + AngkaMasukan;
cout << "Jumlahnya adalah :" << Hasil << endl;
Angka = Hasil;
break;

case '-' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka - AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '*' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka * AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '/' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = Angka / AngkaMasukan;
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

case '^' : cout << "Masukan Angka : ";
cin >> AngkaMasukan;
Hasil = pow(Angka,AngkaMasukan);
cout << "Hasilnya adalah : " << Hasil << endl;
Angka = Hasil;
break;

}
cout << "Apakah penghitungan mau dilanjutkan(Y/T) \n";
cin >> jwb;
}
while (jwb == 'Y' || jwb == 'y');
return 0;
}

void petunjuk()
{
cout << "Nama : Ahmad Hafid Farhan\n";
cout << "Nim   : 0110219046\n";
cout << "Prodi  : S1 Teknik Informatika\n";
cout << " STT Terpadu Nurul Fikri\n";
cout << "=======================================================================\n";
cout << "\t\tPROGRAM CALCULATOR SEDERHANA\t\t\n";
cout << " Penjumlahan \n";
cout << " Pengurangan \n";
cout << " Perkalian \n";
cout << " Pembagian \n";
cout << "=======================================================================\n";
}
