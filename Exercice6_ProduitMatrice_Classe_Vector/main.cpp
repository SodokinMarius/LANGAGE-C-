#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    vector <int> tab;
    vector <int>::iterator pos;
    tab.push_back(10);
    tab.push_back(7);
    tab.push_back(11);
    tab.push_back(8);
    pos = find(tab.begin() , tab.end() , 1);
    if (pos == tab.end() )
        cout << "element non trouve" << endl;
    else
        cout << "element trouve" << endl ;

    vector<int> v = {2, 1, 20, 17, 5, 6};
    sort(v.begin(), v.end());

    if (binary_search(v.begin(), v.end(), 5)) {
        cout << "Element found" << endl;
    }
    else {
        cout << "Element not found" << endl;
    }

    return 0;
}
