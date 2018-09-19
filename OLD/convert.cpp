#include <stdio.h>
#include <iostream>
using namespace std;

void convert(string& s){
    
    for(int i = 0; i<s.length(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    
    string s;
    cout << "Enter your string: " << endl;
    getline(cin, s);
    convert(s);
    cout << "Your string in upper case is: " << endl;
    cout << s << endl;
    return 0;
    
}