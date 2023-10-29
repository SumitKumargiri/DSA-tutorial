#include <bits/stdc++.h>
using namespace std;

/*------------reverse number---------------------------*/
/* int main(){
    int n;
    int reversenum=0;
    cin>>n;
    while (n>0)
    {
        int lastdigit=n%10;
        reversenum=(reversenum*10)+lastdigit;
        n=n/10;
    }
    cout<<reversenum;
}  */
/*----------------------------------------------------*/

/*-----------Reverse of 32bits system-----------------*/
/* #include<bits/stdc++.h>
using namespace std;
long reverseBits(long n) {
    // Write your code here.
    bitset<32> bit(n);
    string bitStr = bit.to_string();
    reverse(bitStr.begin(), bitStr.end());
    return std::bitset<32>(bitStr).to_ulong();
}  */
/*----------------------------------------------------*/

/*----------find the number is palindrome or not---------------*/
/* int main(){
    int n;
    int reversenum=0;
    int duplicate=n;
    cin>>n;
    while (n>0)
    {
        int lastdigit=n%10;
        reversenum=(reversenum*10)+lastdigit;
        n=n/10;
    }
    if(duplicate==reversenum)
     cout<<"true";
     else
      cout<<"false";  
}  */
/*----------------------------------------------*/

/*--------find the reverse number using function-------------*/
/* int reversedigit(int num){
    int reversenum=0;
    int rem;
    while (num!=0)
    {
        rem=num%10;
        reversenum=reversenum*10+rem;
        num/=10;
    }
    return reversenum;
}
int main(){
    int num;
    cin>>num;
    cout<<reversedigit(num);
}   */
/*-------------------------------------------*/

/*------------print the program divisible by difference number --------------------*/
/* int printdivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printdivisors(n);

}  */
/*-----------------------------------------------------------*/

/*----------Number is armstrong or not-----------------------------*/

/* bool checkArmstrong(int n){
	double power=1, digits=0;
	int ans=0;
	int remainder=n;
	while(remainder>0){
		remainder=remainder/10;
		digits++;
	}
	remainder=n;
	while(remainder>0){
		int i=remainder%10;
		remainder=remainder/10;
		ans=ans+pow(i,digits);
	}
	if(ans==n){cout<<"number is armstrong";
	}else{
		cout<<"number is not armstrong";
	}
}
int main(){
    int n;
    cin>>n;
    checkArmstrong(n);
}  */
/*--------------------------------------------------------*/

/*--------Prime Number or Not-----------------------------------*/
/* int main(){
    int n;
    cin>>n;
    int counter=0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
        counter++;
    }
    if(counter==2)
    cout<<"Prime Number";
    else
    cout<<"Not prime number";
}   */
/*------------------------------------------------------*/

/*-----------program of gcd----------------------------*/
/* int gcb_ls(int a, int b){
    while (a>0 && b>0)
    {
        if(a>b)
        a=a%b;
        else
        b=b%a;
    }
    if(a==0)
    cout<<b;
    else
    cout<<a;
}
int main(){
    int a,b;
    cin>>a>>b;
    gcb_ls(a,b);
}  */
/*----------------------------------------------------------*/

