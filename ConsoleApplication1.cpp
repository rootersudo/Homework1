// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int c1;
int main()
{   int a,b,c,d;
    setlocale(LC_ALL, "Russian");  
    cout << "Введите четырёхзначное число \n";
    
    
    cin >> c1;
    a=c1/1000;
    b=c1/100 - a*10;
    c=c1/10-a/100-b*10;
    d=c1-a*100-b*100-c*10;
    
    if (b==0){
    cout<<a<<d<<c;
    }

   
    while (true) do {if (c1>9999)
    {cout<<"Введено неверное число, попробуйте ещё раз\n";
    cin >> c1;
    }  
    else {cout <<b<<a<<d<<c;}
        
}
    return 0;
}    
  
