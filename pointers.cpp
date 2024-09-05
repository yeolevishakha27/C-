#include<iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    //pointer to pointer
    int**c=&b;
    cout<<b<<endl;
    cout<<&a<<endl;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<*c;
    //& --address operator
    //*--deference operator
    return 0;

}