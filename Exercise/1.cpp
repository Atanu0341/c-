#include <iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter any Number : ";
    cin>>n;

    // if(n&1){
    //     cout<<"Odd"<<endl;
    // }
    // else{
    //     cout<<"Even"<<endl;
    // }

    // or

    if (n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }

    return 0;
}