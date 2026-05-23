#include <iostream>
#include "judge.h"
using namespace std;




/*
* aが入力値,randがランダム値,valueが結果
*/
State Comparison(int a,int rand) {
	if (a > rand) {
		//大きい時
		return State::Big;
	}
	else if (a < rand) {
		return State::Small;
	}
	else {
		return State::Saffe;
	}
}

bool Result(State x) {
	switch (x)
	{
	case State::Big:
		cout << "大きいです" << endl;
		return false;
		break;
	case State::Small:
		cout << "小さいです" << endl;
		return false;
		break;
	case State::Saffe:
		cout << "ゲームクリア" << endl;
		return true;
		break;
	}
	return false;
}