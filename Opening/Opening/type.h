#ifndef TYPE_H
#define TYPE_H

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

// 출력 속도
const int TEXT_SPEED = 50;

void typeText(const wstring& text)
{
    wstring currentText;

    for (wchar_t ch : text)
    {
        currentText += ch;

        wcout << L"\r" << currentText << flush;

        Sleep(TEXT_SPEED);
    }

    wcout << endl;
}

#endif