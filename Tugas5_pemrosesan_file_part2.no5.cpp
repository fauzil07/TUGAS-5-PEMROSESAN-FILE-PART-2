#include <fstream>
#include<iostream>
using namespace std;
int main () {
ofstream mhsFile;
mhsFile.open ("datamhs.txt", ios::app);
mhsFile <<"Nama : Muhamad Fauzil Anasara ";
mhsFile <<"\nStambuk : 13020190263";
mhsFile <<"\nkelas : A5";
mhsFile.close();
return 0;
}
