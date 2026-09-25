#include<iostream>
using namespace std ; 

int main(){
    int num;
    cout<< "tell me the number" ;
    cin>>num ;


    if(num<0){
        cout<<"the number"<<num<< "is negative integer" ;

        
    }
    else if (num>0){
        cout<<"the number"<<num<<"is positive integer" ;

    }

    else {
        cout<<"the number is 0" ;
    }

    return 0 ;
    

}