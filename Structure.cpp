#include<iostream>
using namespace std;

    struct book
    {
        // data members
        int bookid;
        string title;
        float price;
    };
    int main()
    { // create an instance of the book structure
        book b1;

        // ASSIGN VALUE
        b1.bookid =2347;
        b1.title ="Fire";
        b1.price= 330.2;
         
         //DISPLAY INFO
         cout<<"bookid :"<<b1.bookid<<endl;
         cout<<"title :"<<b1.title<<endl;
         cout<<"price :"<<b1.price<<endl;

         book b2;
         b2.bookid ;
        b2.title;
        b2.price;
         
cout<<"Enter bookid"<<endl;
cin>>b2.bookid;
cout<<"Enter title"<<endl;
cin>>b2.title;
cout<<"Enter price"<<endl;
cin>>b2.price;
cout<<"bookid :"<<b2.bookid<<endl;
  cout<<"title :"<<b2.title<<endl;
         cout<<"price :"<<b2.price<<endl;





return 0;
    }








