#include <iostream>
using namespace std;

double tinggi;
double berat;
double imt;

int main()
{
    cout << "Masukkan berat badan Anda (kg): ";
    cin >> berat;

    int tinggi_cm;
    cout << "Masukkan tinggi badan Anda (cm): ";
    cin >> tinggi_cm;

    tinggi = tinggi_cm / 100.0;

    imt = berat / (tinggi * tinggi);


    int imt_int = static_cast<int>(imt);
    cout << endl << "IMT Anda adalah: " << imt_int << " Kg" << endl;

    if (imt < 18.5)
    {
        cout << "Anda berada dalam kategori: Berat Badan Kurang." << endl;
    }
    else if (imt >= 18.5 && imt < 24.9)
    {
        cout << "Anda berada dalam kategori: Berat badan ideal." << endl;
    }

    else if (imt >= 30 && imt < 39.9)
    {
        cout << "Anda berada dalam kategori: Gemuk ." << endl;
    }
    else
    {
        cout << "Anda berada dalam kategori: Sangat Gemuk." << endl;
    }

    int berat_ideal = 1;
    switch (berat_ideal)
    {
        case 1:
            cout << endl << "Kategori berat badan sesuai dengan standar IMT yang telah ditetapkan." << endl;
            cout << "Kurang dari 19: Berat badan kurang" << endl;
            cout << "19 - 25: Berat badan ideal" << endl;
            cout << "25 - 30: Berat badan berlebih" << endl;
            cout << "30 - 40: Gemuk" << endl;
            cout << "Di atas 40: Sangat Gemuk" << endl;
            break;

    }

    return 0;
}
