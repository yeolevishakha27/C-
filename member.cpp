// member fuction:-
//member function can be defined by two ways:-
//1.inside the class
//2.outside the class

#include<iostream>
using namespace std;
// //1.inside the class
class Myclass{
    public:
    int myint;
    int roll;

    void getdata();  
    void display(){
        cout<<"THe myint is:"<<myint <<endl;
     
    }
};

void Myclass :: getdata() {
    cout<<"The value of roll:"<<roll<<endl;
}
int main() {
    Myclass obj;
    obj.myint= 42;
    obj.display();
    obj.roll=54;
    obj.getdata();


    return 0;
}
   // in above code display in member function is defined inside the class


// Member function defined outside the class

