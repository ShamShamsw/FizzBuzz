#include <iostream>

using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    
    for (int i = 0; i < 10; i++) {
        if(arr[i] % 3 == 0 && arr[i] % 5 == 0) {
            cout << arr[i] << " FizzBuzz\n" << endl;
        } else if(arr[i] % 3 == 0) {
            cout << arr[i] << " Fizz\n" << endl;
        } else if(arr[i] % 5 == 0) {
            cout << arr[i] << " Buzz\n" << endl;
        } else {
            cout << " Not a match\n" << endl;
        }
    }
    

    return 0;
}