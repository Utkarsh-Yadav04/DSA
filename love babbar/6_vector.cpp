// #include<iostream>
// #include<vector>
// using namespace std; 

// int main (){

//     vector<int>arr;

//     int ans = (sizeof(arr)/sizeof(int));
//     cout<<ans;   //3
    
//     cout<<arr.size();       //0
//     cout<<arr.capacity();    //0



// }




// #include<iostream>
// #include<vector>
// using namespace std; 

// int main (){


//     vector<int>arr; 

//     arr.push_back(5);      // insert
//     arr.push_back(4);

//     for(int i = 0 ; i<arr.size() ; i++){
//         cout<<arr[i]; 
//     }
//     cout<<endl; 

//     arr.pop_back();       //remove 

//     for(int i= 0 ; i<arr.size(); i++){
//         cout<<arr[i];
//     }
// }



// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<int>arr(10); 

//     cout<<arr.size();         //10
//     cout<<arr.capacity();    //10
//     cout<<endl; 

//     for(int i =0 ; i<arr.size(); i++){

//         cout<<arr[i]; 
//     }
//     cout<<endl; 



//     vector<int>brr(10 , -1);        //vector declaration 

//     for(int i =0 ; i<brr.size(); i++){

//         cout<<brr[i]; 
//     }
//     cout<<endl; 


//     vector<int>crr{12,4,5,65,67,89};  //another way to declare vector 

//     for(int i =0 ; i<crr.size(); i++){

//         cout<<crr[i]<<" "; 
//     }
//     cout<<endl; 


//     cout<<"vector crr is empty or not " <<crr.empty()<<endl; 

//     vector<int>drr; 

//     cout<<"vector drr is empty or not "<<drr.empty()<<endl; 


// }



//Unique Element 

// #include<iostream>
// #include<vector>
// using namespace std; 

// int findUnique(vector<int>arr){
//     int ans =0 ; 

//     for(int i =0 ; i<arr.size(); i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main(){

//     int n ;
//     cout<<"enter the size of array "<<endl; 
//     cin>>n ; 

//     vector<int> arr(n); 
//     cout<<"enter the elements"<<endl; 

//     for(int i =0 ; i<arr.size() ; i++ ){
//         cin>>arr[i]; 
//     }

//     int uniqueElement = findUnique(arr); 

//     cout<<"unique element is "<<uniqueElement<<endl;
// }



//////////  UNION OF 2 ARRAYS ///////////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     int arr[]= {3,5,6,7,8}; 
//     int sizeA = 5; 
//     int brr[]={1,2,0,9}; 
//     int sizeB = 4; 

//     vector<int>ans;

//     for(int i =0 ; i<sizeA ; i++){

//         ans.push_back(arr[i]); 
//     }


//     for(int i =0 ; i<sizeB ; i++){

//         ans.push_back(brr[i]); 
//     }


//     for(int i =0 ; i<ans.size(); i++){

//         cout<<ans[i]; 
//     }

    

    
// }




//////////// INTERSECTION OF 2 ARRAYS ////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     int arr[]={3,4,5,6,7,3}; 
//     int sizeA=6; 
//     int brr[]={8,9,4,2,3};
//     int sizeB=5; 

//     vector<int>ans; 

//     for(int i =0 ; i<sizeA ; i++){

//         for(int j =0 ; j<sizeB ; j++){

//             if (arr[i]==brr[j]){

//                 brr[j]=-1; 
//                 ans.push_back(arr[i]); 
//             }
//         }
//     }

//     for(int i = 0 ; i<ans.size(); i++){

//         cout<<ans[i]; 
//     }
// }


////////////////// Union with duplicate ///////////////////

// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std; 

// int main(){


//     int arr[]={2,3,4,5,6}; 
//     int sizeA=5 ; 
//     int brr[]={9,6,8,7,4}; 
//     int sizeB =5; 

//     vector<int>ans;

//     for(int i = 0 ; i<sizeA ; i++){

        
//     }
// }


///////// PAIR  SUM ///////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<int>arr{3,4,6,7,8,2,1,5}; 

