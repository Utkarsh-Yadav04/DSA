// #include<iostream>
// #include<vector>
// using namespace std; 

// int findUnique(vector<int>arr){
//     int ans =0;

//     for (int i =0; i<arr.size(); i++){
//          ans = ans^arr[i];
//     }

//     return ans;

// }

// int main(){

//     int length;
//     cout<<"tell me the lenght of array";
//     cin>>length;

//     vector<int>arr(length);
    
//     for (int i = 0 ; i<length ; i++){
//         cin>>arr[i];
//     }

//     int unique = findUnique(arr);

//     cout<<unique;


// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     int arr[] ={1,3,4,5,6};
//     int A =5;
//     int brr[]={0,9,8,7,6};
//     int B = 5;

//     vector<int>uni;
//     for (int i =0 ; i<A ; i++){
//         uni.push_back(arr[i]);
//     }

//     for (int i =0 ; i<A ; i++){
//         uni.push_back(brr[i]);
//     }

//     for (int i = 0 ; i<uni.size(); i++){
//         cout<<uni[i]<<" ";
//     }
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;



// int main(){

// int arr[9]={1,2,5,3,9,7,0,4,3};
// int s = 0 ; 
// int e = 9 -1 ; 

// while (true){
//     if(s>e){
//         break;
//     }
//     if(s==e){
//         cout<<arr[s];
//     }
//     if(s<e){
//         cout<<arr[s];
//         cout<<arr[e];
//     }
//     s++;
//     e--;
    
// }


// }

// #include<iostream>
// using namespace std;

// int main(){

//     int arr[6]={1,8,3,9,7,0};
//     int start = 0 ; 
//     int end = 5; 

//     while(start<=end){
//         swap(arr[start],arr[end]); 

//         start++; 
//         end--; 

//     }

//     for(int i = 0  ; i<6 ;  i++){
//         cout<<arr[i];
//     }
// }



// #include<iostream>
// #include<vector>

// using namespace std;
// int ans = 0 ; 
// int findUnique(vector<int>arr){
//     for(int i  = 0 ; i<arr.size();i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){
    
//     int n ; 
//     cout<<"tell me the n ; ";
//     cin>>n; 

//     vector<int>arr(n);
//     cout<<"now tell me elements of vector";

//     for(int i = 0 ; i<arr.size(); i++){
//         cin>>arr[i];
//     }

//     int unique = findUnique(arr);

//     cout<<"the unique element is "<<unique;


// }

// #include<iostream>
// #include<vector>

// using namespace std;

// int binarySearch(vector<int>arr, int key , int size ){

//     int start= 0 ; 
//     int end = size -1 ;
//     int ans = -1;
    
//     int mid = start +(end -start)/2;

//     while (start<= end ){

//         int element=arr[mid];

//         if(element == key){
//             return mid ; 
//         }

//         else if (element <key){
//             start = mid+1;
//         }

//         else{ end= mid -1;}

//         mid = start+(end - start)/2;


//     }
//     return ans; 

// }

// int main(){

//     vector<int>arr{2,4,5,6,7,8,9};
//     int key = 4;
//     int size = arr.size();
//     int final = binarySearch(arr, key ,size); 

//     if(final==-1){
//         cout<<"not found";
//     }
//     else{ cout<<"found"<<final;}
// }   

//  #include<iostream>
//  #include<vector>
//  #include<algorithm>

//  using namespace std;

//  int main(){
    
//     vector<int>arr{2,4,5,6,7,9};

//     if(binary_search (arr.begin(),arr.end(),3)){
//         cout<<"found";
//     }

//     else{cout<<"not found";}

//     return 0 ; 
//  }

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std; 

// int main(){

//     int arr[5]={1,2,3,4,5};
//     int size = 5; 

//     if(binary_search(arr,arr+size,3)){
//         cout<<"found";
//     }

//     else{cout<<"not found";}
// }

// #include<iostream>
// #include<vector>

// using namespace std;

// int firstOccurence(vector<int>arr , int size , int target){

//     int start = 0 ; 
//     int end = size -1 ;
//     int ans=-1;
    
    
//     while(start<=end){
//         int mid = start + (end - start)/2;

//         if(target ==arr[mid]){
//             ans=mid;
//             end=mid-1;
//         }
//         else if(target<arr[mid]){
//             end = mid -1;
//         }

//         else{start = mid +1 ;}

//     }
//     return ans;
// }

// int main(){

//     vector<int>arr{2,2,2,2,4,5,6};
//     int target =2;

//     int first = firstOccurence(arr,arr.size(),target);

//     if(first==-1){
//         cout<<"not found";
//     }
//     else{cout<<"found"<<first;}
// }

#include<iostream>
using namespace std;

int peak(int arr[], int size){

    int start = 0 ; 
    int end = size - 1 ; 
   

    while(start<end){
        int mid = start +(end - start)/2;

        if(arr[mid]>arr[mid+1]){
            
            end=mid;

        }
        else{start=mid+1;}
    }
    return arr[start];
}

int main(){

    int arr[7]={2,3,4,60,40,23,13};
    int size = 7;

    int findPeak = peak(arr,size);

    cout<<findPeak;
}