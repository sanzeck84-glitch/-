#include <iostream>
#include "scene1.h"
#include "scene2.h"
#include "scene3.h"

int main()
{
    // Scene 1 실행 (아스키 아트 + 대사 연출)
    playScene1();

    // 추후 여기에 playScene2(); playScene3(); 등을 추가하시면 됩니다.
    playScene2();

    playScene3();

    system("pause"); // 프로그램 종료 전 화면 대기
    return 0;
}