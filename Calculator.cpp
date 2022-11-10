#include <iostream>
using namespace std;

void menu(){
    cout<<"\n*************Calculator Menu*************\n";
    cout<<"1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Exit\nPlease enter your choice(1/2/3/4/5):";
}

int main() {
    float choice,a,b;
    bool loop=true;
    cout<<"\nEnter first number:";
    cin>>a;
    while (cin.fail())
        {
            cout << "Error:try entering a number\n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> a;
        }
    cout<<"\nEnter second number:";
    cin>>b;
    while (cin.fail())
        {
            cout << "Error:try entering a number\n";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> b;
        }
    while(loop==true){
        menu();
        cin>>choice;
        if(choice==1){
            cout<<"\nAddition="<<a+b;
        }
        else if(choice==2){
            cout<<"\nSubtraction="<<a-b;
        }
        else if(choice==3){
            cout<<"\nMultiplication="<<a*b;
        }
        else if(choice==4){
            cout<<"\nDivision="<<a/b;
        }
        else if(choice==5){
            loop=false;
            cout<<"Thank you for using this program!";
        }
        else{
            cout<<"\nPlease enter a valid choice!";
        }
    }
    return 0;
}
