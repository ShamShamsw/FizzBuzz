//please create a base c++ template
#include <iostream>

using namespace std;

int main() {
    //generate an array with random numbers
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    
    //for loop to print the array using the array length
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