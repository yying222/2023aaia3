///week03-3.cpp �r�� string
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "�п�J�@�Ӧr��A��������Ů�:";
    cin >> s;
    cout << "�r��s:" << s << "�����׬O:" << s.length() << "\n";
    for(int i=0; i<s.length(); i++){ ///for(char c : s)
        cout << s[i] << "\n";
    }
}
