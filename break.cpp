#include <iostream>
using namespace std;

// int main() {

//     int n,i;
//     cout<<"enter n"<<endl;
//     cin>>n;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"not prime"<<endl;
//             break;
//         }
    
//     }
//    if(i==n){
//     cout<<"prime"<<endl;}
   
//     return 0;
// }

int main(){

    int a,b,i,num;
    cout<<"enter a,b"<<endl;
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        int i;
        for(int i=2;i<num;i++){
            if(num%i==0){
                break;
            }

        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}