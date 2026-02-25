using namespace std;
#include<iostream>
#include<conio.h>

class Calc
{
     public :
            int Sum, No1, No2;

            void Set_Values()
            {
                cout << "\n Enter the 1st Number : ";
                cin >> No1;
                cout << "\n Enter the 2nd Number : ";
                cin >>No2;
            }

            void Addition()
            {
                cout << "\n Inside Add" << endl;
                Sum = No1 + No2;
            }
};

int main()
{
        Calc Obj1, Obj2;

        Obj1.Set_Values();

        cout << "\n Back To Main()" << endl;

        Obj1.Addition();

        cout << "\n Back in Main()" << endl;

        cout<< "\n Addition of " << Obj1.No1 << " And " << Obj1.No2 << " is = " << Obj1.Sum << ".";

        getch();
        return 0;
}
