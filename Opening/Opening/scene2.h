#pragma once
#include "common.h"

// Scene 2 아스키 아트 (청금석)
inline void art2()
{
    cout << "                      ____ " << endl;
    cout << "                     /    \\ " << endl;
    cout << "                    /  청  \\" << endl;
    cout << "                    |  금  |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_2()
{
    cout << "                      l___ " << endl;
    cout << "                     /    \\ " << endl;
    cout << "                    /  청  \\" << endl;
    cout << "                    |  금  |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_3()
{
    cout << "                      l___ " << endl;
    cout << "                     /l   \\ " << endl;
    cout << "                    /  청  \\" << endl;
    cout << "                    |  금  |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_4()
{
    cout << "                      l___ " << endl;
    cout << "                     /l   \\ " << endl;
    cout << "                    / l청  \\" << endl;
    cout << "                    |  금  |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_5()
{
    cout << "                      l___ " << endl;
    cout << "                     /l   \\ " << endl;
    cout << "                    / l청  \\" << endl;
    cout << "                    | l금  |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_6()
{
    cout << "                      l___ " << endl;
    cout << "                     /l   \\ " << endl;
    cout << "                    / l청  \\" << endl;
    cout << "                    |_l금_ |" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_7()
{
    cout << "                      l___ " << endl;
    cout << "                     /l   \\ " << endl;
    cout << "                    / l청  \\" << endl;
    cout << "                    |_l금__|" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
}

inline void art2_8()
{
    cout << "                     /l   \\ " << endl;
    cout << "                    / l청  \\" << endl;
    cout << "                    |_l금__|" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
    cout << "                           " << endl;
}

inline void art2_9()
{
    cout << "                    / l청  \\" << endl;
    cout << "                    |_l금__|" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
}

inline void art2_10()
{
    cout << "                    |_l금__|" << endl;
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
}

inline void art2_11()
{
    cout << "                    |  석  |" << endl;
    cout << "                    \\______/" << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
}

inline void art2_12()
{
    cout << "                    \\______/" << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
}

inline void art2_13()
{
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
    cout << "                           " << endl;
}

inline void playScene2()
{


    // [두 번째 화면 - 이전 대사 지우기]
    clearScreen(); // 화면 지우기
    art2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("계명의 국보 청금석.", 150);

    Sleep(3000); // 대사 읽을 시간 부여


    // [세 번째 화면 - 이전 대사 지우기]
    clearScreen(); // 화면 지우기
    art2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("총장께서는 이 돌을 학생 보ㄷ... 아니 학생 만큼 귀중히 여기신다.", 150);

    Sleep(3000); // 대사 읽을 시간 부여

    //네 번째 화면 - 이전 대사 지우기]
    clearScreen(); // 화면 지우기
    art2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("이 영석(靈石)의 값은 감히 해아릴 수 조차 없었다.", 150);

    Sleep(3000); // 대사 읽을 시간 부여

    //다섯 번째 화면 - 이전 대사 지우기]
    clearScreen(); // 화면 지우기
    art2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("때문에 총장께서는 학생들의 등록금을 아주 '조금' 올려 그 돈으로 천라지망(天羅地網)을 펼치니...", 150);

    Sleep(3000); 

    //여섯 번째 화면 - 이전 대사 지우기]
    clearScreen(); // 화면 지우기
    art2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("감히 그 누구도 넘보지 못할 것이 분명했다.", 150);

    Sleep(2000);

    //도난 애니 1
    clearScreen(); // 화면 지우기
    art2_2();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 2
    clearScreen(); // 화면 지우기
    art2_3();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);
   
    Sleep(1000);

    //도난 애니 3
    clearScreen(); // 화면 지우기
    art2_4();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 4
    clearScreen(); // 화면 지우기
    art2_5();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 5
    clearScreen(); // 화면 지우기
    art2_6();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 6
    clearScreen(); // 화면 지우기
    art2_7();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);


    //도난 애니 7
    clearScreen(); // 화면 지우기
    art2_8();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 8
    clearScreen(); // 화면 지우기
    art2_9();        // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 9
    clearScreen(); // 화면 지우기
    art2_10();       // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 10
    clearScreen(); // 화면 지우기
    art2_11();       // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 11
    clearScreen(); // 화면 지우기
    art2_12();       // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(1000);

    //도난 애니 12
    clearScreen(); // 화면 지우기
    art2_13();       // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("", 200);

    Sleep(3000);

    clearScreen(); // 화면 지우기
    art2_13();       // 아스키 아트 다시 그리기
    cout << "\n\n";

    // 새로운 대사 출력
    printDialogue("도둑이다!!!!!!!!!!!", 50);


    Sleep(3000); // 씬2 종료 전 대기

}