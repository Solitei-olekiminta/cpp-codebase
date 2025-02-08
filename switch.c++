#include<iostream>
using namespace std;
int main()
{
    //loccal variable declaration
    char grade;

    cout<<"\nInput your current grade for easy evaluation: ";
    cin>>grade;

    switch(grade)
    {
        case 'A':
        cout<<"Excellent!"<< endl;
        break;
        case 'B':
        cout<<"Good work"<<endl;
        break;
        case 'C':
        cout << "Well done" <<endl;
        break;
        case 'D':
        cout << "You passed" <<endl;
        break;
        case 'F':
        cout << "Better try again" <<endl;
        break;
        default:
        cout <<"Invalid grade" <<endl;
    }
    cout<< "Your grade is " <<grade <<endl;

    return 0;
}