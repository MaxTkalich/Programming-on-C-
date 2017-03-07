#include <iostream.h>
const int n = 100;

int GetIndexValue( int value, int* a, const int length );

int main()
{
int massA[100];
int x;
int index = -1;

setlocale(LC_ALL, "rus");
srand(time(NULL));
    for (int i=0; i<100; i++)
        {
         massA[i]=rand()%200; 
         cout << massA[i] << " ";
        }
           

for(int i = 1; i < 100; ++i) 
{ 
for(int r = 0; r < 100-i; r++) 
{ 
if(massA[r] < massA[r+1]) 
{ 
 
int temp = massA[r]; 
massA[r] = massA[r+1]; 
massA[r+1] = temp; 
} 
} 
} 

cout << "\n\nОтсортированый массив: " << endl;; 
for(int i = 0; i < 100; ++i) 
{ 
cout << massA[i] << " "; 
} 
cout << endl;

     cout << "\nВведите значение:" << endl;
     cin >> x;
    for (int i = 0; i <= 100; i++) 
        { 
          if( massA[i] == x ) 
          cout << "Ваше число и индекс - " << massA[i] << " ["<<i << "]" << " \n"; 
        } 
 
    
system("pause");
return 0;   
}
