#include <iostream>
#include <cmath>
#include "ComplexNumber.h"
#include "MyPair.h"

using namespace std;

// SORU 3 BASLANGI�
double get_average(int sayi_bir, int sayi_iki){
    return (sayi_bir+sayi_iki)/2;
}

void soru3(){
    cout << "2 sayi giriniz" << endl;
    int x,y;
    cin >> x >> y ;
    double sonuc = get_average(x,y);
    cout << endl  <<  "sonuc : " << sonuc << endl;
}
// SORU 3 BITIS


// SORU 2 BASLANGI�
void soru2(){
    int ilk = 2, ikinci = 3;
    MyPair<int> pairim = MyPair<int>(ilk,ikinci);
    int a = pairim.get_first();
    int b = pairim.get_second();
    pairim.set_first(a*2);
    pairim.set_second(b*2);
    a = pairim.get_first();
    b = pairim.get_second();
}
// SORU 2 BITIS


// SORU 1 BASLANGIC
void Display(ComplexNumber cnum){
    cnum.convertToPolarForm();
        cout << "Complex numara = " << cnum.gercek << "+" << cnum.sanal << "i" << endl;
        cout << "Genlik = " << cnum.genlik << endl << "Faz = " << cnum.faz << endl;
    }
void soru1(){
    ComplexNumber myNumber = ComplexNumber(3,5);
    Display(myNumber);
}
// SORU 1 BITIS


int main()
{
    cout << "Hello world!" << endl;
    //soru3();
    //soru2();
    //soru1();

    return 0;
}


