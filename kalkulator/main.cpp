#include <iostream>
#include<stdio.h> // zeby dzialal exit
#include<windows.h> // biblioteka obslugujaca  getchar() i system("cls")
#include <conio.h> // biblioteka obslugi zdarzen


using namespace std;

float num1, num2;
char wybor; // znak z klawiatury

int main()
{
    for(;;){ //nieskonczona petla
    cout<<"Podaj 1 liczbe"<<endl;
    cin>>num1;
    cout<<"Podaj 2 liczbe"<<endl;
    cin>>num2;

    cout<<"Menu glowne"<<endl;
    cout<<"------------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Wyjscie"<<endl;

    cout<<endl;
    wybor = getch(); // nie trzeba nacisnac enter tylko wpisac liczbe a program wykona sie dalej

    switch(wybor){
    case '1' : // tak zapisujemy pojedyncze znaki char
        {
            cout<<"Suma = "<<num1+ num2;
        }
    break;
    case '2' :
        {
            cout<<"Roznica = "<<num1-num2;
        }
    break;
    case '3' :
        {
            cout<<"Iloczyn = "<<num1*num2;
        }
    break;
    case '4' :
        {
            cout<<"Iloraz = "<<num1/num2;
        }
    break;
    case '5' :
        {
            exit(0);
        }
    break;
    default: cout<<"Nie ma takiej funkcji";
    }
    getchar(); getchar();
    system("cls");
}
return 0;
}
