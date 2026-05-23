#include "input.h"

void Random(int* num) {
	    // 現在時刻を使って乱数のシード（種）を初期化
    srand(static_cast<unsigned int>(time(nullptr)));

    // 0から9までのランダムな数値を1つ生成
    *num = std::rand() % 10;
}

void Input(int* num) {
    cout << "数値を入力してください" << endl;
    cin >> *num;
}

