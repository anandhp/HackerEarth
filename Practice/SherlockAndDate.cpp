#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
   	int numOfTests = 0;
    cin>>numOfTests;
    string monthIndex[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    map<string, int> months;
   
    months.insert(pair<string, int>("January", 1));
    months.insert(pair<string, int>("February", 2));
    months.insert(pair<string, int>("March", 3));
    months.insert(pair<string, int>("April", 4));
    months.insert(pair<string, int>("May", 5));
    months.insert(pair<string, int>("June", 6));
    months.insert(pair<string, int>("July", 7));
    months.insert(pair<string, int>("August", 8));
    months.insert(pair<string, int>("September", 9));
    months.insert(pair<string, int>("October", 10));
    months.insert(pair<string, int>("November", 11));
    months.insert(pair<string, int>("December", 12));
    
    while(numOfTests-- > 0) {
        int day, year, m;
        string month;
        cin>>day>>month>>year;
        
        day -=1;

        if (day == 0 && (m = months[month] - 1) > 0) {
            if (m == 2) {
                if ((year % 4 == 0) && !(year % 100 == 0)|| (year % 400 == 0)) 
                    day = 29;
                else
                    day = 28;
            } else if (m == 4 || m == 6 || m == 9 || m == 11) 
                day = 30;
            else
                day = 31;
            month = monthIndex[m - 1];
        } else if(day == 0 && m == 0) {
            year -= 1;
            month = monthIndex[11];
            day = 31;
        }
        
        cout<<day<<" "<<month<<" "<<year<<endl;
    }
    
    return 0;
}
