#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama, sekolah;
    char ulang;

    do
    {
        cout << "=== INPUT DATA SISWA ===" << endl;

        cout << "Masukkan nama: ";
        getline(cin, nama);

        cout << "Masukkan nama sekolah: ";
        getline(cin, sekolah);

        cout << endl;
        cout << "=== HASIL INPUT ===" << endl;
        cout << "Nama: " << nama << endl;
        cout << "Sekolah: " << sekolah << endl;

        cout << endl;
        cout << "Input data lagi? (y/n): ";
        cin >> ulang;
        cin.ignore(10000, '\n');

        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih!" << endl;

    return 0;
}
