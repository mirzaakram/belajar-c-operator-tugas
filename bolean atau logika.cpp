//3 kondisi bolean
//and keduanya bernilai benar/true
//or salah satunya benar/true
//not keduanya bernilai salah/false
//operator bolean/logika
#include <iostream>
using namespace std;

int main() {
    int nilai = 80;
    bool hadir = true;
    
    cout << (nilai >=75 && hadir)<<endl; //AND
    cout << (nilai <75 || hadir)<<endl; //OR
    cout << (!hadir)<<endl; //NOT
    
    return 0;
}