#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Indexing in string works same as array indexing

    string str = "hello"; // h e l l o
    cout << str << endl;  // 0 1 2 3 4
    cout << str[2] << endl;

    // ASCII Values means each character has some numeric value attached  to it
    // You can see the chart google
    char ch = 'a';
    cout << int(ch); // --> will give the ascii value of small 'a';
}