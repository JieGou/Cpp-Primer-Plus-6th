// ifelseif.cpp -- using if else if else
#include <iostream>
const int Favorite = 27;
int main()
{
    using namespace std;
    int n;

    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do
    {
        cin >> n;
        if (n < Favorite)
            cout << "Too low -- guess again: ";
        else if (n > Favorite)
            cout << "Too high -- guess again: ";
        else
            cout << Favorite << " is right!\n";
    } while (n != Favorite);
    // cin.get();
    // cin.get();
    return 0;
}