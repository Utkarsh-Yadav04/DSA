// SOLID RECTANGLE 


// #include<iostream>
// using namespace std;
// int n ; 
// int m ; 


// int main(){

//     cout<<"tell me the number of row ;";

//     cin>>n;

//     cout<<"tell me the number of coloumn ;";
//     cin>>m;
    
//     for(int row=0; row<n; row++){
//         for(int col=0 ; col<m; col++){
//             cout<<" *";

//         }
//         cout<<endl; 
//     }
// }




//HOLLOW RECTANGLE 


// #include<iostream>
// using namespace std;

// int n; 
// int  m; 

// int main(){

//     cout<<"tell me the number of row; ";
//     cin>>n; 
//     cout<<"tell me the number of coloumn;";
//     cin>>m; 

//     for(int row = 0 ; row<n ; row++){
//         for (int col = 0 ; col<m; col++){
//             if (row==0 || row==n-1 || col==0 || col==m-1){
//                 cout<<" *"; 
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl; 
//     }

// }


//HOLLOW RECTANGLE SECOND WAY 

// #include<iostream>
// using namespace std; 

// int n ; 
// int m ; 

// int main(){

//     cout<<"tell me the number of row; ";
//    cin>>n; 
//     cout<<"tell me the number of coloumn;";
//    cin>>m; 
//     for ( int row = 0 ; row<n ; row++){
//         for ( int col = 0; col<m ; col++ ){
//             if (row==0 || row== n-1){
//                 cout<<" *";
//             }
//             else{
//                 cout<<" *"; 
//                 for(col=1 ;col<m-1; col++ ){
//                     cout<<"  "; 
//                 }
//                 cout<<" *"; 
//             }
//         }
//         cout<<endl; 
//     }
// }


//SOLID HALF PYRAMID 


// #include<iostream>
// using namespace std;

// int n ; 
//  

// int main (){

//   cout<<"tell me the number of row; ";
//   cin>>n; 
  

//   for( int row =0 ; row<n; row++){
//     for ( int col=0 ; col<=row ; col++){
//         cout<<" *"; 
//     }
//     cout<<endl; 
//   }

// }


// SOLID INVERTED PYRAMID 


// #include <iostream>
// using namespace std; 


// int main( ){
//     int n ; 
//     cout<<"tell me the number of row ; ";
//     cin>>n ; 


//     for (int row =0 ; row<n ; row++){
//         for(int col= 0 ; col<n-row ; col++){
//             cout<<" *";
//         }
//         cout<<endl; 
//     }
// }


//HOLLOW PYRAMID 

// #include <iostream>
// using namespace std; 

// int main(){


// int n ;
// cout<<"tell me the number of row ; "; 

// cin>>n;

// for (int row = 0; row <n ; row++){
//     for (int col = 0 ; col<=row ; col++){
//         if(col == 0 || row == n-1 || row==col  ){
//             cout<<" *";
//         }
//         else{
//             cout<<"  ";
            
//         }

//     }
//     cout<<endl; 
// }


// }


//INIVERTED HOLLOW PYRAMID 

// #include <iostream>
// using namespace std; 


// int main(){
//     int n ; 
//     cout<<"tell me the number of row;";
//     cin>>n ;

//     for (int row = 0 ; row<n ; row++){
//         for(int col = 0 ; col<n-row; col++){
//             if( row==0 || col== 0 || col==n-row-1){
//                 cout<<" *";

//             }
//             else {
//                 cout <<"  "; 
//             }
//         }
//         cout<<endl; 
//     }

// }



// FULL PYRAMID 

// #include<iostream>
// using namespace std; 



// int main( ){


//     int n; 
//     cout <<"tell me the number of row:"; 
//     cin>>n ; 


//     for ( int i=0 ; i<n ; i++ ){

//         for ( int col =0; col<n-i; col++){
//             cout<<" "; 
//         }

//         for( int col= 0 ; col<=i ; col++ ){
//             cout<<" *"; 
//         }
//         cout<<endl; 

//     }
// }


// INVERTED FULL PYRAMID 

// #include<iostream>
// using namespace std; 

// int main(){

//     int n; 
//     cout<<" tell me the number of row: ";
//     cin>>n ; 

//     for(int i = 0 ; i<n ; i++){
//         for( int col = 0 ; col<i ; col++){
//             cout<<" "; 

//         }

//         for( int col = 0 ; col <n - i ; col++){
//             cout<<" *"; 
//         }
//         cout<<endl; 
//     }
// }


// DIAMOND 

// #include<iostream> 
// using namespace std; 

// int main( ){

//     int n; 
//     cout<<"tell me the number of row; ";
//     cin>>n; 


//     for ( int i=0 ; i<n ; i++ ){

//         for ( int col =0; col<n-i; col++){
//             cout<<" "; 
//         }

//         for( int col= 0 ; col<i+1 ; col++ ){
//             cout<<"* "; 
//         }
//         cout<<endl; 

//     }

//         for(int i = 0 ; i<n ; i++){
//         for( int col = 0 ; col<i ; col++){
//             cout<<" "; 

//         }

//         for( int col = 0 ; col <n - i ; col++){
//             cout<<" *"; 
//         }
//         cout<<endl; 
//     }



// }


//trying to print upper half hollow diamond 

// #include<iostream>
// using namespace std; 

// int main(){

//     int n ;
//     cout<<" tell me the number of row;";
//     cin>>n; 


//     for (int row=0 ; row <n ; row++){
//         for( int col=0; col<n- row -1 ; col++){
//             cout<<" "; 
//         }
//         for(int col=0 ; col<2*row+1 ; col++){
//             if( col==0 ){
//                 cout<<" *";

