// #include<iostream>
// using namespace std; 

// int main(){

//     // int arr[10];
//     // cout<<arr<<endl; 
//     // cout<<&arr; 

//     int arr[5]= {4,5,7,8,9}; 
//     int brr[]={0,8,4,8};
//     int crr[10]={9,4,3,0};
//     // int drr[3]={4,0,3,9,7,5};   wont work 

//     char abc[5]={'a','b','c','e',}; 

//     cout<<"array initialisation successful"; 


// }

// #include <iostream>
// using namespace std; 

// int main(){

//     int arr[4]={3,5,9,8}; 

//     cout<<arr[2];
// }

// #include<iostream>
// using namespace std; 
// int main(){
//     int arr[5]={3,5,2,6,9};

//     for(int index=0; index<5 ; index++){
//         cout<<arr[index]<<endl; 
//     }
// }

// #include<iostream>
// using namespace std; 

// int main(){
//     int arr[5]; 
//     cout<<"enter the input values in array "; 

//     for(int i=0 ; i<5 ; i++) {
//         cin>>arr[i]; 
//     }

//     cout<<"now we gonna print array index"<<endl;

//     for(int i=0;  i<5; i++){
//         cout<<arr[i]<<endl; 

//     }
// }

//**************taking  5 arrays inputs from the user and printing its double  */

// #include<iostream>
// using namespace std; 

// int main(){
//     int arr[5]; 
//     cout<<"input array "; 

//     for(int i =0 ; i<5 ; i++){
//         cin>>arr[i]; 
//     }

//     for(int i=0 ; i<5 ; i++){
//         cout<<arr[i]*2<<endl;
//     }
// }

//replace all the values of array and change it to one ********************

// #include <iostream>
// using namespace std; 

// int main(){
//     int arr[5]={3,5,2,6,9}; 
    
//     for(int i =0 ; i<5 ; i++){
//         arr[i]=1; 
//     }

//     for(int i =0 ; i<5 ; i++){
//         cout<<arr[i]; 
//     }
// }

//*****************LINEAR SEARCH IN ARRAY **************************/

// #include<iostream>
// using namespace std; 

// int main(){

//     int arr[]={5,3,9,2,9,0}; 
//     int size=6; 

//     int key = 8; 

//     bool flag = 0 ; 

//     for(int i=0 ; i<size ; i++){
//         if(arr[i]==key){
//             flag =1 ; 
//         }
        
//     }

//     if (flag){
//         cout<<"present";

//     }
//     else{cout<<"not present"; }

//     return 0; 
// }


// #include<iostream>
// using namespace std; 

// bool find(int arr[],int size ,int key ){
//    for(int i =0 ; i<size ; i++){
//       if(arr[i]==key){
//          return true;
//       }
     
//    }
//    return false; 
// }

// int main (){
//     int arr[]={9,2,0,5,7}; 
//     int size = 5; 

//     int key ; 
//     cout<<"tell me the key :"; 
//     cin>>key; 

//     bool ans= find(arr , size, key);

//      if (ans == true ){
//         cout<<"found"<<endl; 
//      }
//      else{
//       cout<<"not found";
//      }

    
// }


//**************COUNT THE NUMBER OF ZEORES AND ONE IN AN ARRAY *************************** */

// #include <iostream>
// using namespace std; 

// int main (){

//    int arr[]={8,1,0,1,0,0,0,1,1,1,1,1,9}; 
//    int size =13; 

//    int numZ=0 ; 
//    int numO=0; 
   
//    for(int i =0 ; i<size ; i++) {
      

//       if(arr[i]==0){
//          numZ++; 
//       }
//       if(arr[i]==1){
//          numO++; 
//       }
      
//    }
//    cout<<numZ<<endl; 
//    cout<<numO<<endl; 
// }


//****************** MAXIMUM NUMBER IN AN ARRAY********************/

// #include<iostream>
// #include<limits.h>
// using namespace std; 

// int main(){

//    int brr[]={3,23,5,9,30,84,0,28,8}; 
//    int size=9; 

//    int maxN=INT_MIN; 

//    for(int i =0 ; i<size ; i++){

//       if(brr[i]>maxN){

//          maxN=brr[i];
//       }
//    }
//    cout<<maxN; 
// }


//************** EXTREME PRINT IN ARRAY *************************/

