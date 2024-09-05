//   #include<iostream>
//   using namespace std;
//   class DB;
//   class DM
//   {
//   private:
//   double meter , centimeter;
//   public:
//   void get_data()
//  {
//  cout<<"Enter the meter value : "<<endl;
//  cin>>meter;
//  cout<<"Enter the centimeter values : "<<endl;
//  cin>>centimeter;
//  }
//  friend void add(DM , DB);

//  };
// class DB
//  {
//  private:
//  double feet , inches;
//  public:
//  void get_data()
//  {
//  cout<<"Enter the feet value : "<<endl;
//  cin>>feet;
//  cout<<"Enter the inches value : "<<endl;
//  cin>>inches;
//  }
//  friend void add(DM , DB);

//  };
//  void add(DM dm, DB db)
//  {
//  double d1,d2;
//  d1=dm.meter + (db.feet)/3.28;
//  d2=dm.centimeter + (db.inches)*2.34;
//  cout<<"Meter + Feet = "<<d1<<endl;
//  cout<<"Centimeter + Inches = "<<d2<<endl;
//  }
//  int main()
//  {
//  DM dm;
//  DB db;
//  dm.get_data();
//  db.get_data();
//  add (dm,db);
//  return 0;
//  }
#include <iostream>

class MyClass {
private:
    int data;

public:
    MyClass(int value) : data(value) {}

    // Declare a friend function inside the class
    friend void friendFunction(const MyClass& obj);
};

// Define the friend function outside the class
void friendFunction(const MyClass& obj) {
    std::cout << "Friend function accessed private data: " << obj.data << std::endl;
}

int main() {
    MyClass myObj(42);

    // Call the friend function from main
    friendFunction(myObj);

    return 0;
}
