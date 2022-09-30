#include <iostream>>
#include <conio.h>
#include <windows.h>

using namespace std;
int main () {

cout<< "Nama: Hikmah Muthi'ah"<<endl;
cout<< "NIM: 422021618033"<<endl;
cout<< "Prodi/semester: TI/1"<<endl;

cout<< "===================================="<<endl;
cout << "====menghitung luas dan volume bola==="<<endl;
cout<< "===================================="<<endl;


int jari;
long int luas, Volume;
float phi=3.14;
cout<<("menghitung luas bola")<<endl;
cout<<endl;
cout<<("masukkan jari-jari");cin>>jari;
Volume=(4/3*phi*jari*jari*jari);
luas=4*jari*jari*jari;
cout<<endl;
cout<<("volume bola adalah:")<<Volume;
cout<<endl;
cout<<("luas bola adalah:")<<luas;
return 0;
}







