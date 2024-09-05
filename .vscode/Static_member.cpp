#include<iostream>
using namespace std;

class employee{
    int id;
    int count;
    public:
    void setdata(void){
        cout<<"Enter the ID"<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<id;
    }
};

int main(){
    employee vish;
    vish.setdata();
    vish.getdata();

    return 0;
}