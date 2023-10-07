#include <iostream>
using namespace std;

/*
int main()
{

    int amt, choice;

    cout << "Enter the amount : ";
    cin >> amt;

    cout << "Currency Converter"<<endl;

    cout << "1. INR to USD" << endl;
    cout << "2. USD to INR" << endl;
    cout << "Enter your choice: ";
    cin>>choice;

    if (choice == 1)
    {
        cout<<"Converted amount in USD: "<< (amt*0.012) ;
    }
    else if (choice == 2)
    {
        cout<<"Converted amount in INR: "<< (amt*83.12);
    }
    else
    {
        cout<<"Invalid Choice";
    }
    

    return 0;
}
*/

// using function

int convertAmt (int amt, int choice){

    if (choice == 1)
    {
        cout<<"Converted amount in USD: "<< (amt*0.012) ;
    }
    else if (choice == 2)
    {
        cout<<"Converted amount in INR: "<< (amt*83.12);
    }
    else
    {
        cout<<"Invalid Choice";
    }

}

int main(){

    int amt, choice;

    cout << "Enter the amount : ";
    cin >> amt;

    cout << "Currency Converter"<<endl;

    cout << "1. INR to USD" << endl;
    cout << "2. USD to INR" << endl;
    cout << "Enter your choice: ";
    cin>>choice;

    convertAmt(amt, choice);

    return 0;
}