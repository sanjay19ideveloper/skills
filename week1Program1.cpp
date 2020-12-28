#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    cout << name[0] << ".";
    int i;
    bool flag = 0;
    for(i = 1; i < name.length(); i++){
        if(name[i] == ' ' && !flag){
            cout << name[++i] << ". ";
            flag = 1;
        }
        if(flag && name[i] == ' '){
            i++;
            break;
        }
    }
   
    for(; i < name.length(); i++){
        cout << name[i];
    }
    
    return 0;
}
