#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    // the map is similar to the dictionary in python
    //in the map we can do all the map operations within O(LogN) time
    map<int, int> intMap;
    intMap[1] = 40;
    intMap[40] = 50;
    cout << " value of 40 is " << intMap[40] << endl;

    map<char, int> charCount;

    string name = "dulaj danu";
    for (char x : name)
    {
        charCount[x]++; //here a new key to the map is added and its value is increased by 1
    }

    cout << charCount['d'] << endl; //we can find the count of letter 'd

}