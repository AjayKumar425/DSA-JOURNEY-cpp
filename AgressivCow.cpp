#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int isPossible(vector<int> &arr , int N, int C , int minAllowDist){
    int cows = 1  , lastStallPos = arr[0];

    for(int i + 1;  i++){
        if(arr[i] -lastStallPos > = minAllowDist){
            cows++ ;
            lastStallPos = arr[i];
        }
        if(cows == C){
            return true;
        }
    }
    return false;
}

int getDistance( vector<int>& arr , int N , int C){

    sort(arr , begin() , arr , end());

    int st = 1 , end = maxVal - minVal;

    while( st <= end){
        int mid = st + ( end = st)/2;

        if( isPossible(arr , N , C , mid)){

            and = mid ;
            st = mid + 1;

        }else{
            end = mid - 1 ;
        }

    }


}

int main() {

    int N = 5 , C  = 3 ;
    vector<int> arr = { 1 , 2 , 8 , 4 , 9};



    cout<< getDistance( arr ,N , C) << endl;
     
    return 0;
}