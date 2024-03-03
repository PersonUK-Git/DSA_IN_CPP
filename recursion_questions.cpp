/*
PROGRAMM TO REVERSE A STRING USING RECURSION
#include <iostream>

using namespace std;

void reverse(string s)
{
    if(s.length()==0){ return; }

    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    string s = "Prateek";
    reverse(s);
}

*/

// Replace pi with 3.14 in string

/*
#include <iostream>

using namespace std;

void replacePI(string s)
{
    if(s.length()==0){ return; }

    if(s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePI(s.substr(2));

    }
    else{
        cout << s[0];
        replacePI(s.substr(1));
    }
}
int main()
{
    replacePI("pidsfrgsfpiippifsawe");
}

*/


/*
// TOWER OF HANOI

#include <iostream>

using namespace std;

void towerOfHanoi(int n, char src ,char des, char help)
{   
    if(n==0){ return; }

    towerOfHanoi(n-1, src, help, des);
    cout << "Move from " << src <<" to "<<des<<endl;
    towerOfHanoi(n-1, help, des, src);
}

int main()
{
    towerOfHanoi(3, 'A', 'B', 'C');
}

*/

/*
//REMOVE DUPLICATE CHARACTERS FROM A STRING

#include <iostream>

using namespace std;

string removeDupli(string s)
{
    if(s.length()==0){ return ""; }

    char a = s[0];
    string ans = removeDupli(s.substr(1));

    if(a==ans[0]){
        return ans;
    }

    return a+ans;
}

int main()
{
    cout<<removeDupli("rraannddoommtteesstt");
}

*/