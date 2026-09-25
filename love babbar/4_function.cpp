// #include<iostream>
// using namespace std;

// void printName(){                       //funcion for printing name

//     int n ;                             //now u don't have to write code again and again u can just use function .
//     cout<<"enter the value of n ; ";

//     cin>>n ;

//     for(int i=0 ; i<n ; i++){
//         cout<<"utkarsh";
//         cout<<endl;
//     }

// }

// int main(){

//     printName();

// }

//******* FUNCTION FOR PRINTING COUNTING FROM 1 TO N ***********/

// #include<iostream>
// using namespace std;

// void count( int num ){
//     for(int i =1 ; i<=num ; i++){
//         cout<<i<<endl;
//     }
// }

// int main(){

//     int n ;
//     cout<<"tell me the last value till which you want to print ";
//     cin>>n ;

//     count(n);
// }

// just practice for printing factorial of a number

// #include<iostream>
// using namespace std;

// int main ( ){

//     int n ;
//     cout<<"tell me n ;";
//     cin>>n ;
//     int fact =1 ;

//     for(int i =1 ; i<=n ; i++){

//         fact=fact*i;

//     }
//     cout<<fact ;
// }

// FUNCTIOIN FOR PRINTING FACTORIAL OF A NUMBER

// #include<iostream>
// using namespace std;

// int factorialN(int n ){

//     int fact=1;
//     for(int i=1 ; i<=n ; i++){

//         fact=fact*i;

//     }
//     return fact;
// }

// int main(){

//     int n ;
//     cout<<"tell me the value of n ";
//     cin>>n ;

//     int factans = factorialN(n);

//     cout<<factans;

// }

//*************************************** program for calculating ncr 

// #include <iostream>
// using namespace std;

// int factoN(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {

//         fact = fact * i;
//     }
//     return fact;
// }

// int ncr(int n, int r)
// {
//     int factorialN = factoN(n);
//     int factorialR = factoN(r);
//     int factorialNMR = factoN(n - r);

//     return factorialN / (factorialR * factorialNMR);
// }

// int main()
// {
//     int n;
//     cout << "tell me n ;";
//     cin >> n;
//     int r;
//     cout << "tell me r ; ";
//     cin >> r;

//     int ncrans = ncr(n, r);

//     cout << ncrans;
// }


//*************************FUNCTION OF STUDENTS AND GRADE PROBLEM ******

// #include<iostream>
// using namespace std; 

// void gradeS (int marks){

//     if (marks>=90)
//     {
//         cout<<"A";
    
//     }

//     else if (marks>= 80){

//         cout<<"B";

//     }

//     else if (marks>= 70){

//         cout<<"c";
//     }
    
//     else {
//         cout<<"work hard"; 
//     }
    
// }

// int main ( ){

//    int marks ; 
//    cout<<"tell me the marks"; 
//    cin>>marks; 

//    gradeS(marks); 

  

// }

// **************************** SOLVING STUDENT GRADE PROBLEM USING SWITCH CASE *******8

// #include <iostream>
// using namespace std; 

// string gradeS( int marks){

//     switch (marks/10)
//     {
//     case 9 : return "A"; break; 
//     case 8 : return "B"; break; 
//     case 7 : return "C"; break; 
//     default: return "work hard"; break ; 
//     }
    
// }

// int main (){
//     int n ; 
//     cout<<"tell me the marks ";
//     cin>>n; 

//     string ans = gradeS(n);

//     cout<<ans; 
    


// }


//**************************to print sum of n even no. */

// #include<iostream>
// using namespace std; 


// int main(){

//     int n ; 
//     cout<<"tell me n :";
//     cin>>n; 

//     int num=0 ; 

//     for (int i =0 ; i<=n ; i++){
//         if(i%2==0){
//             num=num+i; 

//         }

        
//     }
//     cout<<num; 
// }

//**************** WRITE A FUNCTION FOR PRINTING SUM OF N EVEN NO.************* */
// #include<iostream>
// using namespace std; 


// int sumE(int n ){

//     int num=0;

//     for(int i =0 ; i<=n ; i++){
//         if(i%2==0){
//             num=num+i; 

//         }
//     }
//     return num; 
// }

// int main(){

//     int numb;
//     cout<<"tell me the numb";
//     cin>>numb; 

//     int ans = sumE(numb);
//     cout<<ans; 

    
// }

//****************************WRITE A FUNCTION FOR PRINTING AREA OF A CIRCLE***** */
// #include <iostream>
// using namespace std; 

// int areaC(int r ){
    
//     int area=3.14*r*r;
//     return area; 


// }

// int main(){

//     int r ; 
//     cout<<"tell me the radius ";
//     cin>>r; 

//     int ans = areaC(r);
//     cout<<ans; 

// }

//*********************PRINT ALL PRIME NO. FROM 1 TO N ***************/
#include <iostream>
using namespace std; 

int primeN(int num){
    for(int i =0 ; i<=num ; i++){

        

    }
}

int main(){

}