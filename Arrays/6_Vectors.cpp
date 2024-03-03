#include <iostream>
#include <vector> // --> To use vector , we have to include this vector lib

using namespace std;

int main()
{
    // Vectors were introduced to solve the problem of static size of array
    // which mean we can not add elements in array after the fixed size
    // For Example

    int arr[5];
    arr[10] = 7; // ---> this will throw error we can not set elements after index 4

    // Initializing of the vector

    vector<int> vec(5); // ---> this denotes the size of vector i.e = 5;
    // The concept is as soon as we add more elements in vector, it will double its
    // capacity , the capacity becomes 10 now as we add 6th element of the array
    // and its size will be 6 which was 5 earlier

    vector<int> vec1(5, 0); // this denotes that vec1 has size 5 and all 5 elements are 0

    int n = vec1.size(); // ---->  .size() will tell the size of the vector
    cout << n << endl;   // -----> will print 5

    for (int i = 0; i < n; i++)
    {
        cout << vec1[i] << " ";
    }

    // above for loop will print 0 0 0 0 0 (5 zeros)

    // Adding element in vector

    vec1.push_back(6); // ---> this will add 6 to vec1 after 5 zeros dynimiacally increasing its size and doubling its capacity

    cout << endl
         << vec1.size() << endl; // --> will print 6

    cout << vec1.capacity(); // --> it will print 10

    // Some basic operations in vector

    vec1.size();                       //--> size
    vec1.push_back(8);                 //--> add element at the end of vec
    sort(vec1.begin(), vec1.end());    //--> will sort the vector
    reverse(vec1.begin(), vec1.end()); //--> will reverse the array

    // Note (Exception)
    // As we learnt that array by default passed by refrence in function
    // but vectors are passed by value by defualt
    // to pass them by refrence we use &
}
