#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ch{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(ch[s[i]]<ch[s[i+1]])
            ans=ans-ch[s[i]];
            else
            ans=ans+ch[s[i]];
        }
        return ans;
    }
};
int main()
{
    Solution p;
    string s;
    cin>>s;
    int x=p.romanToInt(s);
    cout<<x;
}