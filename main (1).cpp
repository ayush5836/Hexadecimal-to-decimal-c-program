/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
long long hexadecimalToDwcimal(string n){
    int ans=0,x=1,s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9'){
            ans +=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F'){
            ans +=x*((n[i]-'A')+10);
        }
        x=x*16;
    }
    return ans;
}

int main()
{
    string n;
    cin>>n;
    cout<<hexadecimalToDwcimal(n)<<endl;

    return 0;
}