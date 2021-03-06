#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	int noOfTests = 0;
	int N = 0, K = 0;

	cin>>noOfTests;
	
	while (noOfTests-- > 0) {
	    cin>>N>>K;
	    
		vector<int> list;
	    for(int i = 0; i < N; i++)
	        list.push_back(i + 1);
	    
	    int index = K >= list.size() ? K % list.size() : K;
	    vector<int>::iterator it = list.begin() + index;
	        
	    while(list.size() > 1) {
	        list.erase(it);
	        index = index + K;
	        index = index >= list.size() ? index % list.size() : index;
	        it = list.begin() + index;
	    }
	    cout<<list[0]<<endl;
	}
    return 0;
}
