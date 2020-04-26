#include <fstream>
#include<iostream>
using namespace std;
int main () {
char nama[50],kelas[10];
int stambuk;
float ipk;

ofstream datamhs;
datamhs.open ("datamhs.txt", ios::app);
cout<<"Nama : ";cin>>nama;
cout<<"Stambuk : ";cin>>stambuk;
cout<<"kelas : ";cin>>kelas;
cout<<"IPK : ";cin>>ipk;
datamhs <<"Nama : "<<nama;
datamhs <<"\nStambuk : "<<stambuk;
datamhs <<"\nkelas : "<<kelas;
datamhs <<"\nIPK : "<<ipk;
datamhs.close();
return 0;
}
