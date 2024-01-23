//print all permutations of a string

#include "iostream"

using namespace std;

void permutation(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
    }

    for(int i=0;i<s.length();i++){
        char ch = s[i];
        string ros = s.substr(0,i) + s.substr(i+1);

        permutation(ros, ans+ch);
    }
}

int main(){
    permutation("45bh4236hku4g624hrir4283ugh824og83oru#1412344315tg", "");
    return 0;
}