#include "libs.h"
#include "n_list.h"
#include "student.h"
int main()
{
    n_list<int> the_list1;
    n_list<double> the_list2;
    n_list<char> the_list3;
    n_list<cstudent> the_list4;
    cout << "int:" << endl;
    the_list1.add_front(1);
    the_list1.add_front(2);
    the_list1.add_front(3);
    the_list1.add_front(4);
    the_list1.add_front(5);
    n_list<int>::iterator i1;
    i1 = the_list1.front();
    for (int i = 0; i < the_list1.Size(); i++) {
        cout << " " << *i1;
        ++i1;
    }
    the_list1.remove_front();
    the_list1.remove_front();
    i1 = the_list1.front();
    for (int i = 0; i < the_list1.Size(); i++) {
        cout << " " << *i1;
        ++i1;
    }
    std::cout << "\n";
    i1 = the_list1.front();
    the_list1.VSort(the_list1);
    i1 = the_list1.front();
    for (int i = 0; i < the_list1.Size(); i++) {
        cout << " " << *i1;
        ++i1;
    }
    std::cout << "\n";
    i1 = the_list1.front();
    the_list1.find(2);
    cout << "double:" << endl;
    the_list2.add_front(1.4);
    the_list2.add_front(2.9);
    the_list2.add_front(3.2);
    the_list2.add_front(4.1);
    the_list2.add_front(5.6);
    n_list<double>::iterator i2;
    i2 = the_list2.front();
    for (int i = 0; i < the_list2.Size(); i++) {
        cout << " " << *i2;
        ++i2;
    }
    the_list2.remove_front();
    the_list2.remove_front();
    i2 = the_list2.front();
    for (int i = 0; i < the_list2.Size(); i++) {
        cout << " " << *i2;
        ++i2;
    }
    std::cout << "\n";
    i2 = the_list2.front();
    the_list2.VSort(the_list2);
    i2 = the_list2.front();
    for (int i = 0; i < the_list2.Size(); i++) {
        cout << " " << *i2;
        ++i2;
    }
    std::cout << "\n";
    i2 = the_list2.front();
    the_list2.find(2.9);
    cout << "char:" << endl;
    the_list3.add_front('a');
    the_list3.add_front('b');
    the_list3.add_front('s');
    the_list3.add_front('n');
    the_list3.add_front('f');
    n_list<char>::iterator i3;
    i3 = the_list3.front();
    for (int i = 0; i < the_list3.Size(); i++) {
        cout << " " << *i3;
        ++i3;
    }
    the_list3.remove_front();
    the_list3.remove_front();
    i3 = the_list3.front();
    for (int i = 0; i < the_list3.Size(); i++) {
        cout << " " << *i3;
        ++i3;
    }
    std::cout << "\n";
    i3 = the_list3.front();
    the_list3.VSort(the_list3);
    i3 = the_list3.front();
    for (int i = 0; i < the_list3.Size(); i++) {
        cout << " " << *i3;
        ++i3;
    }
    std::cout << "\n";
    i3 = the_list3.front();
    the_list3.find('n');
    cout << "student:" << endl;
    class cstudent a("kajdf", 2), b("sdj", 5), c("ahs", 9), d("axa", 3), f("eh", 10);
    the_list4.add_front(a);
    the_list4.add_front(b);
    the_list4.add_front(c);
    the_list4.add_front(d);
    the_list4.add_front(f);
    n_list<cstudent>::iterator i4;
    i4 = the_list4.front();
    for (int i = 0; i < the_list4.Size(); i++) {
        cout << " " << *i4 << endl;
        ++i4;
    }
    the_list4.remove_front();
    the_list4.remove_front();
    i4 = the_list4.front();
    for (int i = 0; i < the_list4.Size(); i++) {
        cout << " " << *i4 << endl;
        ++i4;
    }
    std::cout << "\n";
    i4 = the_list4.front();
    the_list4.VSort(the_list4);
    i4 = the_list4.front();
    for (int i = 0; i < the_list4.Size(); i++) {
        cout << " " << *i4 << endl;
        ++i4;
    }
    cout << endl;
    i4 = the_list4.front();
    the_list4.find(c);
    return 0;
}