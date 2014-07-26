#include <iostream>
#include <sstream>
#include <string>

using namespace std;

long long getXorPairs(string& line, int size){
    istringstream istr(line);
    
    long long even = 0;
    long long odd = 0;
    
    int number;
    int index = 0;
    
    while (istr >> number) {
        if (number % 2 == 0)
            ++even;
        else
            ++odd;
            
    }
    return even * odd;
}

int main()
{
   	long long numOfTests = 0;
   	int size = 0;
    string line;
    
    //get the number of lines to follow
    getline(cin, line);
    istringstream(line)>>numOfTests;
    
    while(numOfTests-- > 0) {
        getline(cin, line);
        istringstream(line)>>size;
        getline(cin, line);
        cout<<getXorPairs(line, size)<<endl;
    }
    
    return 0;
}
