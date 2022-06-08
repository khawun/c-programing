#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
void A(int n){
    int i,j;
    for(i=0;i<=n;n--){
            cout<<"\t\t";
        for(j=1;j<=n;j++){
            cout<<j<<" ";}
            cout<<endl;
    }
}
void B(int n){
    int i,j;
    for(i=n;i>=1;i--){
            cout<<"\t\t";
        for(j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void C(int n){
    int i,j;
    for(i=1;i<=n;i++){
            cout<<"\t\t";
        for(j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void D(int t){
    int i,j,k;
    for(i=t;i>=1;i--){
            cout<<"\t\t";
        for(k=t-i;k>0;k--)
        cout<<" ";
        for(j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
void E(int n){
    int i,j,k;
    for(i=1;i<=n;i++){
            cout<<"\t\t";
        for(k=i-1;k>0;k--)
            cout<<" ";
        for(j=1;j<=(n+1)-i;j++){
            cout<<j;
        }
        cout<<endl;
    }

}
void F(int n){
    int i,j,k;
    for(i=1;i<=n;i++){
            cout<<"\t\t";
        for(k=1;k<i;k++)
            cout<<" ";
        for(j=1;j<=(n-i)+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void G(int n){
     int i,j;
     for(i=1;i<=n;i++){
            cout<<"\t\t";
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }
}
void H(int n){
    int i,j,k;
     for(i=1;i<=n;i++){
         cout<<"\t\t";
        for(k=1;k<=n-i;k++)
            cout<<" ";
        for(j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
     }

}
int main(){
    int n,i,j;
    cout<<"Enter n= ";cin>>n;
    A(n);getch();B(n);getch();C(n);getch();D(n);getch;E(n);getch();F(n);getch();G(n);getch();H(n);
    return 0;
}
