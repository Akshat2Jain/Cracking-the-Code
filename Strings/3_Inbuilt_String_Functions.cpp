#include <iostream>
#include <algorithm>
#include <cstring> // while using strcat or strcpy
#include <string>

using namespace std;

int main()
{
    // 1. Reverse() --> will reverse a string  Time Complexity O(lengthofstring)
    string str = "hello";
    // reverse(str.begin(), str.end());
    // cout << str << endl;

    // 2 Substr --> substring of a given string
    string str2 = str.substr(0, 4); // (starting index, length)
    cout << str2 << endl;

    // 3. + operator --> cancatinate string
    string s1 = "hellow";
    string s2 = "world";
    s1 += s2;
    cout << s1 << endl;

    // 4. strcat() ---> cancatinate two arrays

    char arr1[20] = "hellow";
    char arr2[20] = "world";
    strcat(arr1, arr2);
    cout << arr1 << endl;

    // 5. push_back(char) ---> used to push back at the end of character

    string str4 = "abcd";
    char ch = 'e';
    str4.push_back(ch);
    cout << str4 << endl;

    // 6 .size() --> to know the size of the string

    // same way if we want to know the length of character array
    char arr3[20] = "world";
    cout << strlen(arr3) << endl;

    // 7. to_string --> integer value to string
    int num = 4;
    string nums = to_string(num);
    cout << nums << "---> but this 4 is in string" << endl;

    // 8 stoi ---> string to integer
    string str5 = "123";
    int num1 = stoi(str5);
    cout << num1 << endl;
}