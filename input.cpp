#include<iostream>
using namespace std;

class  A{
    char a,b;
    int s;
    public :
   void gqetdata(){
    cout<<"Enter the first value: ";
    cin>>a;
    s=a;
    cout<<"Enter the second value: ";
    cin>>b;
    }
    void sum(){
        cout<<"The sum is: "<<s;
    }
};


int main(){
    A obj;
    obj.gqetdata();
    obj.sum();
}