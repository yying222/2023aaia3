///week03-1.cpp �F��"��k�}" range-based for �j�� �b2011�~��C++�~���!
///waring: range-based 'for' loops only available with -std=c++11 or -std=
///CodeBlocks-Settings-Compiler �� -std=c++11 ��2011�~��C++�}�_��
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for(char c :s){ ///�o��²��n�ݦn�g��for�j��A�O2011�~��C++�}�l��
        cout << c << "\n";
    }
}
