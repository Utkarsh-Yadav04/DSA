// #include<iostream>
// using namespace std; 

// int main(){


//     //************************************BITWISE OPERATOR********************************************

//     bool b = true; 
//     bool a= false ;

//     cout<<(~a)<<endl; //output -1   //it works on bit digits 
//     cout<<(a & b)<<endl;  // output 0
//     cout<<(a|b)<<endl;   // output 1

//     cout<<(!a)<<endl; // it works on true false 

//     int c = 5 ;       // 0000 0101   (which is 5)
//     int d =5 ; 
//     int e =6 ; 

//     cout<<(~c)<<endl; // 1111 1010   (which is -6 in decimal due to 2's complement)

    
//     cout<<(c^d)<<endl; //same value pr ans 0 aata hai  and diff value pr 1 in xor operator 

//     cout<<(e&c)<<endl; // output 4

//     cout<<(e|c)<<endl; // output 7





// }


// #include <iostream>
// using namespace std; 

// int main(){

//     //**********************************LEFT SHIFT *************************************//

//     int a =5;
//     a=a<<1 ; 
//     cout<<a<<endl; // output 10 

//     a=a<<2;  // now using previous output as input 
//     cout<<a<<endl;   // output 40 

//     int b=127; 
//     b=b<<1; 
//     cout<<b<<endl; 

//     int8_t c=127; 
//     c=c<<1; 
//     cout<<c<<endl; 


// //     xample with 8-bit signed thinking:

// // 127 = 0111 1111


// // Left shift:

// // 1111 1110   =  -2   (not 254, because of sign bit)


// // This is NOT multiplication, this is overflow.

// // 127 × 2 = 254
// // But the 8-bit system cannot store 254, so the bits overflow and become -2.


// }



// #include<iostream>
// using namespace std; 

// int main(){

//     //************************* RIGHT SHIFT ***********************


//     int a = 8;
//     a=a>>1;
//     cout<<a<<endl;  //output 4

//     int b=8 ; 
//     b=b>>2; 
//     cout<<b<<endl; //output 2 


//     int c=-4;
//     c=c>>1;
//     cout<<c<<endl; //output-2

//     int d=-19; 
//     d=d>>1; 
//     cout<<d<<endl; 


// //     First write +19:
// // 0001 0011

// // Invert bits:
// // 1110 1100

// // Add 1:
// // 1110 1101   ← this is -19


// // So:

// // ⭐ −19 = 1110 1101 (8-bit)
// // ✅ Step 2: Right shift (signed)

// // C++ uses arithmetic right shift for signed numbers.

// // Meaning:

// // ➜ Copy the sign bit (1) on the left
// // ➜ Shift all bits to the right

// // So:

// // 1110 1101   (-19)
// // >> 1
// // -----------
// // 1111 0110

// // ⭐ Step 3: Convert the result back to decimal


// }


// #include<iostream>
// using namespace std; 

// int main(){

//     //***************************** BREAK AND CONTINUE ********************************

//     // for(int i=0 ; i<4 ; i++){
//     //     cout<<"utkarsh ";

//     //     break;           // break code(loop) ko terminate kr deta hai and then scope /brackets ke baahr wale
//     //                      //code ko execute krta hai 
//     // } 
//     // cout<<"yadav";



//     // for(int i =0 ; i<4 ; i++){

//     //     continue;         // continue is like chalo chalo it doesn't let to print 
//     //     cout<<"utkarsh";
//     // }
//     // cout<<"yadav";


//     for(int i=0 ; i<4; i++){
//         if (i==2){
//             continue;
//         }
//         else{
//             cout<<i<<endl;
//         }
//     }
//     cout<<"done";
    
// }



// #include<iostream>
// using namespace std; 

// int main(){

//     //****************************************** VARIABLE SCOPING ***************************************

//     // int a =5 ; //declaration 
//     // a=6; //updation 
//     // a=7; 

//     // //int a =8 ;    // we can update it multiple times but we can't redeclare it again .

//     // cout<<a;


//     // int a=10 ; 
//     // a=17 ; 

//     // if(true){
//     //     int a =19 ; 
//     //     cout<<a<<endl; // we can redeclare it in local variable but it is alive only in that scope after that it is dead 
//     // }

//     // cout <<a; 



// }








// #include<iostream>
// using namespace std ; 

// int utkarsh = 4;   //***********************************************global variable 

// int main( ){

//     cout<<utkarsh<<endl; // output 4

//     int utkarsh =7 ; 

//     cout<<utkarsh<<endl; // output 7

//     if ( true){
//         int utkarsh = 19; 

//         cout<<utkarsh<<endl; //output 19
//     }
//     cout<<utkarsh<<endl;  //output 7

//     //creating global variable is bad paractice ;


// }




//****************************** SWITCH CASE ******************************************



// #include<iostream>
// using namespace std; 

// int main(){

//     int n ; 
//     cout <<"tell me the n (1 to 4 )"; 
//     cin>>n ; 

//     switch (n)
//     {
//     case 1:
//         cout<<"you choose 1; ";
//         break;
    
//     case 2:
//         cout<<"you choose 2:";
//         break; 

//     case 3:
//         cout<<"you choose 3:";
//         break; 

//     case 4:
//         cout<<"you choose 4:";
//         break; 
    
//     default:cout<<"you choose something else;";

//         break;
//     }
// }







// #include<iostream>
// using namespace std; 

// int main(){

//     char alp;
//     cout<<"choose the alphabet from a to e ";
//     cin>>alp; 

//     switch(alp)
//     {
    
//     case 'a':
//         cout<<"you choose a";
//         break;

//     case 'b':
//         cout<<"you choose b";
//         break;

//     case 'c':
//         cout<<"you choose c";
//         break; 

//     case 'd':
//         cout<<"you choose d";
//         break; 

//     case 'e':
//         cout<<"you choose e";
//         break;

//     default: cout<<"you choose something else :";
//         break; 

//     }
// }




// ✔ 2. What IS allowed inside case?
// ✅ Only these types:

// int

// char

// enum

// bool

// long (in some compilers)

// ❌ NOT allowed:

// float, double

// string

// ANY runtime expression

// ANY condition

 