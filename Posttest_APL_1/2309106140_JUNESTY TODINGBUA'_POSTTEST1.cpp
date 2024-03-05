#include <iostream>

using namespace std;

int main() {
    string nama, nim;
    int loginAttempt = 0;
    int choice;
    double temperature;

    string user = "Junes";
    string pass = "140";

    // Loop untuk login, maksimum 3 kali percobaan
    while (loginAttempt < 3) {
        cout << "Masukkan Nama: ";
        cin >> nama;
        cout << "Masukkan NIM: ";
        cin >> nim;

        // Lakukan pengecekan login sederhana, contoh: nama = "admin", nim = "12345"
        if (nama == user && nim == pass) {
            cout << "Login berhasil!\n";
            break;
        } else {
            cout << "Login gagal. Silakan coba lagi.\n";
            loginAttempt++;
        }
    }

    // Jika percobaan login melebihi 3 kali, keluar dari program
    if (loginAttempt >= 3) {
        cout << "Anda telah mencapai batas maksimum percobaan login. Program berhenti.\n";
        return 0;
    }

    // Loop utama program
    while (true) {
        cout << "\nMenu Konversi Suhu:\n";
        cout << "1. Konversi Celcius\n";
        cout << "2. Konversi Reamur\n";
        cout << "3. Konversi Fahrenheit\n";
        cout << "4. Konversi Kelvin\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Terima kasih telah menggunakan program konversi suhu. Sampai jumpa!\n";
            break;
        }

        cout << "Masukkan suhu: ";
        cin >> temperature;

        switch (choice) {
            case 1:
                cout << "Konversi Celcius ke:\n";
                cout << "Reamur: " << (4.0 / 5.0) * temperature << endl;
                cout << "Fahrenheit: " << (9.0 / 5.0) * temperature + 32 << endl;
                cout << "Kelvin: " << temperature + 273.15 << endl;
                break;
            case 2:
                cout << "Konversi Reamur ke:\n";
                cout << "Celcius: " << (5.0 / 4.0) * temperature << endl;
                cout << "Fahrenheit: " << (9.0 / 4.0) * temperature + 32 << endl;
                cout << "Kelvin: " << (5.0 / 4.0) * temperature + 273.15 << endl;
                break;
            case 3:
                cout << "Konversi Fahrenheit ke:\n";
                cout << "Celcius: " << (5.0 / 9.0) * (temperature - 32) << endl;
                cout << "Reamur: " << (4.0 / 9.0) * (temperature - 32) << endl;
                cout << "Kelvin: " << (5.0 / 9.0) * (temperature - 32) + 273.15 << endl;
                break;
            case 4:
                cout << "Konversi Kelvin ke:\n";
                cout << "Celcius: " << temperature - 273.15 << endl;
                cout << "Reamur: " << (4.0 / 5.0) * (temperature - 273.15) << endl;
                cout << "Fahrenheit: " << (9.0 / 5.0) * (temperature - 273.15) + 32 << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan pilih kembali.\n";
        }
    }

    return 0;
}
