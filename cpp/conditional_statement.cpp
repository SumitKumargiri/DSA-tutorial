#include<iostream>
using namespace std;

int main(){
    int marks=68;
    // cin>>marks;
    if(marks>75){
        cout<<"very good";
    }else if(marks>60 && marks<70){
        cout<<"good";
    }else{
        cout<<"pass";
    }
    return 0;
}