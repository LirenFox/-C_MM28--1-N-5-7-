#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n/35;
    //cout 35 ������
    for(int i=1; i<n; i++){
        cout << 35 * i << " " ;
    }
    cout << 35 * n << endl;
    return 0;
}
