#include <iostream>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);    // C, C++ 동기화 해제
    cin.tie(NULL);    // 입력과 출력을 분리

    int a, b;
    while (1){
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        cout << a + b << endl;
    }
}

