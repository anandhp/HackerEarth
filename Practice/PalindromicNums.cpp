#include <iostream>
#include <sstream>

using namespace std;

bool isPalindrom(const string& s) {
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
        if (s[i] != s[j])
            return false;
    return true;
}

int main()
{
    int T;
    cin>>T;
    
    
    while (T-- > 0) {
        long long A, B;
        long long N = 0;
        cin>>A>>B;
        while (A <= B) {
            stringstream ss;
            ss<<A;
            if (isPalindrom(ss.str()))
                ++N;
            A++;    
        }
        cout<<N<<endl;
    }

    return 0;
}
