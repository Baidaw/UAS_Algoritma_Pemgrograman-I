#include <iostream>
using namespace std;
int main(){ 
	int pil,nilai,nisn,gel,registrasi, pembagunan, pengenalan, jaket, total, bayar, kembalian;
	char back, prodi[20], alamat[20], fakultas[20];
	string nama;
	do{
		{
			cout<<"========================================================\n";
 			cout<<" REGISTRASI PENERIMAAN MAHASISWA BARU UNIVERSITAS MADURA \n";
 			cout<<"========================================================\n\n"; 
 			cout<<"Layanan yang anda inginkan\n";
 			cout<<"==============================\n";
 			cout<<"1. Pendaftaran \n";
 			cout<<"2. Registrasi Kuliah\n";
 			cout<<"3. Exit \n";
 			cout<<"==============================\n\n";
 			cout<<"Pilihan layanan (1/2/3) ? ";
 			cin>>pil;
 			system ("cls");
 			while(pil==1){
 				cout<<"==============================\n";
				cout<<" layanan Pendaftaran\n";
 				cout<<"==============================\n\n";
 				cout<<"Masukkan nama : ";
 				cin>>nama;
 				cout<<"Masukkan NISN : ";
 				cin>>nisn;
 				cout<<"Fakultas      : ";
 				cin>>fakultas;
 				cout<<"Program studi : ";
 				cin>>prodi;
 				cout<<"Masukkan alamat : ";
 				cin>>alamat;
 				cout<<"Nilai Hasil Seleksi  : ";
 				cin>>nilai;
 				cout<<endl;
 				system ("cls");
 				if(nilai>75){
 				cout<<"+------------------------------------------------------+"<<endl;
 				cout<<"|                     PENGUMUMAN                       |"<<endl;
 				cout<<"+------------------------------------------------------+"<<endl;
 				cout<<"  Pendaftar dengan Nama : "<<nama<<endl;
 				cout<<"                   NISN : "<<nisn<<endl;
 				cout<<"               Fakultas : "<<fakultas<<endl;
 				cout<<"                  Prodi : "<<prodi<<endl;
 				cout<<"+------------------------------------------------------+"<<endl;
 				cout<<"|selamat anda diyatakan DITERIMA DI UNIVERSITAS MADURA |"<<endl;
 				cout<<"+------------------------------------------------------+"<<endl;
 				cout<<"\n\n";
				}else{
				cout<<"+---------------------------------------------------------+"<<endl;
 				cout<<"|                       PENGUMUMAN                        |"<<endl;
 				cout<<"+---------------------------------------------------------+"<<endl;
 				cout<<"  Pendaftar dengan Nama : "<<nama<<endl;
 				cout<<"                   NISN : "<<nisn<<endl;
 				cout<<"               Fakultas : "<<fakultas<<endl;
 				cout<<"                  Prodi : "<<prodi<<endl;
 				cout<<"+---------------------------------------------------------+"<<endl;
 				cout<<"|Maaf anda diyatakan tidak DITERIMA DI UNIVERSITAS MADURA |"<<endl;
 				cout<<"+---------------------------------------------------------+"<<endl;
 				cout<<"\n\n";;
				}
 				break;
			}
			while(pil==2){
			 	cout<<"==============================\n";
				cout<<" layanan Registrasi Kuliah\n";
 				cout<<"==============================\n\n";
 				cout<<"   DAFTAR BIAYA REGISTRASI KULIAH"<<endl;
 				cout<<"+----------+-----------------------------+-----------------+---------------------------+------------------+"<<endl;
 				cout<<"|Gelombang | uang registrasi persemester | uang pembagunan | program pengenalan kampus | jaket almaamater |"<<endl;
 				cout<<"+----------+-----------------------------+-----------------+---------------------------+------------------+"<<endl;
 				cout<<"|    1     |         100.000             |    2.000.000    |      150.000              |      125.000     |"<<endl;
 				cout<<"|    2     |         100.000             |    2.500.000    |      150.000              |      125.000     |"<<endl;
 				cout<<"|    3     |         100.000             |    3.000.000    |      150.000              |      125.000     |"<<endl;
 				cout<<"+----------+-----------------------------+-----------------+---------------------------+------------------+"<<endl;
 				cout<<"  Pendaftar dengan Nama : ";
 				cin>>nama;
 				cout<<"                   NISN : "<<nisn<<endl;
 				cout<<"               Fakultas : "<<fakultas<<endl;
 				cout<<"                  Prodi : "<<prodi<<endl;
 				cout<<"Masukkan Gelombag anda  : ";
 				cin>>gel;
 				if(gel==1){
 					pembagunan=2000000;
				 }else{
				 	if(gel==2){
				 	pembagunan=2500000;
					 }else{
					 	if(gel==3){
					 		pembagunan=3000000;
						 }
					 }
				 }
				 registrasi=100000;
				 pengenalan=150000;
				 jaket=125000;
				 total=registrasi+pembagunan+pengenalan+jaket;
				 cout<<"----------------------------------------------"<<endl;
				 cout<<"Total Biaya Registrasi anda Rp "<<total<<endl;
				 cout<<"----------------------------------------------"<<endl;
				 cout<<"Masukkan uang anda bayar : ";
				 cin>>bayar;
				 kembalian=bayar-total;
				 cout<<"kembalian uang anda : "<<kembalian<<endl;
 				break;
 				system ("cls");
			}
			while(pil==3){
				goto end;
			}  
		}
		end:
		cout<<" Menu Exit \n";
		cout<<"---------------------------------------\n\n";
 		cout<<"Apakah Anda Ingin lajut ke Layanan lain (Y/N) ? ";
		cin>>back;
		system ("cls");
	}
	while ((back=='Y')||(back=='y'));
	cout<<endl;
	system ("cls");
	cout<<"Terima Kasih Atas Registrasi Yang Anda Lakukan";
}
