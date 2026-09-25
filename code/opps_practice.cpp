// #include<iostream>
// using namespace std; 

// class student{
//     public:
//     string name; 
//     int age; 

//     void show (){
//         cout<<name<<endl<<age<<endl;
//     }
// };

// int main(){
//     student s1; 
//     student s2; 
    
//     s1.name="utkarsh";
//     s1.age =18; 

//     s2.name ="don't know";
//     s1.age=19; 

//     cout<<s1.name<<s1.age<<endl;

//     s2.show();

//     return 0; 



// }


// #include<iostream>
// using namespace std; 

// class rectangle{
//     private:
//         int length;
//         int width;

    
//    rectangle (){
//     void set_dim(int l,int w){
//         int lenght = l;
//         int width=w;

//     }
//    }

//    void calculate_area(){
//     cout<<
//    }
// }

// #include <iostream>
// using namespace std; 

// class BankAccount {
//     private:
//         int balance;



//     public:
//     void deposit(int amount){
//         balance = amount; // variable shadowing when done int balance it creates local variable
//     }

//     void showBalance(){
//         cout<<balance;
//     }
// };

// int main(){
//     BankAccount b1;
//     b1.deposit(69);
//     b1.showBalance();
// }


// #include<iostream>
// using namespace std;

// class Car{

//     public:
//     int color;
//     int speed;
    
//     Car(){
//         cout<<"car created"<<endl;

//     }

// };

// int main(){
//     Car c1;
//     Car c2;
//     Car c3;
// }

// #include<iostream>
// using namespace std;

// class Book{
//     private:
//     string title;
//     int price;


//   public:
//    Book(string t , int p){
//     price = p; 
//     title =t;
//    }

//    void display(){
//     cout<<title<<endl<<price<<endl;
//    }
// };

// int main(){
//     Book b1("utx",239);
//     Book b2("purv",429);
//     b1.display();
// }

// #include<iostream>
// using namespace std;

// class Rectangle{

//     public:
//         int lenght ;
//         int width;


//     Rectangle(){
//         lenght=1;
//         width=1;
//     }

//     Rectangle(int l, int w){
//         lenght = l;
//         width = w; 


//     }

//     void display(){
//         cout<<lenght<<endl<<width<<endl;
//     }

// };

// int main(){
//     Rectangle r1;
//     Rectangle r2(10,20);

//     r1.display();
//     r2.display();
// }

// #include<iostream>
// using namespace std; 

// class student {

//     public:
//      string name;
//      int age;

  
//   void greet();
// };

// void student::greet(){

//     cout<<name<<endl<<age<<endl;

//     cout<<"hello"<<endl;
// }

// int main(){

//     student s1;
//     s1.name = "utkarsh";
//     s1.age = 18; 

//     s1.greet();



// }

// #include<iostream>
// using namespace std;

// class ATM{
//     private:
//      int pin;

//     public:
//     void set_pin(int p){
//         pin =p;
//     }

//     void show_pin(){
//         cout<<pin<<endl;
//     }
// };

// int main(){
//     ATM a1;
//     a1.set_pin(3333);
//     a1.show_pin();


// }

// #include<iostream>
// using namespace std;

// class Animal{

//     public:
//     void eat(){
//         cout<<"i am eating"<<endl;
//     }


// };

// class Dog:public Animal{
//     public:
//     void bark(){
//         cout<<"bow bow"<<endl;
//     }
// };

// int main(){
//     Dog d;

//     d.eat();
//     d.bark();
// }

// #include<iostream>
// using namespace std;

// class Person{
//     public:
//      void personInfo(){
//         cout<<"person"<<endl;
//      }
// };

// class Student:public Person {
//     public:
//     void studentInfo(){
//         cout<<"student"<<endl;
//     }
// };

// class CollegeStudent:public Student {
//     public:
//      void collegeStudentInfo(){
//         cout<<"college student"<<endl;
//      }
// };

// int main(){
//     CollegeStudent c;

//     c.personInfo();
//     c.studentInfo();
//     c.collegeStudentInfo();
// }

