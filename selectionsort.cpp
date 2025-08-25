#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void SelectionSort( int arr[] , int n){
    for( int i = 0 ; i < n - 1 ;i ++){
        int smallestIdx = i ;
        for( int j = i + 1 ; j < n ; j ++){
            if(arr[j] < arr[smallestIdx]){
                smallestIdx = j;
            }
        }

        swap( arr[i] , arr[smallestIdx]);
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
    int arr[] = { 5 , 2 ,6 , 9, 7 };

    SelectionSort( arr , n );
    printArray( arr , n );

    return 0;


}