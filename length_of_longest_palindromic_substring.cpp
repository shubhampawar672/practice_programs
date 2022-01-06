#include <iostream>

using namespace std;
int longest_palindromic_substrin(string s)
{
  int len=s.length();
  int strlen=0;
        bool dp[len][len];

        for(int g=0;g<len;g++)
        {
            for(int i=0,j=g;j<len;i++,j++)
            {
                if(g==0)
                {
                    dp[i][j]=true;
                }
                else if(g==1)
                {
                    if(s[i]==s[j])
                    {
                         dp[i][j]=true;
                    }
                    else
                    {
                         dp[i][j]=false;
                    }
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1]==true)
                    {
                         dp[i][j]=true;

                    }
                    else
                    {
                         dp[i][j]=false;
                    }

                }
                if( dp[i][j])
                {
                    strlen=g+1;
                }
            }
        }
        return strlen;
}

int main()
{
    string str="abbad";
    cout<<longest_palindromic_substrin(str);
    return 0;
}
