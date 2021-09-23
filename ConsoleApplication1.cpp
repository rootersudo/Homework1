// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
char def(char string[100])
{
    char q;
    q = string[0];
    string[0] = string[1];
    string[1] = q;
    q = string[2];
    string[2] = string[3];
    string[3] = q;
    if (string[0] == 0); string[0] = ' ';
    cout << string << endl;
    cout << ' ';
    return 0;
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "Russian");
    char string[100];
    cout << "Введите четырёхзначное число \n";
    cin >>(string);
    if (strlen(string) != 4)
    {
        cout << "Неверное число" << endl;
        cout << "Введите четырёхзначное число \n";
        cin >> (string);
        if (strlen(string) != 4)
        {
            cout << "Я Вам не доверяю. Перезапустите программу\n";
            cout << "Программа завершилась\n";
            system("exit");
        }
        else { def(string); }
    }
    else {
        def(string);

       
    }
}


