// init_ptr.cpp -- initialize a pointer
#include <iostream>
int main()
{
    using namespace std;
    int higgens = 5;
    int* pt = &higgens;

    cout << "Value of higgens = " << higgens
        << "; Address of higgens = " << &higgens << endl;
    cout << "Value of *pt = " << *pt
        << "; Value of pt = " << pt << endl;

    //Note 不要写下面的代码 指针应用解除引用运算符(*)之前，一定要将指针初始化为一个确定的、适当的地址
    //long *fellow;
    //*fellow=223323;

    // cin.get();
    return 0;
}
