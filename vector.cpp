#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    //standrad way to create a vector
    vector<int> A = {7, 2, 30, 4};

    //output the first element

    cout << A[0] << endl;

    //sort the vector
    //to sort the vector you have to import the  <algorithm> to use the sort() function
    sort(A.begin(), A.end()); //sort the vector from beginning to end
    // the good thing is by this sort() function sorting will be done within O(NlogN) time
    //it is much faster than merge sort

    //since this is sorted we can find a whether a value is present here by using binary search
    //time complexity is O(NlogN)
    bool ispresent = binary_search(A.begin(), A.end(), 7); //starting , ending and the value we want to search

    cout << ispresent << endl;

    ispresent = binary_search(A.begin(), A.end(), 90);

    cout << ispresent << endl;

    //to insert a element to the vector use push_back()
    A.push_back(90);
    ispresent = binary_search(A.begin(), A.end(), 90);

    cout << ispresent << endl;

    A.push_back(90);
    A.push_back(100);

    //now we are going to look at iterators in c++
    //we use iterators when we want to point to some element in the range of same elements such as array or vector that has the ability to iterate through the elements

    //this lower_bound will return the first element which is greater than or equal to the given number
    vector<int>::iterator it = lower_bound(A.begin(), A.end(), 90);

    //the upper_bound will return first value which is strictly   greater than the given number
    vector<int>::iterator it2 = upper_bound(A.begin(), A.end(), 90);

    cout << it2 - it << endl; // you can do the basic arithmetic in iterators

    //to access the value within the iterators use the dereference operator *
    cout << "the value is " << *it2 << endl;
}
