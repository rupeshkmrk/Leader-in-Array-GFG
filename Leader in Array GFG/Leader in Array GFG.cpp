// Leader in Array GFG.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include<iostream>
#include <string>
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int j = 0;j < T;j++)
	{
		int N;
		cin >> N;
		int *arr = new int[N];
		for (int i = 0;i < N;i++)
		{

			cin >> arr[i];
		}

		string str = to_string(arr[N - 1]);
		int max = arr[N - 1];
		for (int i = N - 2;i >= 0;i--)
		{
			if (arr[i] >= max)
			{

				str = to_string(arr[i]) + " " + str;
				max = arr[i];
			}

		}
		cout << str << endl;

	}
	return 0;
}

