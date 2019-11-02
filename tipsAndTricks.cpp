#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    //by using min_element() function which is defined in the <algorithm> header file you can find the minimum value in a vector
    vector<int> a = {1, 2, 3, 0, 6};
    auto x = min_element(a.begin(), a.end());
    cout << "min element is " << *x;
}