//     int sum = 7 ; 

//     for(int i = 0 ; i<arr.size(); i++){

//         for(int j =i+1 ; j<arr.size(); j++){

//             if(arr[i]+arr[j]==sum){
//                 cout<<arr[i]<<" "<<arr[j]<<endl; 
//             }
//         }
//     }
// }



//////////////// TRIPLE SUM ///////////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<int>arr{10,20,30,40,50,}; 

//     int sum = 60 ; 

//     for(int i =0 ; i<arr.size(); i++){

//         for(int j= i+1 ; j<arr.size(); j++){

//             for(int p = j+1 ; p<arr.size(); p++){

//                 if(arr[i]+arr[j]+arr[p]==sum){

//                     cout<<arr[i]<<" "<<arr[j]<<" "<<arr[p]<<endl; 
//                 }
//             }
//         }
//     }
// }



////////////  SORT'S 0 AND 1 ////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<int>arr{0,1,1,1,1,0,0,0,1}; 
//     int i =0 ; 
//     int start = 0 ; 
//     int end = arr.size() - 1 ; 

//     while(i <= arr.size()){

//         if (arr[i]==0){
//             swap(arr[start],arr[i]); 
//             start++; 
//             i++; 
//         }

//         else{
//             swap(arr[end],arr[i]); 
//             end--; 
//         }
//     }

//     for(int i = 0 ; i<arr.size(); i++){
//         cout<<arr[i]<<" "; 
//     }
// }


//////////////////////////////////////// 2-D ARRAYS /////////////////////////////////////////////////

// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     //declare 
//     int brr[3][3]; 

//     int arr[3] [3] = {{2,3,4}, {3,4,5}, {6,7,8}} ; 
 
//     cout<<arr[2][2]<<endl;    //8

//     //row-wise print 

//     for (int i =0 ; i<3 ; i++){
//         for(int j =0 ; j<3 ; j++){

//             cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl; 
//     }

//     cout<<endl; 

//     //column-wise print 

//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<3 ; j++){

//             cout<<arr[j][i]<<" "; 

//         }
//         cout<<endl; 
//     }

// }



// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     int arr [4][3]; 
//     int rows= 4; 
//     int cols = 3; 

//     //taking row wise input 

//     cout<<"tell me the input"<<endl; 

//     for(int i = 0 ; i<rows ; i++){
//         for(int j = 0 ; j<cols ; j++){

//             cin>>arr[i][j]; 
//         }
//     }


//     cout<<"PRINTTING THE TAKEN INPUT "<<endl; 


//     for(int i = 0 ; i<rows ; i++){
//         for(int j = 0 ; j<cols ; j++){

//             cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl; 
//     }




//taking col wise input 

//     cout<<"tell me the input"<<endl; 

//     for(int i = 0 ; i<cols ; i++){
//         for(int j = 0 ; j<rows ; j++){

//             cin>>arr[j][i]; 
//         }
//     }


//     cout<<"PRINTTING THE TAKEN INPUT "<<endl; 


//     for(int i = 0 ; i<rows ; i++){
//         for(int j = 0 ; j<cols ; j++){

//             cout<<arr[i][j]<<" "; 
//         }
//         cout<<endl; 
//     }



//  }



/************************************** ROW SUM **********************************/

// #include<iostream>
// #include<vector>
// using namespace std; 

// void rowSum (int arr[][3] , int cols , int rows ){

//     for(int i = 0 ; i<rows; i++){
//         int sum = 0 ; 
//         for(int j = 0 ; j<cols; j++ ){

//          sum = sum + arr[i][j]; 
//         }
//         cout<<sum<<endl ; 
//     }

// }

// int main(){

//     int rows = 3 ; 
//     int cols = 3 ; 

//     int arr[3][3]={{2,3,4},{3,4,6},{3,5,6}};

//     rowSum(arr , cols , rows); 
// }


/**************************************  COL SUM  ******************************************/

// #include<iostream>
// #include<vector>
// using namespace std; 

