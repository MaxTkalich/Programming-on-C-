#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
/////////////////////////////////////////////////////////////////
int main()
{
    int n;
    int x;
    int count = 0;

setlocale(LC_ALL, "rus");
 
    srand(time(0));
    n = rand()%10 + 1;
 
    cout << "Игра - Угадай число" << endl ;
    cout << "Задуманое число от 1 до 10" << endl;
    cout << "Угадайте число с 5 попыток" << endl;
 
    do 
    {
        cout << "\nВведите ваше число: \n\t-> ";
        cin >> x;
        if (x == n) cout << "Отлично, Вы победили!!!";
        count++; 
    } while (x!=n && count<5);
 system("pause");
 return 0;
    return 0;
}
