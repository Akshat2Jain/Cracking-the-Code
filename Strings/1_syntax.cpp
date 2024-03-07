#include <iostream>
#include <string> // to use strings we import this lib

using namespace std;

int main()
{
    // What is the difference between char and strings
    // a single character is called as the char and group of char is called as string

    char a = 'a'; // keep remember to use ''  not " "
    cout << a << endl;

    // In similar manner we use
    // Initializing of string

    string str = "college";
    string str1 = "this is a string";
    string str2("this is the 2nd way to initialize string");
    cout << str2 << endl;

    // Taking input from user

    string str3; // will take hello but when does not take hello world because of the gap
    // cin >> str3;

    // But there is a problem with cin>> that it does not take string when found space

    // For that we use getline

    getline(cin, str3);
    cout << str3 << endl;
}