#pragma once
#include<iostream>
using namespace std;

/*
* 大きい,正解,小さいのステート
*/
enum class State
{
	Big, Saffe, Small,
};
/*
* 比較してステートをreturn
*/
State Comparison(int a,int rand);

/*
* switchでステートを元にboolをreturn
*/
bool Result(State x);
