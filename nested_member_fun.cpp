#include<iostream>
using namespace std;
class test{
    private:
    int a;
    public:
    void getdata(void);
    int task(void);
    void display(void);
};
void test::getdata(void)
{
    cout<<"Enter any number:"<<endl;
    cin>>a;

}

int test :: task(void)
{
    int x;
    if(a%5==0)
    {
        x=0;
        return (x);
    }
    else
    {
        x=a%5;
        return(x);
    }
}
void test::display(void)
{
    cout<<"Remainder:"<<task()<<endl;
}
int main()
{
    test num;
    num.getdata();
    num.display();
    return 0;
}
