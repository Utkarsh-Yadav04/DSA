//class

// #include<iostream>
// using namespace std; 

// class student{
//     public:
//     string name;
//     int age; 

//     void display(){
//         cout<<name<<endl<<age<<endl; 
//     }

// };

// int main(){
//     student s1; 

//     s1.name="utkarsh"; 
//     s1.age=18; 
//     s1.display();

//     // cout<<s1.name<<endl<<s1.age<<endl;

//     return 0 ; 
// }

 


// member function 

// #include<iostream>
// using namespace std; 

// class calculator{
//     public:
//         void add(int a , int b ){
//             cout<<a+b; 
//         }
        
// };

// int main()
// {
//     calculator c1; 
//     c1.add(5,4);
// }


//scope resolution operator 

// #include<iostream>
// using namespace std; 

// class student{
//     public:
//         string name;

//         void greet();
// };

// void student::greet(){
//     cout<<"hello"<<endl;
// }

// int main(){
//     student s1; 
//     s1.name="utkarsh";

//     s1.greet();

//     cout<<s1.name<<endl;

//     return 0;
// }



//this one is wrong ;
// #include<iostream>
// using namespace std; 

// class student {
//     string name; 
//     int age ; 

// }; 

// void display(){
//     cout<<name<<endl<<age;
// }

// int main{
//     student s1; 
//     s1.name= "utkarsh";
//     s1.age = 18; 
//     s1.display(); 
// }


//member function called by another member function 


// #include <iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     int age; 

//     void sayhello(){
//         cout<<"hello"<<endl;
//     }
//     void intro(){
//         sayhello(); 
//         cout<<"i am student"<<endl; 
//         cout<<"my name is "<<name<<endl;
//     }
// };

// int main(){

//     student s1; 
//     s1.name = "utkarsh "; 
//     s1.age= 18 ; 

//     s1.intro(); 
// }



//     constructor 


// #include<iostream>
// using namespace std;

// class student{

//     public:
//     string name ; 
//     int age;
//     student(){
//         cout<<"construction called"; 
//     }
// };

// int main(){
//     student s1; 
//     // without even calling  s1.student it runs.
// }


// Default constructor 


// #include<iostream>
// using namespace std; 

// class student {
//     public:
//     student(){
//         cout<<"default constructor called";
//     }
// };

// int main(){
//     student s1; 
//     return 0;
// }



//Parametrized constructor 


// #include<iostream>
// using namespace std; 

// class student {
//     public:
//         string name;
//         int age; 

//         student(string n, int a){
//             name =n; 
//             age =a; 
//         }
// };

// int main(){
//     student s1("utkarsh", 18);
//     cout<<s1.name<<endl;
//     cout<<s1.age; 
// }


// copy constructor 

// #include<iostream>
// using namespace std; 

// class student {

//     public:
//         string name; 

//         student(string n){
//             name=n;;
//         }

// };

// int main(){
//     student s1("utkarsh"); 
//     student s2=s1;

//     cout<<s1.name<<endl;
//     cout<<s2.name<<endl;

// }



//  destructor 


// #include<iostream>
// using namespace std; 

// class student {
//     public:
//         student(){
//             cout<<"constructor called"<<endl; 

//         }

//         ~student(){
//             cout<<"destructor called";
//         }
// };

// int main(){
//     student s1; 

// }

// can we call destructor manually ?
// yes , but we should avoid it s1.~student();


//  access specifiers

// private
// Members declared as private can only be accessed inside the class.

//protected
//proteted means accessible inside class and child classes.


// #include<iostream>
// using namespace std; 

// class student {
//     public:
//         string name;

//     private:
//         int marks;
        
    
// };

// int main(){
//     student s1;

//     s1.name ="utkarsh";
//     //s1.marks =90 //error
// }


// #include<iostream>
// using namespace std; 

// class student {

//     private:

//         string name; 
//         int marks;

//     public:
    
//         void setMarks(int m){
//             marks=m;
//         }

//         void showMarks(){
//             cout<<marks;
//         }
// };

// int main(){
//     student s1;
//     s1.setMarks(95);
//     s1.showMarks();
// }



//Abstraction 

