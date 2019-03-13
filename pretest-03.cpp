/*
Nama Program : Struct
Nama         : Fauzan Naufal Taufiqulhakim
NPM          : 140810180044
Tanggal Buat : 13-03-2019
Deskripsi    : Struct
*************************************************/
#include<iostream>
using namespace std;

struct r_mhs{
	char npm[14];
	char nama[40];
	float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData (int& n);
void inputMhs (larikMhs& mhs, int n);
void cetakMhs (larikMhs& mhs, int n);
void sortNama (larikMhs& mhs, int n);

int main(){
	void inputMhs (larikMhs& mhs, int n);
	cout<<"Banyak Mahasiswa : ";cin>><<endl;

	
}
