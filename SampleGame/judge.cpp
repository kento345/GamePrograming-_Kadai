#include <iostream>
#include "judge.h"
using namespace std;

/*
* aが入力値,randがランダム値,valueが結果
*/
void Comparison(int a,int rand,int* value) {
	if (a > rand) {
		//大きい時
		*value = 1;
	}
	else if (a < rand) {
		*value = 2;
	}
	else {
		*value = 3;
	}
}

void Result(int value) {
	switch (value)
	{
	case 1:
		cout << "大きいです" << endl;
		break;
	case 2:
		cout << "小さいです" << endl;
		break;
	case 3:
		cout << "ゲームクリア" << endl;
		break;
	}
}