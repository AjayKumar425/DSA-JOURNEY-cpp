#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    char str[] = { 'a' , 'b' , 'c' , '\0'};


    cout<<str<<endl;


    char str1[26] ;

    cout<< "enter char aray : "<<endl;
    cin.getline(str1 , 100, '.');

    cout<< " your output is "<< endl;

    for( char ch : str1)
    cout<< ch <<" ";






    // string str5 = "ajay";
    // string str6 = "ajay";

    // cout<< (str5==str6) << endl;
    return 0;
}