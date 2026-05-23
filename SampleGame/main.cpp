#include"input.h"
#include"judge.h"

int main() {
	
	int rand;

	rand = Random_();
	while (true)
	{
		auto input_value = Input();
		
		if (Result(Comparison(input_value, rand))) {
			break;
		}

	}


	return 0;
}