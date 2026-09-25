#include <iostream>
using namespace std;

int main(){
    for (int i = 1 ; i<3 ; i=i+1){
        
        cout<<"outer loop" <<endl ;

        for( int j = 1 ; j<3 ;j = j+1){

            cout<<"inner loop" <<endl;

        }


    }
}