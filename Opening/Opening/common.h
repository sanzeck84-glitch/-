#pragma once
#include <iostream>
#include <string>
#include <windows.h> 

using namespace std;

// 공통 기능 1: 한글 깨짐 방지 타이핑 효과 함수
inline void printDialogue(const string& text, int delay = 50)
{
    for (size_t i = 0; i < text.length(); i++)
    {
        if (text[i] & 0x80) // 한글(2바이트) 처리
        {
            cout << text[i] << text[i + 1];
            i++;
        }
        else // 영어/특수문자/공백 처리
        {
            cout << text[i];
        }
        Sleep(delay);
    }
    cout << endl;
}

// 공통 기능 2: 화면 지우기 (코드를 더 깔끔하게 만들기 위해 래핑)
inline void clearScreen()
{
    system("cls");
}