// void rowSum (int arr[][3] , int cols , int rows ){

//     for(int i = 0 ; i<rows; i++){
//         int sum = 0 ; 
//         for(int j = 0 ; j<cols; j++ ){

//          sum = sum + arr[j][i]; 
//         }
//         cout<<sum ; 
//     }

// }

// int main(){

//     int rows ; 
//     int cols ; 

//     int arr[3][3]={{2,3,4},{3,4,6},{3,5,6}};

//     rowSum(arr , cols , rows); 
// }


/*********************************** FINDING ELEMENT IN 2D ARRAY ************************************/

// #include<iostream>
// #include<vector>
// #include<limits.h>

// using namespace std; 

// bool findE(int arr[][3] , int cols , int rows ,int keys){

//     for(int i = 0 ; i<3 ; i++){
//         for (int j = 0 ; j<3 ; j++){
//             // cout<<arr[i][j]<<" "; 

//             if (arr[i][j]==keys){
//                 return true; 

//             }

            
//         }
//         // cout<<endl; 
//     }
//     return false; 

// }

// int main(){

//     int arr[3][3]={{1,23,43},{43,58,98},{21,32,49}}; 

//     int cols =3; 
//     int rows =3; 
//     int keys ;
//     cout<<"tell me the keys"; 
//     cin>>keys ; 

//     findE (arr,cols,rows , keys); 

//     bool ans = findE(arr, rows ,cols , keys); 
//     cout<<ans; 
// }



// #include<iostream>
// #include<vector>
// #include<limits.h>

// using namespace std; 

// int findE(int arr[][3] , int cols , int rows ,int keys){

//     for(int i = 0 ; i<3 ; i++){
//         for (int j = 0 ; j<3 ; j++){
//             // cout<<arr[i][j]<<" "; 

//             if (arr[i][j]==keys){
//                 return arr[i][j]; 

//             }

            
//         }
       
//     }
//     return -1 ; 
     

// }

// int main(){

//     int arr[3][3]={{1,23,43},{43,58,98},{21,32,49}}; 

//     int cols =3; 
//     int rows =3; 
//     int keys ;
//     cout<<"tell me the keys"; 
//     cin>>keys ; 

     

//     int ans = findE(arr, rows ,cols , keys); 

//     if (ans != -1){
//         cout<<"element found"<<ans; 
//     }
//     else{
//         cout<<"not found "; 
//     }
// }



/**************************** FINDING THE BIGGEST ELEMENT IN 2D ARRAY ***************************************/


// #include<iostream>
// #include<vector>
// #include<limits.h>
// using namespace std; 

// int findMax (int arr[][5] , int rows , int cols){

//     int max = INT_MIN; 

//     for(int i = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             if(arr[i][j]>max){
//                 max = arr[i][j];
//             }
//         }
//     }
//     return max; 
// }

// int main(){

//     int arr[3][5]={{1,2,3,4,5},{32,3,4,5,6},{3,23,56,32,2}}; 

//     int rows = 3; 
//     int cols = 5; 

//     int ans = findMax(arr,rows,cols); 
//     cout<<ans; 
// }



/********************************************* TRANSPOSE OF A MATRIX ******************************************/

// #include<iostream>
// #include<limits.h>
// #include<vector>

// using namespace std; 

// int main (){

//     int arr [3][4]= {{1,2,3,4},{3,4,3,6},{9,6,5,4}}; 

//     int transpose [4][3]; 

//     for (int i  = 0 ; i<3 ; i++){
//         for(int j = 0 ; j<4 ; j++){
//             transpose [j][i]= arr[i][j]; 
//         }
//     }

//     for(int i = 0 ; i<4 ; i++){
//         for(int j = 0 ; j<3 ; j++){
//             cout<<transpose[i][j]<<" "; 
//         }
//         cout<<endl; 
//     }
// }






//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/************************************************ 2D VECTOR ****************************************************/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<vector<int> > arr;

//     vector<int>a {1,2,4}; 
//     vector<int>b {3,5,6}; 
//     vector<int>c {5,9,6}; 

