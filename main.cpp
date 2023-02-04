//Fing greatest among 3 numbers
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    cout<<"Enter a number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<"The bigger number is "<<a;
    }
    else if(b>c){
        cout<<"The bigger number is "<<b;

    }
    else
    cout<<"The bigger number is " <<c;

    return 0;

}