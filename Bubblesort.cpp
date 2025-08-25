#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bubblesort(int arr[]  , int n){

    for( int i = 0 ;i<= n ; i++){
        bool isSwap = false;

        for( int j = 0 ; j< n - i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
        if(!isSwap){
            return 0;
        }
    }
}


void printArray( int arr[] , int n ){

    for(int i = 0; i<n ; i++){
        cout << arr[i] << "  ";
    }
    cout<< endl;
}
int main() {
    int n = 5 ;
    int arr[] = { 4 , 1  , 5 , 2, 3};

    bubblesort( arr , n );
    printArray( arr , n);

 



    return 0;
}