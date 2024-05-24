#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool arepair(char opening,char closing ){
    if(opening=='('&&closing==')') return true;
    else if(opening=='['&&closing==']') return true;
    else if(opening=='{'&&closing=='}') return true;
    return false;
}
bool areparenthesesbalanced(string s){
    stack<char>S;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            S.push(s[i]);
        }
        else{
            if(S.empty()||!arepair(S.top(),s[i])){
                return false;
            }
            else{
                S.pop();
            }
        }
        
    }
    return S.empty()?true:false;
}
int main(){
    string s;
    cout<<"Enter an expression:";
    cin>>s;
    if(areparenthesesbalanced(s)){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }
}