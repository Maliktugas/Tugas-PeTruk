#include <iostream>
using namespace std;

int main()
{
	cout<<"\n -------------- PENILAIAN AKHIR SEMESTER PEMROGRAMAN TERSTRUKTUR -------------- \n"<<endl;
	
	cout<<" Nama\t: M Malik A R"<<endl;
	cout<<" Kelas\t: V PeTruk"<<endl;
	cout<<" Alamat\t: Jl Ngagel Kel Ngagelrejo Kec Wonokromo Kota Surabaya."<<endl;
	
	cout<<"\n --------------------------- PROGRAM OPERATOR --------------------------- \n"<<endl;
	
	ulang:
	
	int pilihan;
	string ulangi;
	
	cout<<"\n Pilih salah satu jenis operator dibawah ini:"<<endl<<endl;
	cout<<" (1) Operator Aritmetika"<<endl;
	cout<<" (2) Operator Perbandingan"<<endl;
	cout<<" (3) Operator Logika"<<endl<<endl;
	cout<<" Masukan Pilihan: ";
	cin>>pilihan;
	
	switch(pilihan)
	{
		case 1: cout<<"\n INFO: Anda Telah Memilih Operator Aritmetika"<<endl;
			
			int bilangan1, bilangan2;
			int hasil;
		
			cout<<"\n Masukan Angka Ke-1: ";
			cin>>bilangan1;
			
			cout<<"\n Masukan Angka Ke-2: ";
			cin>>bilangan2;
			
			hasil = bilangan1 + bilangan2;
		
			cout<<" Hasil dari "<<bilangan1<<" + "<<bilangan2<<" adalah "<<hasil;
			
			cout<<"\n\n Apakah Ingin Memilih Program Yang Lain? (YA / TIDAK)";
			cin>>ulangi;
		
			if(ulangi == "ya" || ulangi == "YA")
			{
				goto ulang;
			}
			else
			{
				cout<<"\n PROGRAM SELESAI. TERIMA KASIH!!!";
			}
		
		break;
		
		case 2: cout<<"\n INFO: Anda Telah Memilih Operator Perbandingan"<<endl;
			
			int angka1, angka2;
			int perbandingan;
		
			cout<<"\n Masukan Angka Ke-1: ";
			cin>>angka1;
			cout<<"\n Masukan Angka Ke-2: ";
			cin>>angka2;
			
			perbandingan = angka1 > angka2;
		
			cout<<"\n Apakah "<<angka1<<" > "<<angka2<<" ?";
			
			if(perbandingan == 1)
			{
				cout<<" Jawabannya adalah BENAR";
			}
			else
			{
				cout<<" Jawabannya adalah SALAH";
			}
			
			cout<<"\n\n Apakah Ingin Memilih Program Yang Lain? (YA / TIDAK)";
			cin>>ulangi;
		
			if(ulangi == "ya" || ulangi == "YA")
			{
				goto ulang;
			}
			else
			{
				cout<<"\n PROGRAM SELESAI. TERIMA KASIH!!!";
			}
			
		break;
		
		case 3: cout<<"\n INFO: Anda Telah Memilih Operator Logika"<<endl;
			
			int bil1, bil2, bil3, bil4;
			int perbandingan1, perbandingan2;
			
			cout<<" Masukan Angka Ke-1: ";
			cin>>bil1;
			cout<<" Masukan Angka Ke-2: ";
			cin>>bil2;
			cout<<" Masukan Angka Ke-3: ";
			cin>>bil3;
			cout<<" Masukan Angka Ke-4: ";
			cin>>bil4;
			
			perbandingan1 = bil1 < bil2;
			cout<<"\n Apakah "<<bil1<<" < "<<bil2<<" ?";
			
			if(perbandingan1 == 1)
			{
				cout<<" "<<perbandingan1<<" (BENAR) ";
			}
			else
			{
				cout<<" "<<perbandingan1<<" (SALAH) ";
			}
			
			perbandingan2 = bil3 > bil4;
			cout<<"\n Apakah "<<bil3<<" > "<<bil4<<" ?";
			
			if(perbandingan2 == 1)
			{
				cout<<" "<<perbandingan2<<" (BENAR) ";
			}
			else
			{
				cout<<" "<<perbandingan2<<" (SALAH) ";
			}
			
			cout<<"\n\n Jika kedua hasil perbandingan di atas di OR kan, maka: ";
			cout<<perbandingan1<<" OR "<<perbandingan2<<" ?";
			
			if(perbandingan1 || perbandingan2)
			{
				cout<<" Jawabannya adalah BENAR (1)";
			}
			else
			{
				cout<<" Jawabannya adalah SALAH (0)";
			}
			
			cout<<"\n\n Apakah Ingin Memilih Program Yang Lain? (YA / TIDAK)";
			cin>>ulangi;
		
			if(ulangi == "ya" || ulangi == "YA")
			{
				goto ulang;
			}
			else
			{
				cout<<"\n PROGRAM SELESAI. TERIMA KASIH!!!";
			}
			
		break;
	}

