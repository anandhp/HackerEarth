#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int T;
    cin>>T;
    
    while (T-- > 0 ) {
        int N, K, i;
        cin>>N>>K;
              
        vector<int> fp;
        
        for (i = 0; i < N; i++) {
            int p;
            cin>>p;
            fp.push_back(p);
        }
            
        for (i = 0; i < K; i++) {
            bool df = false;
            for (int j = 1; j < fp.size(); j++) {
                if (fp[j - 1] < fp[j]) {
                    fp.erase(fp.begin() + j -1);
                    df = true;
                    break;
                }
            }
            if (!df)
                fp.pop_back();
        }
        
        for (i = 0; i < fp.size(); i++)
            cout<<fp[i]<<" ";
        
        cout<<endl;
        
    }
    
    return 0;
}
