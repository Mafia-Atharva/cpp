#include <iostream>
using namespace std;
class stack{
    int size[100];
    int top=-1;
    public:
    void evaluation(){
        string expression;
        cout<<"Enter the expression:"<<endl;
        cin>>expression;
        stack dummy;
        int ans=0;
        int sizeofexpress=expression.length();
        for(int i=0;i<sizeofexpress;i++){
            char temp=expression[i];
            if(isdigit(temp)){
                int check=temp-48;
                dummy.push(check);
            }else{
                int second=dummy.pop();
                int first=dummy.pop();
                if(temp=='*'){
                    ans+=first*second;
                }else if(temp=='-'){
                    ans+=first-second;
                }else if(temp=='+'){
                    ans+=first+second;
                }else{
                    ans+=first/second;
                }
            }
        }
        cout<<"THe ans of the given expression is:"<<ans<<endl;
    }
    void display(){
        cout<<"The stored stack is:"<<endl;
        for(int i=0;i<=top;i++){
            cout<<size[i]<<" ";
        }
    }
    void push(int data){
        if(top>99){
            cout<<"The stack is full"<<endl;
        }else{
        top++;
        size[top]=data;
        cout<<"The data is pushed into the stack:"<<endl;
        }
    }
    int pop(){
    int temp=top;
    top--;
    return size[temp];
    }
    bool empty(){
        if(top==-1){
            return 1;
        }else{
            return 0;
        }
    }
    int top_element(){
        return size[top];
    }
};
int main(){
stack a;
    cout<<"Enter 1 for push"<<endl;
    cout<<"Enter 2 for pop"<<endl;
    cout<<"Enter 3 for top"<<endl;
    cout<<"Enter 4 for empty"<<endl;
    cout<<"Enter 5 for evaluation"<<endl;
    cout<<"Enter 6 for display"<<endl;
    cout<<"Enter -1 to exit the program"<<endl;
while(true){
    int check;
    cin>>check;
    if(check==1){
         int data;
         cout<<"Enter the data to be pushed into the stack:";
         cin>>data;
         a.push(data);

    }else if(check==2){
          cout<<a.pop()<<endl;
    }else if(check==3){
          cout<<a.top_element()<<endl;
    }else if(check==4){
          if(a.empty()){
            cout<<"The stack is empty"<<endl;
          }else{
            cout<<"The stack is not empty"<<endl;
          }
    }else if(check==5){
           a.evaluation();
    }else if(check==6){
        a.display();
    }else if(check==-1){
        cout<<"You are out of the program:"<<endl;
        break;
    }else{
       cout<<"Enter a valid no:"<<endl;
    }    
}
}
