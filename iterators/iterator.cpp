
// Kullanıcıdan 10 tane integer alın ve bunlarla bir vector oluşturun
// Vector'deki elemanların averajını hesaplayın ve sonucu ekrana bastırın
// Vector'deki maximum elemanı bulup (en yüksek değer) ekrana bastırın ve bu değeri // vector'den çıkarın
// Son olarak vector'deki bütün elemanları 16'lık sistemde şu formatta ekrana
// bastırın: 0x3AD

#include <iostream>

#include <vector>//vector kutuphanesini sayfaya çagirdim



using namespace std;//isim uzayi tanimladim



void magicToHex(int k) //sihir gibi void aciyorum :d

{

 // harflerde olacagindan char ile saklayacagim. 50 lik yer yeter bence

 char hex[50];

 // buraya bi tane sayac koyuyorum

 int p = 0;

while(k!=0)

{

 // kalani depoliicam. tanimlamasini yaptim.

 int depo = 0;

 // mod alınca kalanı depoladigim bir depo

 depo = k % 16;



if(depo < 10)

{

hex[p] = depo + 48;

p++;

}

else

 {

 hex[p] = depo + 55;

p++;

}

k = k/16;

}

 // tabi chara ters yaziliyor, bi de biz ters ceviricez

 for(int j=p-1; j>=0; j--)

cout << hex[j];

cout<<" ";

}



int main()

{

int atama;

int max;

max = atama;

int count;

float toplam, averaj = 0;

count = 1;



vector<int> havuz; // havuz adinda vektor olusturdum

 vector<int>::iterator iteratorum;

iteratorum = havuz.begin();

int n = havuz.size();

for (int i = 1; i <= 10; i++)

{

cout << count << ". sayiyi giriniz: ";

cin >> atama; // kullanicidan deger aliyorum, atama degiskenime atiyorum

 havuz.push_back(atama);//atamanin ustune hep yeni cin geldigi icin, her atamami havuz vektorume atiyorum.

 if (atama > max)

max = atama; //buyuk sayiyiden buradan buldum.

 //toplam = toplam+atama; // averaj icin direk cinleri topluyorum.

 // iterator kullanmaya karar verdim :D

 count +=1;

}

cout<<endl;

cout <<"havuz adli vectorumun listesi: " << endl;

for (int i = 0; i<havuz.size(); i++){

cout << havuz[i] << " "; //veya vec1.at(i);

 }

 cout<<endl;



for (iteratorum = havuz.begin(); iteratorum !=havuz.end(); iteratorum++)

{

toplam += *iteratorum;

}



averaj=toplam/havuz.size();

cout<<endl;

cout<<"Vector elemanlarimin toplami : "<<toplam << endl;

cout<<endl;

cout<<"Vector elemanlarimin averaji : "<< averaj << endl;

cout<<endl;

cout<<"Vektorumdeki en buyuk sayi: " << max<<endl;

cout<<endl;

cout<<"Vectorumdeki elemanlarin 16lik sistemde gosterimi: "<<endl;



for (iteratorum = havuz.begin(); iteratorum !=havuz.end(); iteratorum++)

{

int k = *iteratorum;

magicToHex(k); // 16lik sistem gosterimi

 }

 cout<<endl;

cout << endl;



cout<<"En buyuk sayi cikarildi: "<<endl;

for (auto iteratorum = havuz.begin(); iteratorum != havuz.end();) {

(*iteratorum == max) ? iteratorum = havuz.erase(iteratorum) : ++iteratorum;

}

for (int i = 0; i<havuz.size(); i++){

cout << havuz[i] << " "; //ya vektorun elemanlarini direk yazdiran bi fonksiyon yok mu ben yoruldugum icin mi aklima gelmiyor bilemedim. yeniden i++ ile yazdirdim hocam.

 }

 cout<<endl;



return 0;

}
