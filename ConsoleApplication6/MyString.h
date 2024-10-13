#pragma once
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
class MyString
{
private:
    char* str;
    int length;
public:
    MyString();
    MyString(bool askSize);
    MyString(const char* initializedString);
    ~MyString();
    int getLength() const;
    const char* getString() const;
    void inputString();
    void printString() const;
    void MyStrcpy(MyString& obj);
    bool MyStrStr(const char* str);
    int MyChr(char c);
    int MyStrLen();
    void MyStrCat(MyString& b);
    void MyDelChr(char c);
    int MyStrCmp(MyString& b);
    MyString(const MyString& other);
    MyString& operator=(const MyString& other);
    char& operator[](int index);
    void operator()() const;
    MyString(MyString&& other) noexcept;
    MyString& operator=(MyString&& other) noexcept;
    friend ostream& operator<<(ostream& os, const MyString& obj);
    friend istream& operator>>(istream& is, MyString& obj);
    MyString& operator+=(const char* other);
    friend MyString operator+(const char* lhs, const MyString& rhs);
    MyString(initializer_list<char> charList);
};
