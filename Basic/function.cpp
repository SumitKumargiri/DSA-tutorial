#include<bits/stdc++.h>
using namespace std;


/*-------Void function----------------------*/
/* void printany(string name){
    cout<<name;
}
int main(){
    string name;
    cin>>name;
    printany(name);

    string name1;
    cin>>name1;
    printany(name1);
    return 0;
}  */
/*--------------------------------------------------*/

/*----------Nth Fibbonaci series---------------------*/
/* int sum(int n1,int n2){
    int n3=n1+n2;
    return n3;
}
int main(){
    int n1,n2,n3;
    cin>>n1>>n2;
    int result=sum(n1,n2);
    cout<<result;
    return 0;    
}  */
/*-----------------------------------------------------*/

/*-------------------------------------------------------*/
//-----------------print the sum of even and odd number----------------
/* int main(){
    int n;
    cin>>n;
    int even=0, odd=0;
    while(n!=0){
        int digit=n%10;
        n=n/10;
        if(digit%2==0)
        even=even+digit;
        else
        odd=odd+digit;
    }
    cout<<even<<" "<<odd<<endl;
    return 0;
}  */
/*--------------------------------------------------------*/
 
/*---------printarray----------------------------*/
/* int printarray(int num){
    cout<<num<<endl;
    return num;
}
int main(){
    int num;
    cin>>num;
    printarray(num);

    int num1;
    cin>>num1;
    printarray(num1);
    return 0;
}  */
/*--------------------------------------------*/


/*------pass call by value---------this is a copy of value, not a original value--------*/
/* int printsome(int num){
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    printsome(num);
    cout<<num<<endl;
    return 0;
}  */

/*--------------------------*/
/* int printsome(string s){
    cout<<s<<endl;
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";
    printsome(s);
    cout<<s<<endl;
    return 0;
}  */
/*----------------------------*/

/*----------------------------------------------------------*/


/*---------pass call by refrence-----------pass the original value--------*/
/* int printsometo(int &num1){
    cout<<num1<<endl;
    num1+=5;
    cout<<num1<<endl;
    num1+=5;
    cout<<num1<<endl;
}
int main(){
    int num1=10;
    printsometo(num1);
    cout<<num1<<endl;
    return 0;
}  */

/*---------------*/
int printarr(string &s){
    cout<<s<<endl;
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";
    printarr(s);
    cout<<s<<endl;
    return 0;
}
/*---------------------------------------------*/


