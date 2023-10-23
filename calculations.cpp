#include <iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Enter your first number : ";
    cin >> num1;
    int num2;
    cout << "Enter your Second number : ";
    cin >> num2;

    cout <<" ( 1.Sum , 2. multi 3.DIvi  , 4.Sub)" << endl ;

    int result ;

    int option ;
    cout << "enter your option : ";
    cin >> option;

    switch(option)
    {
    case 1:
        if (option== 1 )
        {
              result = num1 + num2 ;

        }
                cout << "Result : " << result ;
 break;

case 2:
     if (option == 2 )
        {
              result = num1 *  num2 ;

        }
                cout << "Result : " << result ;
        break;

case  3:
    if  (option== 3 )
        {
              result = num1 / num2 ;

        }
                cout << "Result : " << result ;
break;
 case 4:
if  (option== 4 )
        {
              result = num1 - num2 ;

        }
                cout << "Result : " << result ;
break;

         }



    return 0;
}
