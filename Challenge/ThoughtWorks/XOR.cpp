#include <iostream>
using namespace std;

int main()
{
    long long N, Q, i;
    cin>>N;

    long long *A = new long long[N];    

    for (i = 0; i < N; i++)
        cin>>A[i];
        
    cin>>Q;
    
    while (Q-- > 0 ) {
        long long l, r, x;
        cin>>l>>r>>x;
        
        long long index = l - 1;
        long long min = A[index] ^ x;
        long long count = 1;
                
        for (i = index + 1; i < r; i++) {
            long long y = A[i] ^ x;
            if (y < min) {
                min = y;
                index = i;
                count = 1;
            }
            else if (y == min)
                ++count;
        }
        
        cout<<A[index]<<" "<<count<<endl;
    }
    
    delete [] A;
    return 0;
}
