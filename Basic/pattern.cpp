#include<bits/stdc++.h>
using namespace std;

/*---------pattern without function-----------*/
/* int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}   */
/*--------------------------------*/

/*---pattern using function--------------------*/
//without get any input.
/* void printpattern(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    printpattern();
    return 0;
}  */
/*----------------------*/

//get any input.
/* void printpattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    printpattern(n);
    return 0;
}*/ 
/*---------------------*/

/*---------------------------------------*/
/* void printpattern(int n,int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m;
        cin>>n>>m;
        printpattern(n,m);
    }
}  */
/*--------------------------------------------------*/


/*-------printing the pattern----------
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
*/

/* void printpattern(int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1; i<t; i++){
        int n;
        cin>>n;
        printpattern(n);
    }
}  */
/*------------------------------------------*/


/*------print the pattern--------
1
2 2
3 3 3
4 4 4 4
*/
 void printpattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    for(int i=1; i<a; i++){
        int n;
        cin>>n;
        printpattern(n);
    }
}  
/*-------------------------------------*/


/*---------print the pattern like
A
A B
A B C
A B C D
A B C D E
*/

/* void printpattern1(int n){
    for(int i=0; i<=n; i++){
        for(char ch='A';ch<'A'+i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int b;
    cin>>b;
    for(int i=0; i<b; i++){
        int n;
        cin>>n;
        printpattern1(n);
    }
}  */
/*---------------------------------------*/

/*---------print the pattern like
A B C D E
A B C D
A B C
A B
A
*/

/*---------print the pattern ------------
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

/* void printpattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a;
    cin>>a;
    for(int i=1; i<a; i++){
        int n;
        cin>>n;
        printpattern4(n);
    }
}  */
/*---------------------------------------*/


/*-------print the pattern---------
   *
  ***
 *****
*******
*/

/* void printpattern6(int n){
    for(int i=0; i<n; i++){
        //using te for loop space.
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //print star.
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //using te for loop space.
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
     cout<<endl;
    }

}
int main(){
    int a;
    cin>>a;
    for(int i=1; i<a; i++){
        int n;
        cin>>n;
        printpattern6(n);
    }
}  */
/*----------------------------------------------*/


