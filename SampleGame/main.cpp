#include"input.h"
#include"judge.h"

int main() {
	int a = 0;
	int rand;
	int value = 0;
	Random(&rand);
	while (value != 3)
	{
		Input(&a);
		Comparison(a, rand, &value);
		Result(value);
	}


	return 0;
}