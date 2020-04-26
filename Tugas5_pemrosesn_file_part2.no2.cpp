#include <fstream>
#include <iostream>
using namespace std;
int main () {
ifstream myfile;

char text;
myfile.open("datatugas5.txt");

if(!myfile.fail())
{ cout<<"Isi File : ";
while (!myfile.eof())
{ myfile.get(text);
cout<<text;
}
myfile.close();
}else{
cout<<"File tidak ditemukan"<<endl; }

return 0;
}
