
// Kullanıcıdan [1-10] arası bir integer alın (x diyelim) ve içinde 1'den x'e kadar olan sayıların olduğu bir vector oluşturun
// Oluşan vector'un fibonacci serisini hesaplamak için
// Fn = Fn-1 + Fn-2 işlemini yapacak, parametrelerin integer olduğu, fibonacci isimli ve Fn 'in döndürüldüğü bir fonksiyon yazın
// Bu fonksiyonu double tipi için çalışacak şekilde overload edin
//         toplamda fibonacci isimli 2 fonksiyonunuz olmalı
// fibonacci fonksiyonunu kullanarak orijinal vector'un fibonacci serisini hesaplayıp bu seriyi tutan yeni bir vector oluşturun
// fibonacci serisinin olduğu vector'u ekrana bastırın

#include <iostream>

#include <vector>//vector kutuphanesini sayfaya çagirdim



using namespace std;//isim uzayi tanimladim





int fibonacci(int n) {

if (n <= 1)

return n;

return fibonacci(n-1) + fibonacci(n-2);

}

double fibonacci(double n) {

if (n <= 1)

return n;

return fibonacci(n-1) + fibonacci(n-2);

}



void fibdizi(int input)

{

 // fibonacci serii mi yeni bir vektore atayacagim..

vector<int> fibovector; //fibonacci'mi tutan vektor.

cout<<"Fibonacci seriim: "<<endl;

int total;

int id;

int num1 = 1;

int num2 = 1;

fibovector.push_back(num2);

for(int j=1; j<input; j++){

cout<<num1<< " ";

total = num1 + num2;

num1 = num2;

num2 = total;

fibovector.push_back(num1);

}

cout<<endl;

cout<<endl;

cout <<"fibovector adli vectorumun listesi: " << endl;

for(id=0; id<(int)fibovector.size()-1; id++) cout << fibovector[id] << " ";

cout<<endl;

}



int main()

{

 //int n;

 //int t;

 //t = (n-1) + (n-2);

int x;

int count = 1;

cout << "1-10 arasi bir sayiyi giriniz: ";

cin >> x; // kullanicidan deger aliyorum, x degiskenime atiyorum

vector<int> orijinal; // havuz adinda vektor olusturdum

vector<int>::iterator iteratorum;

iteratorum = orijinal.begin();



for (int i = 0; i <= x; i++)

{

orijinal.push_back(count);

count += 1;

}

cout << endl;



cout <<"orijinal adli vectorumun listesi: " << endl;

for (int i = 0; i<x; i++){

cout << orijinal[i] << " "; //veya vec1.at(i);

}

cout << endl;

cout << endl;

cout << "integer tipinde fibonacci: " << fibonacci(x)<<endl;

cout << "double tipinde fibonacci: " << fibonacci(9.9)<<endl;

cout<<endl;



fibdizi(x+1);



return 0;

}