// #include<iostream>
// using namespace std; 
// int main (){

//    int arr[]={3,4,9,2,0,9,8};  //print 3 8 4 9 9 0 2
//    int size = 7; 

//    int start =0 ; 
//    int end = size -1 ; 

//    while (true){
//       if(start>end)
//       break;

//       if(start==end){

//          cout<<arr[start]<<endl; 

//       }

//       if (start<end){

//          cout<<arr[start]<<endl; 
//          cout<<arr[end]<<endl; 
//       }
//       start++;
//       end--; 
//    }
//    return 0; 
// }


//*********************REVERSE AN ARRAY ******************/

// #include<iostream>
// using namespace std;

// int main(){

//    int arr[]={3,5,9,1,8,0}; 
//    int size=6; 

//    int start =0 ; 
//    int end= size -1 ; 

//    while(start<=end){
//       swap(arr[start],arr[end]);
//       start++ ; 
//       end--; 
//    }
   
//    for(int i =0 ; i<size ; i++){
//       cout<<arr[i]<<endl; 
//    }
//    return  0; 

// }


///////////////// TAKING FIVE INPUTS FROM THE USER AND PRINTING ITS DOUBLE //////////
// #include<iostream>
// using namespace std; 

// int main(){

//     int arr[5];

//     cout<<"tell me the data";

//     for(int i =0 ; i<5 ; i++){
//         cin>>arr[i];
//     }

//     cout<<"here is your data of array :"; 


//     for(int i =0 ; i<5; i++){
//         cout<<arr[i]*2; 

//     }

// }


///////////// PASS BY VALUE /////////////////////

// #include<iostream>
// using namespace std; 

// void printArray ( int arr[], int size){
//     for(int i =0 ; i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl; 
// }

// void inc( int arr[] , int size){
//     arr[0]= arr[0]+10 ;
//     printArray(arr , size);  
// }



// int main(){

//     int arr[]={3,4,5,8,9}; 
//     int size =5; 

//     inc(arr, size); 
    
//     printArray(arr , size); 

     
    
// }



////////////LET'S TRY TO TAKE INPUT FROM USER FOR ARRAY USING FUNCTIOIN ///////////

// #include<iostream>
// using namespace std; 

// void pArray( int arr[], int length ){

//     for (int i =0 ; i<length ;i++ ){
//         cout<<arr[i]<<" ";
//     }
// }

// void tArray( int arr[] , int length){
//     for(int i =0 ; i<length ; i++){
//         cin>>arr[i]; 
//     }
// }

// int main (){

//     cout<<"tell me the size";

//     int length; 
//     cin>>length; 

//     int arr[length]; 

//     tArray(arr , length); 

//     pArray(arr, length); 

    
// }



/////////////////////////// FIBONACCI SERIES ////////////////




// #include<iostream>
// using namespace std; 

// int main(){

//     int n ; 
//     cout<<"tell me n ; "; 
//     cin>>n ; 

//     int a = 0 ; 
//     int b= 1; 

//     cout<<b<<endl;

//     for (int i =1 ; i<n ; i++){
//         int c = a+b ; 
//         cout<<c<<endl; 
//         a=b ; 
//         b=c ; 
//     }

    
    
//     return 0 ; 
// }



/////////////// FINDING A KEY IN ARRAY ////////////////

// #include <iostream>
// using namespace std; 

// int main(){

//     int arr[5]= {2,3,4,6,9}; 
//     int size = 5; 

//     int key ; 
//     cout<<"tell me the key "; 
//     cin>>key; 

//     int flag =0 ; 

//     for (int i =0 ; i<size ; i++){

//         if(arr[i]==key){
//             flag = 1;  
//             break; 
//         }
        
//     }
    
//     if (flag ){
//         cout<<"found"; 
//     }

//     else{cout<<"not found"; }
// }


////////////////// MAXIMUM NUMBER IN AN ARRAY ///////////////////////////////

// #include<iostream>
// #include<limits.h>
// using namespace std; 

// int main(){

//     int arr[5]= {38,2,9,83,5}; 
//     int size = 5; 

//     int maxN = INT_MIN ; 

//     for (int i=0 ; i< size ; i++){

//         if ( arr[i]> maxN ){
//             maxN= arr[i]; 

//         }

//     }
//     cout<<maxN;



// }





