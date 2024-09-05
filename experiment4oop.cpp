#include<iostream>
using namespace std;
class mat
{
 public:
 int i , j;
 int a[2][2];
 void accept()
 {
 cout<<"Enter elements:";
 for(i=0;i<=2;i++)
 {
 for(j=0;j<=2;j++)
 {
 cin>>a[i][j];
 }
 }
 }
 void display()
 {
 for(i=1;i<=2;i++)
 {
 for(j=0;j<=2;j++){
 cout<<a[i][j];
 }
 }
 }
};
mat operator+(mat m2)
{
 mat m3;
 for(i=0; i<=2; i++)
 {
 for(j=0; j<=2; j++)
 {
 m3.a[i][j]=a[i][j]+m2.a[i][j];
 }
 }
 return m3;0
}
int main()
{
 mat m1, m2, m3;
 cout<<"Enter the matrix value m1 :";
 m1.accept();
 cout<<"Enter the matrix value m2 :";
 m2.accept();
 m3=m1+m2;
 m3.display()
 m3=m1*m2;
 m3.display()
 return 0;
}
mat operator*(mat m2)
{
 mat m3;
 for(int i=0; i<2; i++)
 {
 for(int j=0; j<2; j++)
 {
 m3.a[i][j]=0;
 for(int k=0; k<2; k++)
 {
 m3.a[i][j]=a[i][j]*m2.a[i][j];
 a[k][j]+m3.a[i][j];

 }
 }
 }
 return m3;
}