#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    

    string ch = "ajay";

    int st = 0 , end = ch.size()-1;
    while( st< end){
        swap( ch[st++] , ch[end--]);
    }

    cout<< ch << endl;

   

    // string str = "hello brother";

    // reverse(str.begin() , str.end());

    // cout<< str <<" ";


    return 0;
}