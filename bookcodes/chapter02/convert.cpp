// convert.cpp -- converts stone to pounds
#include <iostream>
/// <summary>
/// stone to pounds
/// </summary>
/// <param name="stone">stone value</param>
/// <returns>pounds value</returns>
int stonetolb(int stone);     // function prototype
int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    // cin.get();
    // cin.get();
    return 0;
}

int stonetolb(int stone)
{
    return 14 * stone;
}
