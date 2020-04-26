#include <fstream>
using namespace std;
int main () {
ofstream myfile;
myfile.open ("datatugas5.txt", ios::app);
myfile << "Tidak ada tugas";
myfile.close();
return 0;
}
