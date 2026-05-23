#include"input.h"
#include"judge.h"

int main() {
	//ランダム値
	int rand;
	//ランダム値代入
	rand = Random_();
	//ループ
	while (true)
	{
		//入力値の代入
		auto input_value = Input();
		//Comparsionで比較してステートをretuernしてResultに渡してtrueならbreak
		if (Result(Comparison(input_value, rand))) {
			break;
		}
	}


	return 0;
}