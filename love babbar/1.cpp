// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"utkarsh";
// }

// #include<iostream>
// using namespace std;

// int main() {

//     int a = 54;
//     char al = 'b';
//     float f = 4.5;
//     double x = 887037;

//     cout<<a <<endl<<al<<endl<<f<<endl<<x<<endl;
//     cout<<sizeof(a) <<endl;
//     cout<<sizeof(al)<<endl;
//     cout<<sizeof(f)<<endl;
//     cout<<sizeof(x)<<endl;

//     int p = al ;
//     cout<<sizeof(p)<<endl;
//     char q = x ;
//     cout<<sizeof(q)<<endl;

//     int r = 97;
//     char s = r;
//     cout<< sizeof (s)<<endl;
//     cout<<s<<endl;

// }

// #include<iostream>
// using namespace std;
// int main () {

//     int n;
//     if (cin>>n){
//         cout<<"utkarsh";
//     }
// }

// #include<iostream>
// using namespace std;
// int main () {

//     int n;
//     if (cin>>n){
//         cout<<"utkarsh";
//     }
//     else{
//         cout<<"enter the data";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){

//     if(cout<<"utkarsh"){
//         cout<<"yadav";
//     }
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int i = 1;
//     for (;;)
//     {
//         cout << "value of i is :" << i << endl;

//         if (i < 5)
//         {
//             cout << "utkarsh" << endl;

//             i = i + 1;
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// pattern printing of rectangle consisting of 3 rows and 5 columns
// the outer loop works for the row and the inner loop works for the column
// #include<iostream>
// using namespace std;

// int main(){
//     for (int i=0 ; i<3; i=i+1){
//        for( int j=0 ; j<5 ; j = j+1){
//         cout<<" *" ;

//        }
//        cout<<endl ;
//     }
// }

/*HOLLOW RECTANGLE*/ ///////////

// #include<iostream>
// using namespace std;

// int main(){
//     for (int i =0 ; i < 3 ; i= i+1){
//         for( int j =0 ; j <5; j = j+1){
//             if( j == 0 || j == 4 || i == 0 || i == 2){
//                 cout<<" *";
//             }
//             else cout<<"  ";

//         }
//         cout<<endl;
//     }

// }

/*#HALF PYRAMID */

// #include<iostream>
// using namespace std;

// int n;
// int m ;

// int main(){

//     cout<<"tell me the rows and columns n and m: ";
//     cin>> n;
//     cout<<endl;
//     cin>> m;
//     cout<<endl;

//     for(int row = 0 ; row<n; row=row+1){

//         for(int col = 0 ; col<m ; col=col+1){
//             if(col <= row){
//                 cout<<" *";
//             }
//         }
//         cout<<endl;

//     }
// }

/*INVERTED HALF PYRAMID */

// #include<iostream>
// using namespace std;

// int n;
// int m;

// int main(){

//     cin>>n;
//     cin>>m;

//     for(int row= 0 ; row <n ; row= row+1){
//         for( int col= 0 ; col<n-row ; col = col+1){

//             cout<<" *";

//         }
//         cout<<endl;

//     }
//     return 0;

// }

// printing hollow rectangle , pyramid and inverted pyramid again //

// #include <iostream>
// using namespace std;

// int i;
// int j;

// int main()
// {
//     // howllow rectangle

//     for (i = 0; i < 3; i = i + 1)
//     {
//         if (i == 0 || i == 2)
//         {
//             for (j = 0; j < 5; j = j + 1)
//             {
//                 cout << " *";
//             }
//         }
//         else
//         {
//             cout << " *";
//             for (j = 1; j < 4; j = j + 1)
//             {
//                 cout << "  ";
//             }
//             cout << " *";
//         }
//         cout << endl;
//     }
//     return 0; 
// }


// #include<iostream>
// using namespace std; 

// int n ;
// int m ; 

// int main(){

//     cin>>n;
//     cin>>m;
//     for (int row=0 ; row<n; row= row=row+1){
//         if(row==0 || row==n-1){
//             for(int col=0; col<m ; col=col+1 ){
//                 cout<<" *";
//             }
//         }
//         else{
//             cout<<" *";
//             for( int col=0 ; col< n-2 ; col=col+1){
//                 cout<<"  ";
                
//             }
//             cout<<" *"; 
//         }
//         cout<<endl;

//     }
     
// }




//HALF PYRAMID 


// #include<iostream>
// using namespace std; 

// int main (){
//     int col;
//     int n;
//     cin>>n;
//     for (int row =0 ; row< n ; row = row +1){
//         for ( col=0 ; col<= row ; col = col + 1){
//            cout<<" *"; 
//         } 
//         cout<<endl; 
//     }
// }

// INVERTED HALF PYRAMID 

// #include<iostream>
// using namespace std ; 

// int main() {
//     for(int i = 0 ; i <5 ; i= i+1){
//         for(int col=0 ; col<5-i ; col=col+1){
//             cout<<" *";

//         }
//         cout<<endl; 
//     }
// }


//HOLLOW RECTANGLE PRACTICE 


// #include<iostream>
// using namespace std;

// int main(){
//     for(int i = 0 ; i<4 ; i++){
//         for(int col = 0 ; col<6 ; col++){
//             if(i==0 || i==3 ){
//                 cout<<" *";

//             }
//             else{
//                 cout<<" *";
//                 for(col=1 ; col<5 ; col++){
//                     cout<<"  ";
//                 }
//                 cout<<" *";
//             }
//         }
//         cout<<endl;

//     }
// }


// HOLLOW INVERTED HALF PYRAMID 

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i =0 ; i<10 ; i ++){
//         for(int j = 0 ; j<10-i ; j++){
//             if(j==0 || i==0 || j == 10-i-1){
//                 cout<<" *";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl; 
        
         
//     }
// }