//     arr.push_back(a); 
//     arr.push_back(b); 
//     arr.push_back(c); 

//     for(int i = 0 ; i<arr.size(); i++){
//         for(int j = 0 ; j<arr[i].size(); j++){
//             cout<<arr[i][j]; 
//         }
//         cout<<endl; 
//     }


// }


// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     int rows = 5 ; 
//     int cols = 4; 
//     vector<vector<int> > arr( rows, vector<int>(cols,0)); 

//     for(int i = 0 ; i<rows; i++){
//             for(int j = 0 ; j<cols; j++){
//             cout<<arr[i][j]; 
//         }
//         cout<<endl; 
//     }


// }


// #include<iostream>
// #include<vector>
// using namespace std; 

// int main(){

//     vector<vector<int> > arr ( 5 , vector<int>(5,-8)); 

//     for(int i = 0 ; i<5 ; i++){
//        for(int j = 0 ; j<5 ; j++){

//         cout<<arr[i][j]; 
//        }
//        cout<<endl; 
//     }
// }




/************************* SORT 3 COLORS ***************************/


/**using sort algorithm */


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// int main(){

//     vector<int>arr{1,0,2,0,2,1,1,2}; 

//     sort(arr.begin(),arr.end());


//     for(int i = 0 ; i<arr.size(); i++){
//         cout<<arr[i]<<" "; 
//     }
// }




/*using another method */

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// int main(){

//     vector<int>arr{1,0,2,0,2,1,1,2}; 

//     int zeros = 0 ; 
//     int ones = 0 ; 
//     int twos = 0 ; 

//     for(int i = 0 ; i<arr.size(); i++){

//         if(arr[i]==0){
//             zeros++; 
//         }

//         else if (arr[i]==1){
//             ones++; 
//         }

//         else{
//             twos++;
//         }
//     }

//     //spread
//     int i = 0 ; 

//     while(zeros>0){
//         arr[i]=0; 
//         zeros--;
//         i++;
//     }

//     while(ones>0){
//         arr[i]=1; 
//         ones--; 
//         i++; 
//     }

//     while(twos>0){
//         arr[i]=2; 
//         twos--; 
//         i++; 
//     }


//     for(int i = 0 ; i<arr.size(); i++){
//         cout<<arr[i]<<" "; 
//     }
// }




/*NOW USING DUTCH NATIONAL FLAG ALGORITHM*/

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// int main(){

//     vector<int>arr{1,0,2,0,2,1,1,2,1,0,0,0}; 

//     int l = 0 , m = 0 , h = arr.size()-1 ; 

//     while(m<=h){

//         if(arr[m]==0){
//            swap(arr[l],arr[m]);
//            l++; 
//            m++;
//         }

//         else if (arr[m]==1){
//            m++; 
//         }

//         else {
//             swap(arr[m],arr[h]); 
//             h--; 
//         }
//     }


//     for(int i = 0 ; i<arr.size(); i++){
//         cout<<arr[i]<<" "; 
//     }
// }



/*********************** MOVE ALL NEGATIVE NO. TO LEFT SIDE OF ARRAY **********************/

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<limits.h>
// using namespace std; 

// int main(){

//     vector<int>arr{-2,4,5,6,-3,-4,-5,8}; 
//     int l = 0 ; 
//     int h = arr.size()-1 ; 

//     while(l<=h){
//         if(arr[l]>0){
//             swap(arr[l],arr[h]); 
//             h--; 
//         }
//         else{
//             l++;

//         }
//     }

//     for(int i = 0 ; i <arr.size(); i++){
//         cout<<arr[i]<<" "; 
//     }
// }




/****************************** FINDING DUPLICATE NUMBER **********************************/


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std; 

// int main(){

//     vector<int>arr{1,2,3,4,2}; 

//     sort(arr.begin(), arr.end()); 

//     for(int i = 0 ; i<arr.size()-1; i++){
//         if(arr[i]==arr[i+1]){
//             cout<< arr[i]; 
//         }
//     }
    
// }

