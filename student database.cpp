#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
class Student
{
	string name,clss,div,bg,ca;
	int rollno,dob,dl;
	double tn;
	
	public:
		Student(){
			cout<<"Name:";
			cin>>name;
			cout<<"Roll No:";
			cin>>rollno;
			cout<<"Class:";
			cin>>clss;
			cout<<"Division:";
			cin>>div;
			cout<<"Date of Birth:";
			cin>>dob;
			cout<<"Blood Group:";
			cin>>bg;
			cout<<"Contact Address:";
			cin>>ca;
			cout<<"Telephone number:";
			cin>>tn;
			cout<<"Driving License Number:";
			cin>>dl;
		}
		
		void display(){
			cout<<"\nName:"<<name;
			cout<<"\nRoll No:"<<rollno;
			cout<<"\nClass:"<<clss;
			cout<<"\nDivision:"<<div;
			cout<<"\nDate of Birth:"<<dob;
			cout<<"\nBlood Group:"<<bg;
			cout<<"\nContact Address:"<<ca;
			cout<<"\nTelephone number:"<<tn;
			cout<<"\nDriving License Number:"<<dl;
		}
};

int main()
{
	Student atharva;
	atharva.display();
	getch();
	return 0;	
}
