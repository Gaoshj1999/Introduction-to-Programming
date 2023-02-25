#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;
int main()
{
    int intarr[] = {30, 90, 10, 40, 70, 50, 20, 80};
    const int n = sizeof(intarr) / sizeof(int);
    vector<int> a(intarr, intarr + n);
    cout << "before sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    sort(a.begin(), a.end(), greater<int>());//由大到小排
    cout << "after sorting:" << endl;
    copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\t"));
    cout << endl;
    return 0;
}