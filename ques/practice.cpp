/* write a program to print the size of int char float in bytes*/

// #include <iostream>
// using namespace std;

// int main(){

// int a;
// char b; 
// float c;
// bool d;
// double e;


// cout <<"the size of int "<<endl<< sizeof(a) <<endl;
// cout <<"the size of char"<<endl<< sizeof(b)<<endl;
// cout <<"the size of float "<<endl<< sizeof(c) <<endl;
// cout <<"the size of bool"<<endl<< sizeof(d) <<endl;

// return 0;
// }



/*swap two numbers */
// #include <iostream>
// using namespace std;

// int main(){

//     int a = 5;
//     int b = 9;

//     cout <<"no. before swapping " "a is "<<a<<'\n'<<"b is "<<b <<endl;

//     swap(a,b) ;

//     cout<<"no. after swaapping " "a is "<<a<<'\n'<<"b is "<<b <<endl;

    
// }


///////////////////// FINDING A KEY IN ARRAY /////////////////////////

// #include<iostream>
// using namespace std; 

// int main(){

//     int arr[]= {3,5,89,9,0}; 
//     int size = 5 ; 

//     int n ; 
//     cout<<"tell me the n "; 
//     cin>>n; 

//     int flag = 0 ; 

//     for (int i = 0 ; i <size ; i++ ){

//         if(arr[i]== n ){
//             flag =1 ; 
//             break; 
//         }

//     }
    
//     if(flag==1){
//         cout<<"found";  
//     }
//    if(flag==0 ){
//     cout<<"not found"; 
//    }
// }





///////////////// array to take input from user //////////////

// #include<iostream>
// using namespace std ;


// int main(){

//     int n ; 
//     cout<<"tell me size of array; ";
//     cin>>n ; 

//     int arr[n];
//     cout<<"tell me the array "; 
//     for(int i =0 ; i<n ; i++){
//         cin>>arr[i];
//     }

//     for ( int i =0 ; i<n ; i++){
//         cout<<arr[i]; 
//     } 
// }




/////////////////// trying extreme print using while loop /////////////////////

// #include<iostream>
// using namespace std; 

// int main(){

//     int arr[5]={3,5,9,0,2}; 
//     int size = 5; 

//     int start = 0 ; 
//     int end = size - 1; 

//     while (true){

//         if (start>end ){
//             break; 
//         }

//         if (start==end ){
//             cout<<arr[start]<<endl; 
//         }

//         if (start <end ){

//             cout<<arr[start]<<endl; 
//             cout<<arr[end]<<endl; 
//         }

//         start++; 
//         end--; 

//     }


// }



///////////////// trying extreme print using for loop //////////////

// #include<iostream>
// using namespace std; 

// int main (){

//     int arr[5]={1 ,2 , 3, 4 , 5}; 
//     int size =5; 

//     for( int start = 0 , end = size - 1 ;  start <= end ;  start=start+1 , end= end-1){

//         if(start ==end ){
//             cout<<arr[start]<<endl; 

//         }
//         if(start <end){
//             cout<<arr[start]<<endl;
//             cout<<arr[end]<<endl;
//         }
//     }
// }



////////////////////reversing an array using for loop and swap ///////////////////

#include<iostream>
using namespace std; 


int main(){

    int arr[5]={3,4,5,6,7}; 
    int size = 5 ; 

    for(int start = 0 , end = size -1 ; size<=end ; start++ , end--){
        if(start<end){
            swap(arr[start],arr[end]); 
        }
    }

    for (int i = 0 ; i <5 ; i++){

        cout<<arr[i]; 
    }
}