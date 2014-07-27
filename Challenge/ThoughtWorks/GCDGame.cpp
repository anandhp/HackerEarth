#include <iostream>
using namespace std;

unsigned gcd(int A, int B) {
    if (B == 0)
        return A;
    return gcd(B, A % B);
}

int main()
{
    unsigned T;
    cin>>T;
    
    while (T-- > 0) {
        unsigned A, B;
        cin>>A>>B;
        while (A > 1 && B > 1) {        
            unsigned g = gcd(A, B);
            if (g > 1)
        }
        
    }
    
    return 0;
}
