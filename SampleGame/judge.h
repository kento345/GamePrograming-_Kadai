#pragma once
#include<iostream>
using namespace std;

enum class State
{
	Big, Saffe, Small,error
};

State Comparison(int a,int rand);

bool Result(State x);
