// fun_ptr.cpp -- pointers to functions
#include <iostream>
double EstimateByBetsy(int);
double EstimateByPam(int);

// second argument is pointer to a type double function that
// takes a type int argument
void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;

    cout << "How many lines of code do you need? ";
    cin >> code;
    cout << "Here's Betsy's estimate:\n";
    estimate(code, EstimateByBetsy);
    cout << "Here's Pam's estimate:\n";
    estimate(code, EstimateByPam);
    // cin.get();
    // cin.get();
    return 0;
}

double EstimateByBetsy(int lns)
{
    return 0.05 * lns;
}

double EstimateByPam(int lns)
{
    return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
    using namespace std;
    cout << lines << " lines will take ";
    cout << (*pf)(lines) << " hour(s)\n";
}
