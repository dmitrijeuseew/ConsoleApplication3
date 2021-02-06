#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> v;
    v.push_back(16.2);
    for (auto elem : v)
        cout << elem << endl;
}
