#include <iostream>
#include <set>

using namespace std;


int numbers(const set<int> &smaller, const set<int> &larger)
{
    int count = 0;
    set<int>::iterator it;
    for (it = smaller.begin(); it != smaller.end(); it++)
        if (larger.find(*it) != larger.end())
            ++count;
    return count;
}

int main()
{
    int zim, del;
    while (cin >> zim >> del, del)
    {
        set<int> first, second;
        while (del--)
        {
            int num;
            cin >> num;
            first.insert(num);
        }
        while (zim--)
        {
            int num;
            cin >> num;
            second.insert(num);
        }

        if (first.size() < second.size())
            cout << numbers(first, second) << endl;
        else
            cout << numbers(second, first) << endl;
    }
}
