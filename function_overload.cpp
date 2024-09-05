#include<iostream>
using namespace std;
int area(int , int);
float area(int);

int main()
{
    int r;
    cout<<"Enter the radius"<<endl;
    cin>>r;
    float A=area(r);
    cout<<"The Area of Circle is"<<A<<endl;
    int l,b;
    cout<<"Enter length & bredth"<<endl;
    cin>>l>>b;
    int a =area(l,b);
    cout<<"The area of rectangle is:"<<a;
return 0;
}
float area(int R)
{
    return(3.14*R*R);

}
int area(int L, int B)
{
    return(L*B);
}

