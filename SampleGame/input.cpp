#include "input.h"

/*
* ランダム値をreturn 
* static_cast :型変換
* usinged :符号なし整数
*/
int Random_() {
    // 現在時刻を使って乱数のシード（種）を初期化
    srand(static_cast<unsigned int>(time(nullptr)));

    // 0から9までのランダムな数値を1つ生成
    return std::rand() % 10;
}

/*
* 入力値をreturn
*/
int Input() {
    cout << "数値を入力してください" << endl;
    int num;
    cin >> num;
    return num;
}

