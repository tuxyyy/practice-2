#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string generatePassword(int length) {
    string password;
    static const char alphanum[] = // ������ �� ������ ��������
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "!@#$%^&*";
    int stringLength = sizeof(alphanum) - 1;

    for (int i = 0; i < length; ++i) {
        password += alphanum[rand() % stringLength];
    }

    return password;
}

int main() {
    setlocale(LC_ALL, "Russian"); // ������� ����
    srand(time(0)); // ������������� ���������� ��������� �����

    int passwordLength;
    cout << "������� ����� ������: ";
    cin >> passwordLength;

    string password = generatePassword(passwordLength);
    cout << "��������������� ������: " << password << endl;

    return 0;
}
