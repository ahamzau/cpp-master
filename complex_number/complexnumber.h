#ifndef COMPLEXNUMBER_H_INCLUDED
#define COMPLEXNUMBER_H_INCLUDED

#include <cmath>
#include <math.h>

class ComplexNumber{
public:
    int gercek, sanal;
    double genlik, faz;
    ComplexNumber(){
    gercek =0; sanal = 0;
    }
    ComplexNumber(int r, int i){
        gercek = r;
        sanal = i;
    }
    void convertToPolarForm(){
         faz = atan(sanal/gercek);
         genlik = sqrt(pow(gercek,2)+pow(sanal,2));
    }
};
ComplexNumber topla(ComplexNumber n1, ComplexNumber n2){
    ComplexNumber sonuc;
    sonuc.gercek = n1.gercek + n2.gercek;
    sonuc.sanal = n1.sanal + n2.sanal;
    return sonuc;
}
ComplexNumber cikar(ComplexNumber n1, ComplexNumber n2){
    ComplexNumber sonuc;
    sonuc.gercek = n1.gercek - n2.gercek;
    sonuc.sanal = n1.sanal - n2.sanal;
    return sonuc;
}
ComplexNumber carp(ComplexNumber n1, ComplexNumber n2){
    ComplexNumber sonuc;
    sonuc.gercek = (n1.gercek*n2.gercek) - (n1.sanal*n2.sanal);
    sonuc.sanal = (n1.gercek*n2.sanal)+(n1.sanal*n2.gercek);
    return sonuc;
}
ComplexNumber bol(ComplexNumber n1, ComplexNumber n2){
    ComplexNumber sonuc;
    double payda = pow(n2.gercek,2) + pow(n2.sanal,2);
    sonuc.gercek = ((n1.gercek*n2.gercek)+(n1.sanal*n2.sanal)) / payda;
    sonuc.sanal = ((n1.sanal*n2.gercek)-(n1.gercek*n2.sanal)) / payda;
    return sonuc;
}


#endif // COMPLEXNUMBER_H_INCLUDED
