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

    //Note ��Ҫд����Ĵ��� ָ��Ӧ�ý�����������(*)֮ǰ��һ��Ҫ��ָ���ʼ��Ϊһ��ȷ���ġ��ʵ��ĵ�ַ
    //long *fellow;
    //*fellow=223323;

    // cin.get();
    return 0;
}
