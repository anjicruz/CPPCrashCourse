#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    for (int i; cin >> i;)
        v.push_back(i);
    for (int i = 0; i <= v.size(); ++i)
        cout << "v[" << i << "]==" << v[i] << endl;
}