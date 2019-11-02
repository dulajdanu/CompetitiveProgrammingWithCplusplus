//when we use vectors after adding elements we have to sort the vector again and again to get a sorted vector
//but if we use  a set we dont have to sort the set because whenever we add a new element to the set it is automatically placed in the correct place
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> setInt;
    setInt.insert(5);
    setInt.insert(0);
    setInt.insert(-4);
    setInt.insert(10);

    //now lets print the values in the set

    for (int x : setInt)
    {
        cout << x << " ";
    }

    cout << endl;

    //when we print the values in the vector we can the it doesn't matter how we insert the elements in to the set because the set is always sorted automatically
    //time complexity for set operations is  O(logN) this saves much time .We get this time complexity because set is implemented as a balanced tree structure.

    //to find whether a element is present in the set we can use the function find() with a iterator

    set<int>::iterator it1 = setInt.find(500);
    //if the item is present we can get the memory location where it is present
    //if the item is not present we get the set.end() location which means the item that we are searching is not in the set

    if (it1 == setInt.end())
    {
        cout << "Item is not present in the set" << endl;
    }
    else
    {
        cout << "Item is in the set " << endl;
    }

    //to print the value in the iterator use * operator

    //without giving the type as iterator you can give the type as 'auto' then the c++ will automatically get the type as iterator

    auto it2 = setInt.find(5);

    if (it2 == setInt.end())
    {
        cout << "Item is not present in the set" << endl;
    }
    else
    {
        cout << "Item is in the set " << endl;
    }

    setInt.insert(10);
    setInt.insert(10);

    for (int x : setInt)
    {
        cout << x << " ";
    }
    //here we inserted 10 2 times to the set but when we print the set we only see 1 element with 10 it is because the set only contains unique values

    //if we want to get a element which is greater than or equal to the given element we can use lower bound
    //here the way we use the lower bound is different from set because here the lower_bound function is a built in function in the set class , and the set is already sorted so we dont have to give the range

    auto it3 = setInt.lower_bound(5);
    cout << endl
         << "lower bound of  5 " << *it3;
    //upper bound also can be used like this

    auto it4 = setInt.upper_bound(5);
    cout << endl
         << "upper bound of 5 is " << *it4;

    //if we try to find the upper or lower bound of a element and if it is not present we get s.end()

    auto it5 = setInt.upper_bound(10);
    if (it5 == setInt.end())
    {
        cout << endl
             << "Upper bound does not exist for 10 ";
    }

    // you can also erase an element from O(LogN) time
}
