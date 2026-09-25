// #include<iostream>
// using namespace std;


// int main(){
//     for (int i = 0; i<4 ; i = i + 1){

//         for( int j = 0 ; j<4 ; j= j+1){

            
//         }


//     }
// }

/*to print 

*
**
***
****

*/


// int main(){

//     for (int i=0 ; i<4 ; i = i +1 ){

//         for (int j = 0 ; j < i+1 ; j = j + 1){

//             cout<<"* ";
//         }
//         cout << endl; 
//     }
// }

/* to print hollow rectangle */

// int main(){

//  for (int i=0 ; i < 5 ; i = i+ 1 ){

//     for (int j = 0 ; j < 5 ; j = j +1 ){

//         if ( i == 0 || i == 4 || j == 0 || j == 4){
//             cout<<"* ";
//         }
//         else { cout<<"  ";} 
//     }
//     cout<<endl; 
// }

// }

/*to print 
12
34
*/


// int main (){

//     int a = 1; 

//     for (int i = 0 ; i < 2 ; i = i + 1){

//         for (int j = 0 ; j <2 ; j = j + 1){

//             cout<<a;
//             a = a + 1; 


//         }
//         cout<<endl;
//     }
// }


/*

to print 
abcde
abcde
abcde
abcde
abcde
*/


// int main(){

//     for (int i = 0 ; i <5; i = i+1){
//         char a = 'a';
        
//         for(int j = 0 ; j <5 ; j = j+1 ){
//             cout<<a;
//             a = a+1; 
//         }
//         cout<<endl;
//     }

// }


/*to print 
abcde
fghij
klmno
pqrst
uvwxy

*/
// int main (){

//     char c = 'a';

//     for (int i = 0 ; i < 5 ; i  = i + 1 ){

//         for ( int j = 0 ; j < 5 ; j = j + 1 ){

//             cout << c;
//             c = c + 1;
//         }
//         cout<<endl;
//     }
// }

/*to print in this form 
12345
12345
12345
12345
12345

*/
// int main(){

//     for (int i = 0 ; i < 5 ; i=i+1){

//         for( int j = 0 ; j< 5 ; j = j+1){

//             cout<<j+1;
//         }
//         cout<<endl;
//     }
// }


// int main(){

//     for (int row = 0 ; row <5 ; row = row + 1){
        
//         for(int col = 0 ; col <5 ; col = col + 1){

//             if ( row == 0 || row == 4 || col == 0 || col == 4){

//                 cout<<"* ";
//             }

//             else { 
                
//                     cout<<"   ";
//                 }


//         }cout<<endl; 
    
//     }  
// }


/*again error */

// int main () {

//     for ( int row = 0 ; row <4 ; row = row + 1)
//     {
//         for ( int col = 0 ; col < 8 ; col = col + 1)
//         {
//             if( row == 0 || row == 7 )
//             {
//                 cout<<"* ";

//             }

//             else {
//                 cout<<"*     *";
//             } 
//         } 
//     } 
//     cout<<endl;
// }


/* rectangle done */


// int main() {

//     for (int row = 0 ; row < 4 ; row = row + 1)
//     {
//         for (int col = 0 ; col < 8 ; col = col + 1){

//             cout<<"* " ;
//         }
//         cout<<endl; 
//     }
// }



/*square again done */

// int main (){

//     for (int row = 0 ; row< 5 ; row = row + 1)
//     {
//         for (int col = 0; col<5 ; col = col + 1) {

//             cout<<" * " ;
//         }
//         cout<<endl; 
//     }



// }




/*error while printing hollow rectangle , check it later */

// int main(){

//     for (int rows=0; rows<4 ; rows = rows + 1){

//         for( int col = 0 ; col<5 ; col= col +1){

//             if (rows ==0 || rows ==3){

//                 cout<<"* ";
//             }
//             else{ if (col == 0 || col == 3){
//                 cout<<"   " ;
//                 }
//             }   
            
//         }
          
//     }
// }



// rectangle 

// int main(){
//     for (int i=0 ; i<3 ; i= i + 1){
//         for (int j= 0 ; j<5 ; j = j+1){
            
//             cout<<"* " ;
//         }
//         cout<<endl;


//     }

// }


// square 


//     for( int i = 0 ; i < 4 ; i++){

//         for ( int j = 0 ; j <4 ; j++){ 
//             cout<<" * " ;
//         }
//     cout<<endl; 
//     }
// }