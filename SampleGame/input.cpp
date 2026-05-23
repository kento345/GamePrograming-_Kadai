#include "input.h"

int Random_() {
   
    // 現在時刻を使って乱数のシード（種）を初期化
    srand(static_cast<unsigned int>(time(nullptr)));

    // 0から9までのランダムな数値を1つ生成
    return std::rand() % 10;
}

int Input() {
    cout << "数値を入力してください" << endl;
    int num;
    cin >> num;
    return num;
}

