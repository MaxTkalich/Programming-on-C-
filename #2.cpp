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
 
    cout << "���� - ������ �����" << endl ;
    cout << "��������� ����� �� 1 �� 10" << endl;
    cout << "�������� ����� � 5 �������" << endl;
 
    do 
    {
        cout << "\n������� ���� �����: \n\t-> ";
        cin >> x;
        if (x == n) cout << "�������, �� ��������!!!";
        count++; 
    } while (x!=n && count<5);
 system("pause");
 return 0;
    return 0;
}
