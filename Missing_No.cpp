// Approach
//? 1. Get numbers uptil n and store them as an array: stored[]
//? 2. Get input numbers as an array: input[]
//? 3. Match the elements of stored[] and input[] and print out the missing
#include <iostream>
using namespace std;
int findMissingElement(int stored[], int input[], int n)
{
    int missingElement = 0;
    // XOR all elements in stored
    for (int i = 0; i < n; i++)
    {
        missingElement ^= stored[i]; // XOR operator
    }
    // XOR all elements in input
    for (int i = 0; i < n - 1; i++)
    {
        missingElement ^= input[i];
    }
    return missingElement;
}
int main()
{
    int n;
    cin >> n;
    int stored[n], input[n - 1];
    for (int i = 0; i <= n; i++)
    {
        stored[i] = i + 1;
    }
    // for(int i=0;i<n;i++){
    //     cout<<stored[i]<<" ";
    // }
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> input[i];
    }
    int missingElement = findMissingElement(stored, input, n);
    cout << missingElement << endl;
}