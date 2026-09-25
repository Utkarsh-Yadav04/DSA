////////////////////////*********Searching and Sorting************\\\\\\\\\\\\\\\\\\\\\\\\\\

//********BINARY SEARCH***********//
// #include<iostream>
// #include<vector>
// #include<limits.h>
// #include<algorithm>
// using namespace std;

// int binarySearch(int arr[] ,int size ,int target){
//     int start = 0 ; 
//     int end = size - 1 ; 

//     int mid = (end + start)/2 ; 

//     while ( start <= end){

//         int element=arr[mid];

//         if(element==target){
//             return mid;
//         }

//         else if (element<target){
//             start = mid+1;
//         }
//         else{ end = mid-1; }

//         mid = (start + end )/2 ; 


//     }
//     return -1;
// }

// int main(){

//     int arr[]={11, 23 ,34 ,67 ,77 ,90 ,98};
//     int size = 7;
//     int target = 6 ;

//     int indexOftarget = binarySearch(arr , size , target);
//     if(indexOftarget==-1){
//         cout<<"target not found" <<endl;

//     }
//     else{
//         cout<<"target found  "<<indexOftarget<<endl;
//     }
//     return 0;
// }
 

/////*******pre defined binary search stl function******************/

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

//     vector<int>v{1,2,3,4,5,6};

