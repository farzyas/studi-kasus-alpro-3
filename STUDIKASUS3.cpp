#include<iostream>

using namespace std;
int main (){
 int kode,harga,jumlah,total,bayar,kembali;
 char mad;
 do
 {

 cout<<"Menu Makanan rumah makan"<<endl;
 cout<<""<<endl;
 cout<<"Menu Makanan Harga"<<endl;
 cout<<"1. ayam geprek   Rp.21.000"<<endl;
 cout<<"2. ayam goreng   Rp.17.000"<<endl;
 cout<<"3. udang goreng  Rp.19.000"<<endl;
 cout<<"4. cumi Goreng   Rp.20.000"<<endl;
 cout<<"5. ayam bakar Rp.25.000"<<endl;


 cout<<'\n'<<"Masukan No Menu Pilihan : ";
 cin>>kode;
 switch (kode){
 case 1:
  cout<<'\n'<<"ayam geprek"<<endl;
  harga=21000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
    total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
    kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 2:
  cout<<'\n'<<"ayam goreng"<<endl;
    harga=17000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
    total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
    kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 3:
  cout<<'\n'<<"udang goreng"<<endl;
    harga=19000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 case 4:
  cout<<'\n'<<"cumi Goreng"<<endl;
    harga=20000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
   case 5:
   cout<<'\n'<<"udang Goreng"<<endl;
    harga=25000;
  cout<<"Masukan Jumlah Pesanan : ";
  cin>>jumlah;
   total=harga*jumlah;
  cout<<"Total Harga  : Rp. "<<total<<endl;
  cout<<"Uang yang Dibayar : Rp. ";
  cin>>bayar;
   kembali=bayar-total;
  cout<<"Kembali   : Rp. "<<kembali<<endl;
  cout<<"Masih ada Y/T  : ";
  cin>>mad;
  break;
 default:
 cout<<"Kode yang anda masukkan tidak ada";
 }
 }
 while (mad/='Y');
 cout<<"Terimah Kasih Atas Kunjungan Anda"<<endl;
 return 0;
}
