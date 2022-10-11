#include<iostream>
using namespace std;
class queue
{
    int job,x,f,r,size,i,a[];
    public:
    queue(int size){
        int a[size];
        f=-1;
        r=-1;
    }
    int empty(){
        if(f==-1 && r==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void insert(){
        cout<<"\nEnter job to insert:";
        cin>>job;
        if(empty()){
            f++;
            r++;
            a[r]=job;
        }
        else{
            r++;
            a[r]=job;
        }
    }
    void del(){
        if(f==r){
            x=a[f];
            f=r=-1;
            cout<<"Deleted element: "<<x;
            cout<<"\nQueue is now empty!";
        }
        else{
            cout<<"Deleted element: "<<a[f];
            f++;
        }
    }
    void display(){
        if(empty()){
            cout<<"\nQueue is empty!";
        }
        else{
            cout<<"\nCurrent queue:";
            for(i=f;i<=r;i++){
                cout<<a[i]<<" ";
            }
        }
    }
};

void menu(){
    int choice;
    cout<<"\n**************MENU**************";
    cout<<"\n1.Insert job\n2.Delete job\n3.Print queue\n4.Exit";
    cout<<"\nEnter your choice(1/2/3/4):";
}

int main()
{
    int length,choice;
    bool loop=true;
    cout<<"Enter size of queue:";
    cin>>length;
    queue q(length);
    while(loop==true){
        menu();
        cin>>choice;
        if(choice==1){
            q.insert();
        }
        else if(choice==2){
            q.del();
        }
        else if(choice==3){
            q.display();
        }
        else if(choice==4){
            loop=false;
            cout<<"\nThank you for using this program!";
        }
        else{
            cout<<"\nPlease enter a valid choice.";
        }
        
    }
}
