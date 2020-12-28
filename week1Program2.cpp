#include<bits/stdc++.h>
using namespace std;

int main(){
    string words;
    getline(cin, words);
    string empty;
    for(int i = words.length() - 1; i >= 0; i--){
        if(words[i] != ' ' ){
            empty += words[i];
            
        }
        else{
            reverse(empty.begin(), empty.end());
            cout << empty << " ";
            empty = "";
        }


        
        
    }
reverse(empty.begin(), empty.end());
            cout << empty << " ";    
    return 0;
}
