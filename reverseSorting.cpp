// Main function of the C++ program.

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    string myArray[size];
    
    cout << "Please input " << size << " words\n";
    for(int i = 0; i < size; i++){
        cout << "Please input word " << i + 1 << endl;
        cin >> myArray[i];
    }
    cout << "The words you entered are: ";
    for(int i = 0; i < size; i++){
        cout << myArray[i] << " ";
    }
    cout << endl;
    cout << "The reverse of the words you entered are: ";
    for(int i = size-1; i >= 0; i--){
        cout << myArray[i] << " ";
    }
}