// #include<iostream>
// using namespace std;

// class vehicle{

//     private:
//         void checkEngine(){
//             cout<<"engine started"<<endl;
//         }

//     public:
//         void startCar(){
//             checkEngine();
//             cout<<"car started";
//         }

// };

// int main(){
//     vehicle v1;
//     v1.startCar();
// }


//         Inheritance 


// #include<iostream>
// using namespace std;

// class animal{
//     public:
//         void eat(){
//             cout<<"eating"<<endl;
//         }
// };

// class dog:public animal{
//     public:
//         void bark(){
//             cout<<"Barking";
//         }
// };

// int main(){
//     dog d1;
//     d1.eat();
//     d1.bark();
// }



// #include<iostream>
// using namespace std;

// class animal{

//     protected:
//         int age = 5; 

// };

// class dog : public animal {
//     public:
//         void showAge(){
//             cout<<age;
//         }
// };

// int main(){
//     dog d1;
//     d1.showAge();
// }


// multiple inheritance 

// #include<iostream>
// using namespace std;

// class teacher {

//     public:
//         void teach(){
//             cout<<"teaching"<<endl;
//         }
// };

// class sportsman{
//     public:
//         void play(){
//             cout<<"playing"<<endl;
//         }
// };

// class student : public teacher, public sportsman {
 
// };

// int main (){
//     student s1; 
//     s1.teach();
//     s1.play();
// }


// Hierarchical inheritance 
// --> combination of multiple inehritance 


//hybrid inheritance --> combination of both multilevel and hierarchical

// Polymorphism 

// #include<iostream>
// using namespace std;

// class math{
//     public:
//         int add(int a , int b){
//             return a+b; 
//         }

//         int add(int a , int b , int c){
//             return a+b+c;
//         }
// };

// int main(){
//     math m1; 
//     cout<<m1.add(8,3)<<endl;
//     cout<<m1.add(2,3,0)<<endl;
    
// }


//function overloading

// #include<iostream>
// using namespace std;

// class animal{

//     public:
//         void sound(){
//             cout<<"animal sound "<<endl;

//         }

// };

// class dog : public animal {
//     public:
//         void sound(){
//             cout<<"dog bark";
//         }
// };

// int main(){
//     dog d1;
//     d1.sound();
// }


// Constructor overloading

// Constructors can also be overloaded.

// class Student {
// public:
//     Student() {
//         cout << "Default";
//     }

//     Student(string name) {
//         cout << name;
//     }
// };




// Can member functions be overloaded outside class?
// Yes.
// Example:

// #include <iostream>
// using namespace std;

// class Math {
// public:
//     int add(int, int);
//     int add(int, int, int);
// };

// int Math::add(int a, int b) {
//     return a + b;
// }

// int Math::add(int a, int b, int c) {
//     return a + b + c;
// }

// This connects to your earlier question.
// So yes, overloaded member functions can also be defined outside class.


// operator overloading 

// #include<iostream>
// using namespace std;

// class box{
//     public:
//         int value;

//         box operator + (box obj){
//             box temp;

//             temp.value=value+obj.value;
//             return temp;
//         }
// };

// int main(){
//     box b1, b2, b3;

//     b1.value = 10;
//     b2.value =3;
//     b3 = b1+b2;

//     cout<<b3.value;
// }


// #include<iostream>
// using namespace std;

// class box{
//     public:
//         int value;

//         box operator - (box obj){
//             box temp; 

//             temp.value=value-obj.value;

//             return temp;
//         }
// };

// int main(){
//  box b1,b2,b3;
//  b1.value = 10;
//  b2.value=8;
//  b3=b1-b2;
//  cout<<b3.value;

// }

// operator overloading does not create new operator

//////////////////// function overriding 
// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal makes sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog barks";
//     }
// };

// int main() {
//     Dog d1;
//     d1.sound();
// }

// Even if child overrides, parent version still exists.

// Use scope resolution operator ::

// Example:

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void sound() {
//         cout << "Animal sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() {
//         cout << "Dog bark" << endl;
//     }
// };

// int main() {
//     Dog d1;

//     d1.sound();          // child version
//     d1.Animal::sound();  // parent version
// }

