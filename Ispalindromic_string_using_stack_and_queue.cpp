#include <iostream>
#include<stack>
#include<queue>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string \n";
    cin>>s;
    int n=s.size();
    int i=0,j=0;
    while(j<n)
    {

        if(s[j]>='A' && s[j]<='Z')
        {
            s[j]=s[j]+32;
        }
        j++;
    }

    stack<char>st;
    queue<char>q;

    while(i<n)
    {
     st.push(s[i]);
     q.push(s[i]);
     i++;
    }
    char schar;
    char qchar;
    bool palindrom=true;
    while(palindrom && !q.empty())
    {
        schar=st.top();
        st.pop();
        qchar=q.front();
        q.pop();
        if(schar!=qchar)
            palindrom=false;
    }
    if(palindrom)
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}
