#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isFreqSame( int Freq1[] , int Freq2[]){
    for(int i = 0 ; i<26; i++){
        if(Freq1[i] != Freq2[i])
        return false;
    }
    return true;
}


bool checkInclusion( string s1 , string s2){

    int freq[26] = { 0};
    for( int i = 0 ; i<s1.length() ; i++){
        int idx = s1[i] - 'a';
        freq[idx]++;
    }
    int windSize = s1.length(); 

    for( int i = 0 ; i< s2.length() ; i++){
        int windIdx = 0 , idx = i ;
        int windFreq[26] = {0};

        while (windIdx < windSize && idx < s2.length()){
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;

        }
        if(isFreqSame(freq , windFreq)){
            return true ;
        }
    }
    return false; 
}

int main() {

    string s1 = "ab";
    string s2 = "wewaasdffbaerw";
    
    if( checkInclusion(s1 ,s2)){
        cout<< "yes permutation exist"<<endl;
        
    }else{
        cout<< " no , permutation not found"<<endl;
    }
    return 0;
}