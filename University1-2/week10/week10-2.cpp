#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(10);
    for(int i=0; i<10; i++){
        a[i] = i;
    }
    for(int i=0; i<10; i++){
        cout << a[i] << " ";
    }

    a.push_back(88);
    a.push_back(99);
    cout << endl;
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }
}
