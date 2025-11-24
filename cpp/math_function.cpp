#include<bits/stdc++.h>
using namespace std;


// int count_digit(int n){
//     int count=0;
//     while(n>0){
//         n/=10;
//         count++;
//     }
//     return count;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<count_digit(n);
// }

// int reverse_num(int n){
//     int reverse=0,lstdigit;
//     while(n>0){
//         lstdigit=n%10;
//         reverse=reverse*10+lstdigit;
//         n/=10;
//     }
//     return reverse;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverse_num(n);
// }

// int palindrome_num(int n){
//     int reverse=0,digit,original=n;
//     while(n!=0){
//         digit=n%10;
//         reverse=reverse*10+digit;
//         n/=10;
//     }
//     if(original==reverse){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<palindrome_num(n);
// }

// int palindromenum(string str){
//     string rev=str;
//     reverse(rev.begin(),rev.end());
//     if(rev==str){
//         cout<<"palindrome";
//     }else{
//         cout<<"not palindrome";
//     }
// }
// int main(){
//     string str;
//     cin>>str;
//     cout<<palindromenum(str);
// }

// int armstrong_num(int n){
//     int result=0,lstdigit,original=n;
//     while(n>0){
//         lstdigit=n%10;
//         result+=lstdigit*lstdigit*lstdigit;
//         n/=10;
//     }
//     return result==original;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<armstrong_num(n);
//     return 0;
// }

// bool checkPrime(int n){
//     int count=0;
//     for(int i=1; i<=n; i++){
//         if(n%i==0)
//         count+=1;
//     }
//     if(count==2)
//     return true;
//     else
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     bool isPrime= checkPrime(n);
//     if(isPrime)
//     cout<<"prime";
//     else
//     cout<<"not prime";
//     return 0;
// }



// int gcd_num(int n,int n1){
//     int gcd=1;
//     for(int i=1; i<=min(n,n1); i++){
//         if(n%i==0 && n1%i==0)
//         gcd=i;
//     }
//     return gcd;
// }
// int main(){
//     int n,n1;
//     cin>>n>>n1;
//     cout<<gcd_num(n,n1);
//     return 0;
// }

// int sortArr(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }
// int main(){
//     vector<int>arr = {34,67,8,12};
//     cout<<sortArr(arr);
//     return 0;
// }


// int main() {
//     int num, originalNum, remainder, result = 0;
//     cout << "Enter a three-digit integer: ";
//     cin >> num;
//     originalNum = num; 
//     while (originalNum != 0) {
//         remainder = originalNum % 10;       
//         result += remainder * remainder * remainder;       
//         originalNum /= 10;
//     }
//     if (result == num)
//         cout << num << " is an Armstrong number.";
//     else
//         cout << num << " is not an Armstrong number.";
//     return 0;
// }


// void fibonacci(int n) {
//     int t1 = 0, t2 = 1, nextTerm; 
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; i++) {
//         cout << t1 << " ";
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     cout << endl;
// }
// int main() {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     fibonacci(n);
//     return 0;
// }

// long factorial(int num) {
//     long fact = 1;
//     for (int i = 1; i <= num; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Factorial of " << num << " is " << factorial(num) << endl;
//     return 0;
// }

//  int main(){
//     int n;
//     cin>>n;
//     int even=0, odd=0;
//     while(n!=0){
//         int digit=n%10;
//         n=n/10;
//         if(digit%2==0)
//         even=even+digit;
//         else
//         odd=odd+digit;
//     }
//     cout<<even<<" "<<odd<<endl;
//     return 0;
// } 


// int reverse_num(int n){
//     int reverse=0,lstdigit;
//     while(n>0){
//         lstdigit=n%10;
//         reverse = reverse*10+lstdigit;
//         n/=10;
//     }
//     return reverse;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<reverse_num(n);
//     return 0;
// }





