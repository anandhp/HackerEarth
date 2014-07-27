#include <iostream>
using namespace std;

#define vowel(c) (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')

int main()
{
    int tc = 0;
    cin>>tc;
    
    while(tc-- > 0) {
        string url;
        cin>>url;
        
        int start = url.find(".");
        int end = url.rfind(".");
        int effort = 0;
        
        
        while (++start < --end) {
            if (!vowel(url[start]))
                ++effort;
            if (!vowel(url[end]))
                ++effort;
        }
        if (start == end && !vowel(url[start]))
             ++effort;
        
        cout<<effort + 4 <<"/"<<url.length()<<endl;
    }
    
    return 0;
}
