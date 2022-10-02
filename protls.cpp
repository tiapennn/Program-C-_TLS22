#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Masukkan Nilai Anda = ";
    cin >> x;
    

        if(x<=100 && x>=90){
        printf("Selamat, Nilai anda termasuk dalam golongan Baik Sekali\n");

    }
    else if(x<90 && x>=80){
        printf("Selamat, terus pertahankan nilai Baik\n");

    }

    else if(x<80 && x>= 70){
        printf("Nilai anda Cukup baik, tetap kejar terus\n");

    }
    else if(x<70 && x>= 40){
        printf("Maaf Nilai anda kurang baik, coba mengulang atau remedial\n");

    }
    else if (x<40){
        printf("Tidak Lulus\n");

    }
return 0;

}

