#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    //by using min_element() function which is defined in the <algorithm> header file you can find the minimum value in a vector
    vector<int> a = {1, 2, 3, 0, 6};
    auto x = min_element(a.begin(), a.end());
    cout << "min element is " << *x << endl;

    //lets take you are given a set of numbers and a another number 'x' you have to find whether there is a pair which can give the number 'x' by addition
    //first create a vector from the numbers you get
    vector<int> intVector = {1, 4, 45, 6, 10, -8};

    //now sort it
    sort(intVector.begin(), intVector.end());

    for (int x : intVector)
    {
        cout << x << " ";
    }
    cout << endl; //now you can see our vector is  sorted

    auto upper = upper_bound(intVector.begin(), intVector.end(), 16);
    cout << "upper " << *upper << endl; //this is the immediate value which is greater than 16

    int i = 0;                                      // the beginning of the vector
    int flag = 0;                                   //we make it as 0 to denote a matching pair is not found yet
    int j = distance(intVector.begin(), upper) - 1; // the index of the element which have the number greater than 16
    while (i < j)
    {
        if (intVector[i] + intVector[j] == 16)
        {
            flag = 1;
            break;
        }
        else if (intVector[i] + intVector[j] < 16)
        {
            i++; // move towards right side
        }
        else
        {
            j--; // move towards left side
        }
    }

    if (flag == 0)
    {
        cout << " matching pair not found" << endl;
    }
    else
    {
        cout << "Matching pair found " << endl;
    }
}
