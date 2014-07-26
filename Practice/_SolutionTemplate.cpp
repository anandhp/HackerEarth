#include <iostream>
#include <sstream>
#include <string>

using namespace std;


int main()
{
   	int numOfTests = 0;
    string line;
    
    //get the number of lines to follow
    getline(cin, line);
    istringstream(line)>>numOfTests;
    
    while(numOfTests-- > 0) {
    }
    
    return 0;
}
