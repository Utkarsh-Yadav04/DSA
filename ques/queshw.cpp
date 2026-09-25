// //////////////// FUNCTION TO DISPLAY AREA OF CIRCLE ////////////////////////
// #include<iostream>
// using namespace std;

// float circleArea(int r){
//     float area = 3.14*r*r; 
//     return area; 
// }
// int main(){
//     int r; 
//     cout<<"tell me r"; 
//     cin>>r; 

//     float ans = circleArea(r); 

//     cout<<ans; 



// }


////////////// CHECK THE GIVEN NO. IS PRIME OR NOT /////////////////////5

#include<iostream>
using namespace std; 

bool checkPrime(int n ){
    
    for(int i = 2 ; i<n ; i++){
        if(n%i== 0){
            return false;
        }
    }
    return true; 
}

int main(){

    int n ; 
    cin>>n; 

    bool ans = checkPrime(n); 
    
    if (ans){
        cout<<"it is prime"; 

    }

    else{
        cout<<"not a prime";
    }


}




////////taking a k no. of integers and arr i j 