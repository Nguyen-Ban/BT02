#include <iostream>

using namespace std;

int main()
{
    int N;
    int test = -1;
    cin >> N;
    if(N < 0) {
        cout << N <<" ";
    }
    else{
        cout << N <<" ";
        test = N;
        do{
            cin >> N;
            if(test != N) cout << N << " ";
            test = N;
    }while(N > 0);
    }

    return 0;
}
