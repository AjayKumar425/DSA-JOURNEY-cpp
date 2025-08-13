//pass by reference 

#include<iostream>
#include<vector>

using namespace std;

void changeA( int &b){ //pass by value

    b= 20;
}
int main(){

    int a = 10 ;

    changeA(a);

    cout << "inside main fnx :"<< a <<endl;//20

    return 0;
}