//     if(binary_search(v.begin(),v.end(),3)){
//         cout<<"found";
//     }
//     else{cout<<"not found";}
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){

//     int arr[]={1,2,3,4,5,6};
//     int size=6;

//     if (binary_search(arr,arr+size,39)){
//         cout <<"found";

//     }
//     else{cout<<"not found";}
//  return 0;
// }

//////***********FIRST OCCURENCE*******************\\\\\\\\\\\\\\\\\\

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int findFirstOccurence(int arr[], int size , int target){
//     int start = 0 ; 
//     int end = size - 1 ; 

//     int mid = start + (end - start)/2; 
//     int ans = -1 ; 

//     while(start<=end){
        
//         if(arr[mid]==target){
//             ans=mid;
//             end=mid-1;
//         }
//         else if (arr[mid]<target){
//             start = mid +1 ; 
//         }
//         else{
//             end = mid -1 ; 
//         }
//         mid = start + (end - start)/2; 
//     }
//     return ans ;
// }

// int main(){

//     int arr[]={23,25,25,25,87,84};
//     int size=6;
//     int target = 25;

//     int finalAns=findFirstOccurence(arr,size,target);

//     if(finalAns==-1){
//         cout<<"not found";
//     }
//     else{ cout<<"found"<<finalAns;}
// }

///////////////////////LAST OCCURENCE////////////////


// #include<iostream>
// using namespace std;

// int findLastOccurence(int arr[],int size,int target){
    
//     int start = 0 ; 
//     int end = size -1;

//     int ans = -1 ; 
//     int mid = start + (end-start)/2;

//     while(start<=end){
        
//         if(arr[mid]==target){
//             ans = mid;
//             start = mid+1;
    
//         }
//         else if(arr[mid]<target){
//             start=mid+1;
//         }
//         else{ end = mid - 1; }
    
//         mid=start + (end-start)/2;
//     }


//     return ans;

// }

// int main(){

//     int arr[]={1,23,43,43,43,56,67};
//     int size = 7;
//     int target  = 43; 

//     int hereIsAns=findLastOccurence(arr,size,target);

//     if(hereIsAns==-1){
//         cout<<"not found";
//     }
//     else{cout<<"found "<<hereIsAns;}
//     return 0;
// }


/////////////////////////FIND TOTAL OCCURENCE/////////////////////////


///////////////////******************FIND MISSING ELEMENT********************///////////////

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int findMissing(int arr[], int size){
//     int s = 0 ;
//     int e = size -1 ; 
//     int ans = -1 ;

//     int mid = s+ (e-s)/2; 
    

//     while(s<=e){
//         int diff = arr[mid]-mid;
//         if(diff==1){
//             s = mid+1;
//         }
//         else{
//             ans= mid;
//             e=mid-1;
//         }

//         mid = s+(e-s)/2;
//     }
//     return ans+1;

// }


// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size = 7;

//     int missing = findMissing(arr,size);

//     if (missing == -1){
//         cout<<"not found" <<missing+1;

//     }
//     else{cout<<"found"<<missing;}
// }


///////////////////////////*****PEAK ELEMENT IN ARRAY *****************///////////////////

// #include<iostream>
// using namespace std;

// int peak(int arr[], int size){

//     int start = 0 ; 
//     int end = size - 1 ; 
   

//     while(start<end){
//         int mid = start +(end - start)/2;

//         if(arr[mid]>arr[mid+1]){
            
//             end=mid;

//         }
//         else{start=mid+1;}
//     }
//     return arr[start];
// }

// int main(){

//     int arr[7]={2,3,4,60,40,23,13};
//     int size = 7;

//     int findPeak = peak(arr,size);

//     cout<<findPeak;
// }

/////////////*********PIVOT ELEMENT*******************//////////////////
// #include<iostream>
// using namespace std;
// int pivot(int arr[],int size){

//     int start = 0 ; 
//     int end = size -1 ; 

//     while(start<end){

//         int mid= start+(end-start)/2;

//         if(arr[mid]<arr[0]){
//             end=mid;
//         }
//         else{start=mid+1;}


//     }
//     return start;
// }

// int main(){

//     int arr[5]={7,9,1,2,3};
//     int size = 5; 

//     int findP=pivot(arr,size);

//     cout<<findP;
// } 

/////////////////////***********FIND ELEMENT IN ROTATED SORTED ARRAY****************////////////

// #include<iostream>
// using namespace std;

// int pivot(int arr[],int size){

//     int start = 0 ; 
//     int end = size -1 ; 

//     while(start<end){

//         int mid= start+(end-start)/2;

//         if(arr[mid]<arr[0]){
//             end=mid;
//         }
//         else{start=mid+1;}


//     }
//     return start;
// }

// int binarySearch(int arr[],int start , int end , int key){

    

//     while(start<=end){
        
//         int mid = start +(end - start)/2;

//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]<key){
//             start= mid+1;
//         }
//         else{end=mid-1;}
//     }

// }

// int main(){

//     int arr[5]={7,9,1,2,3};
//     int size = 5; 
//     int key = 2;

//     int findP=pivot(arr,size);

//     cout<<findP<<endl;
//     int ans;

//     if(arr[findP]<=key && arr[size-1]>=key){
//         ans = binarySearch(arr,findP,size-1,key);
//     }

//     else{ans = binarySearch(arr,0,findP-1,key);}

//     cout<<ans;


// } 

/////////////******SQUARE ROOT OF A NUMBER USING BINARY SEARCH *********////////////

// #include<iostream>
// using namespace std;

// int main(){
     
// }

///////////////////******DIVISOR DIVIDEND PROBLEM ***************///////////////////////

// #include<iostream>
// using namespace std; 


//     int herequotient(int divisor , int dividend ){
//         int s = 0 ; 
//         int e = dividend - 1; 
//         int ans = -1 ;

//         while(s<=e){
            
//             int mid = s+(e-s)/2; 

//             if (divisor*mid<=dividend ){
//                 ans = mid ;
//                 s=mid+1;

//             }
//             else{e=mid-1;}
//         }
//         return ans;
//     }

// int main(){
//     int divisor = 5;
//     int dividend = 36;

//     int findQuotient= herequotient(abs(divisor) , abs(dividend) );

//     if(divisor>0&&dividend<0 || divisor<0&&dividend>0){
//         cout<<-findQuotient;
//     }
//     else{cout<<findQuotient;}

   

// }


///////////////////////*************************NEARLY SORTED ARRAY********************///////////////
// #include<iostream>
// using namespace std; 

// int nearlySorted(int arr[], int size , int key){
//     int s= 0 ;
//     int e = size -1 ; 

//     int ans = -1 ;
    

//     while(s<=e){

//         int mid = s+(e-s)/2; 
        
//         if (arr[mid]==key){
//             return mid;
//         }
//         else if(mid - 1>=s && arr[mid-1]==key){
//             return mid-1; 
//         }
//         else if(mid+1<=e && arr[mid+1]==key){
//             return mid+1;
//         }

//         else if(arr[mid]<key){
//             s = mid+2;
//         }

//         else{e=mid-2;}

        
//     }
//     return mid;
// }

// int main(){

//     int arr [6]={10,30,20,50,40,60};
//     int size= 6;

//     int key=30;
        
//     int finalAns=nearlySorted(arr,size ,key);

//     cout<<finalAns;
// }

/////////////////*************FIND THE ODD OCCURING ELEMENT**********************////////////////
// #include<iostream>
// using namespace std;

// int oddElement(int arr[], int size){
//     int s= 0 ; 
//     int e = size-1 ;

//     while(s<e){

//         int mid = s+(e-s)/2;

//         if(mid%2==0){
//             if(arr[mid+1]==arr[mid]){
//                 s=mid+2;
//             }
//             else{e=mid;}
//         }
//         else{
//             if(arr[mid]==arr[mid+1]){
//                 e=mid;
//             }
//             else{s=mid+1;}
//         }
//     }
//     return s;
// }

// int main(){

//     int arr[11]={5,5,2,2,6,6,3,3,8,8,7};
//     int size = 11;

//     int finalAns= oddElement(arr,size);
//     cout<<finalAns;
// }