//             }
//             else if (col==2*row)
//             {
//                 cout<<"* ";
//             }

//             else{cout<<" ";}
            
//         }

//         cout<<endl; 
//     }


// }


//HOLLOW DIAMOND 


// #include<iostream>
// using namespace std; 

// int main (){

//     int n ; 
//     cout<<"tell me n ";
//     cin>>n; 

//     for (int row = 0 ; row<n ; row++){
//         for( int col=0 ; col<n-row-1 ; col++){
//             cout<<" ";
//         }

//         for( int col=0 ; col<2*row+1; col++){

//             if(col==0 || col==2*row){
//                 cout<<"*";
//             }

//             else{cout<<" ";}

//         }
//         cout<<endl; 
//     }


//     for(int row=0 ; row<n ; row++){
//         for( int col=0; col<row ; col++){
//             cout<<" ";
//         }

//         for(int col=0 ; col<2*n-2*row-1 ;col++ ){

//             if(col==0 || col==2*n-2*row-2 ){
//                 cout<<"*";
//             }

//             else{
//                 cout<<" ";
//             }


//         }
//         cout<<endl; 



//     }
// }


//FILPPED HOLLOW DIAMOND 

// #include<iostream>
// using namespace std; 

// int main(){
//     int n ; 
//     cout<<"tell me the n";
//     cin>>n; 

//     for(int row=0 ; row<n ; row++){
//         for(int col=0 ; col<n-row ; col++){
//             cout<<"*";
//         }

//         for(int col=0 ; col<2*row+1; col++){
//             cout<<" ";
//         }

//         for( int col=0 ; col<n-row ; col++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }


//     for(int row=0 ; row<n ; row++){
        
//         for(int col=0 ; col<=row ; col++){
//             cout<<"*";
//         }

//         for(int col=0 ; col<2*n-2*row-1 ; col++){
//             cout<<" ";
//         }

//         for(int col= 0 ; col<=row ; col++){
//             cout<<"*";
//         }

//         cout<<endl; 
//     }

// }


//TRYING TO PRINT BUTTERFLY 

// #include<iostream>
// using namespace std; 

// int main (){

//     int n ; 
//     cout<<"tell me the n ;";
//     cin>>n; 

//     for(int row=0 ; row<n ; row++){

//         for(int col=0 ; col<=row ; col++){
//             cout<<"*";

//         }

//         for(int col=0 ; col<2*n-2*row-1 ; col++){
//             cout<<" ";
//         }

//         for(int col=0 ; col<=row ; col++){
//             cout<<"*";
//         }

//         cout<<endl; 
//     }


//     for(int row=0; row<n ; row++){
//         for( int col =0 ; col<n-row; col++){
//             cout<<"*";
//         }

//         for(int col=0 ; col<2*row+1; col++){
//             cout<<" "; 
//         }

//         for(int col=0 ; col<n-row ; col++){
//             cout<<"*";
//         }

//         cout<<endl;
//     }
// }
  



//TRYING TO PRINT THIS PATTERN 
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

// #include<iostream>
// using namespace std; 

// int main (){

//     int n ; 
//     cout<<"tell me the n ; ";
//     cin>>n;

//     for(int row=0 ; row<n ; row++){

//         for(int col=0 ; col<=row ; col++){
//             cout<<row+1; 
//             if(col != row){
//                 cout<<"*";
//             }
//         }
//         cout<<endl; 

//     }

//     for(int row=0 ; row<n ; row++){
//         for( int col=0 ; col<n-row ; col++){
//             cout<<n-row; 

//             if(col != n-row-1){
//                 cout<<"*";
//             }
//         }
//         cout<<endl; 
//     }
// }


// TRYING TO PRINT THIS PATTERN 
// 1
// 12
// 123
// 1234


// #include <iostream>
// using namespace std ;



// int main(){

//     int n ; 
//     cout<<"tell me the number :"; 
//     cin>>n ; 

//     for(int i =1 ; i<n ;i++){
//         for(int j =1 ; j<=i ; j++){
//             cout<<j; 
//         }
//         cout<<endl; 
//     }
// }

//***************LET'S PRINT SOLID SQUARE USING ALPHABET********************/

// #include<iostream>
// using namespace std; 

// int main (){
//     int n; 
//     cout <<"tell me the n ; "; 
//     cin>>n ; 

//     char ch ='A';
//     for (int i =0 ; i<n ; i++){
//         for (int col =0 ; col<n ; col++){
//             cout<<ch; 
//             ch++; 
//         }
//         cout<<endl; 

//     }
// }

//******************* NUMERIC PALINDROME *******************************/

// #include <iostream>
// using namespace std; 

// int main(){

//     int n ;
//     cout<<"tell me the n :"; 
//     cin>>n ;

//     for (int i =0 ; i<n ; i++){
//         for(int col =0 ; col<i+1; col++){
//             cout<<col+1; 
//         }

//         for(int col=i; col>=1 ; col-- ){
//             cout<<col; 
//         }
//         cout<<endl; 
//     }
// }



//*********** ALPHABETICAL PALINDROME **********************8 */

// #include <iostream>
// using namespace std; 

// int main(){

//     int n ;
//     cout<<"tell me the n :"; 
//     cin>>n ;

//     for (int i =0 ; i<n ; i++){
//         char ch = 'A';

//         for(int col =0 ; col<i+1; col++){
//             cout<<ch; 
//             ch++;
//         }
       
//         for(int col=i; col>=1 ; col-- ){
//             char ans=  col+'A'-1 ; 
//             cout<<ans; 
           
//         }
//         cout<<endl; 
//     }
// }

