#include <iostream>
#include "MyString.h"
using namespace std;
int main()
{   
    /*
    MyString origstr("I love twinkies");
    cout << "Original string: " << origstr.getString() << endl;
    MyString copystr = origstr;
    cout << "String copy: " << copystr.getString() << endl;
    cout << "First copy symbol: " << copystr[0] << endl;
    copystr();
    MyString firstString;
    cout << "80-length string: '" << firstString.getString() << "'\n";
    MyString secondString(true);
    cout << secondString.getLength() << "-length string: '" << secondString.getString() << "'\n";
    MyString initializedString("Madre");
    cout << "Initialized contructor srting: " << initializedString.getString() << "'\n";
    MyString inputStr;
    inputStr.inputString();
    inputStr.printString();
    MyString str1("Hola");
    MyString str2;
    str2.MyStrcpy(str1);
    str2.printString();
    if (str1.MyStrStr("opa"))
    {
        cout << "substring finded\n";
    }
    else
    {
        cout << "substring not finded\n";
    }
    int index = str1.MyChr('l');
    if (index != -1)
    {
        cout << "Symbol found on index: " << index << endl;
    }
    else
    {
        cout << "Symbol not found\n";
    }
    cout << "Length of str1: " << str1.MyStrLen() << endl;
    cout << "Length of str2: " << str2.MyStrLen() << endl;
    MyString str3(" adios");
    str1.MyStrCat(str3);
    str1.printString();
    cout << "Length of str1 content: " << str1.MyStrLen() << endl;
    str1.MyDelChr('d');
    str1.printString();
    cout << "str1 length after deleting 'd': " << str1.MyStrLen() << endl;
    int cmp = str1.MyStrCmp(str2);
    if (cmp == 0) {
        cout << "0" << endl;
    }
    else if (cmp > 0) {
        cout << "1" << endl;
    }
    else {
        cout << "-1" << endl;
    }
    */
    /*
    MyString str1("Hola");
    MyString str2 = std::move(str1);
    cout << "str2 after move: " << str2.getString() << endl;
    MyString inputStr;
    cout << "Write string: ";
    cin >> inputStr;
    cout << "You wrote: " << inputStr << endl;
    str2 += ", madre";
    cout << "str2 after +=: " << str2 << endl;
    MyString str3 = "Hola" + str2;
    cout << "Result: " << str3 << endl;
    */

    MyString s = {'H', 'o', 'l', 'a'};
    s.printString(); 
    
    return 0;
};