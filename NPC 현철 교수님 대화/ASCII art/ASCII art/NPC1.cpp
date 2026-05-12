#include <iostream>
#include <string>
#include <windows.h>

#include "face1.h"
#include "face2.h"

using namespace std;

// ================= 설정 =================

// 애니메이션 속도
// 숫자가 작을수록 빠름
const int ANIMATION_DELAY = 200; // ← 여기 수정

// 글자 출력 속도
// 숫자가 작을수록 빠름
const int TEXT_SPEED = 100; // ← 여기 수정

// 대사 출력 후 대기 시간
const int DIALOGUE_WAIT = 3000; // ← 여기 수정 (1000 = 1초)

// 그림 높이
const int FACE_HEIGHT = 18;

// 그림 아래 여백
const int DIALOGUE_OFFSET = 5;

// =======================================

// 커서 이동
void gotoxy(int x, int y)
{
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 애니메이션 프레임 출력
void playFrame(int frame)
{
    gotoxy(0, 0);

    if (frame % 2 == 0)
    {
        face1();
    }
    else
    {
        face2();
    }
}

void typeDialogue(const string& text, int& frame)
{
    int y = FACE_HEIGHT + DIALOGUE_OFFSET;

    // 이전 대사 삭제
    gotoxy(0, y);
    cout << string(100, ' ');

    string currentText;

    for (size_t i = 0; i < text.size();)
    {
        // 애니메이션 재생
        playFrame(frame);
        frame++;

        unsigned char c = text[i];

        int charSize = 1;

        // UTF-8 문자 크기 판별
        if ((c & 0xF0) == 0xE0)
            charSize = 3;
        else if ((c & 0xE0) == 0xC0)
            charSize = 2;
        else if ((c & 0xF8) == 0xF0)
            charSize = 4;

        // 글자 추가
        currentText += text.substr(i, charSize);

        // 대사 출력
        gotoxy(0, y);
        cout << currentText;

        i += charSize;

        Sleep(TEXT_SPEED);
    }

    // =========================
    // 대사 종료 후 마지막 표정 고정
    // =========================

    gotoxy(0, 0);
    face2();
}

int main()
{
    string dialogues[] =
    {
        "안녕하세요! 당신이 그 탐정이시군요.",
        "도난 당한 청금석 되찾아 볼까요?",
        "사전에 조사 된 바에 따르면 용의자는 총 5명입니다." ,
        "증거를 모아 범인을 찾아 보아요!" ,
    };

    int frame = 0;

    while (true)
    {
        for (const string& dialogue : dialogues)
        {
            // 대사 출력 중 애니메이션 재생
            typeDialogue(dialogue, frame);

            // 대사 출력 완료 후 정지

            Sleep(DIALOGUE_WAIT);
        }
    }

    return 0;
}