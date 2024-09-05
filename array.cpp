#include<iostream>
using namespace std;
int main()
// {string cars[4]={"BMW" ,"Jeep", "Odi" ,"Volvo"};
//     cout<<cars<<endl;

//     cout<<cars[0];
//     cars[2] ="Vish";
//     cout<<cars;

// // array in for lopp 
// int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i = 0; i < 5; i++) {
//   cout << myNumbers[i] << "\n";
// }    


//     return 0;
// }
// {
// int myNumbers[5] = {10, 20, 30, 40, 50};
// for (int i : myNumbers) {
//   cout << i << "\n";
// }
// //get the array size
// cout<< sizeof(myNumbers);
// return 0;
// }
{//pointers & arrays:-
int marks[4]={23,44,45,46};
int*p = marks;
cout<<"The value of marks[0] is "<<*p<<endl;
cout<<"The value of marks[1] is "<<*(p+1)<<endl;
cout<<"The value of marks[2] is "<<*(p+2)<<endl;
cout<<"The value of marks[3] is "<<*(p+3)<<endl;
return 0;
}


