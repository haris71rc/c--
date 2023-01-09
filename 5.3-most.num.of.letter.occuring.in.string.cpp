#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i]-'a']++;             // like str[0]='a' to freq[0]++ ho jayega and agr str[1]='c' to freq[2]++ ho jayega
                                     
    }
    int maxfreq=0;
    char ans= 'a';

    for (int i = 0; i < 26; i++)
    {
        if (freq[i]> maxfreq)
        {
            maxfreq=freq[i];
            ans= i +'a';
        }
        
    }
    cout<<maxfreq<<endl<<ans;
    
    
    return 0;
}