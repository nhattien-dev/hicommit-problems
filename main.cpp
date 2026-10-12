#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string a;
    int len = a.length();
    int res = 0;
    cin >> a;
    for (int i = 0 ; i < (len/2);i++){
        if (a[i] == a[len - 1 -i]){
            res++;
    }
        else{
            cout << "NO" << endl;
            break;
        }
    }
    if (res == len / 2){
        cout << "YES" << endl;
    }
    return 0;
}