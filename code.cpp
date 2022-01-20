#include<iostream>
using namespace std;

int main() {
    int bin,dec=0,i=1,rem;
    cin>>bin;
    while(bin!=0){
        rem=bin%10;
        dec=dec+(rem * i);
        i=i*2;
        bin=bin/10;
    }
    cout<<dec;
}
