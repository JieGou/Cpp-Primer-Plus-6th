// limits.cpp -- some integer limits
#include <iostream>
#include <climits>              // use limits.h for older systems
int main()
{
    using namespace std;
    int n_intMaximum = INT_MAX;        // initialize n_int to max int value
    short n_shortMaximum = SHRT_MAX;   // symbols defined in climits file
    long n_longMaximum = LONG_MAX;
	long long n_llongMaximum = LLONG_MAX;

    // sizeof operator yields size of type or of variable
    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof n_shortMaximum << " bytes." << endl;
    cout << "long is " << sizeof n_longMaximum << " bytes." << endl;
    cout << "long long is " << sizeof n_llongMaximum << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << n_intMaximum << endl;
    cout << "short: " << n_shortMaximum << endl;
    cout << "long: " << n_longMaximum << endl;
    cout << "long long: " << n_llongMaximum << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;
	// cin.get();
    return 0;
}
