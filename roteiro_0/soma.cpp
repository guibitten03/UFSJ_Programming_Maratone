#include <iostream>
#include <vector>

using namespace std;

int main(){

    int sz, sum = 0, n;
    cin >> sz;

    for(int i = 0; i < sz; i++){
        cin >> n;
        sum += n;
    }

    cout << sum << '\n';
     
    return 0;
}