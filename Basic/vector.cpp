#include<iostream>
#include<vector>
using namespace std;

/*--------------------------------------------*/
/* int main(){
 //initialization of the vector.
    vector<int>num{12,13,14,15,16,17,18};
    cout<<"num are= ";
    for(const int &i : num){
        cout<<i<<" ";
    }
    cout<<endl;
//add the element in the vector.
    num.push_back(20);
    cout<<"Updated the vector are: ";
//update the elements in the vector.
    for(const int &i :num){
        cout<<i<<" ";
    }
    cout<<endl;
}  */
/*-----------------------------------------------------*/

int main(){
    vector<int>num1{2,3,4,1,6,2,7};
    cout<<"the position of vector in num1: "<<num1.at(4)<<endl;
    cout<<"num1 vector elements are: ";
    for(const int &i : num1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"the size of vector are: "<<num1.size();

}