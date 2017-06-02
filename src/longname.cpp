#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1, word2;
    cout << "Please enter word 1 : ";
    getline(cin,word1);
    cout << "Please enter word 2 : ";
    getline(cin,word2);
    int l1 = word1.length();
    int l2 = word2.length();
    if (l1 == l2) {
        cout << "Word1 and Word2 are the same size";
    } else if (l1 < l2) {
        cout << "Word2 is longer than Word1";
    } else {
        cout << "Word1 is longer than Word2";
    }
    cout << endl;
    return 0;
}