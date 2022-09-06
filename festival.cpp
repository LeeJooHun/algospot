#include <iostream>
using namespace std;

int main()
{
	int C, N, L, sum;
	int cost[1001];
	double avg, min;

	cout.setf(ios::fixed);	//소수점 자리 고정
	cout.precision(8);		//소수점 8자리까지 고정
	
	cin >> C;
	
	while (C--)
	{
		min = 1000;
		cin >> N >> L;

		for (int i = 0; i < N; i++)
			cin >> cost[i];

		for (; L <= N; L++)			
		{
			for (int i = 0; i <= N - L; i++)	
			{
				sum = 0;
				for (int j = i; j < i + L; j++)
				{
					sum += cost[j];
				}
				avg = (double)sum / L;
				if (min > avg)
					min = avg;
			}
		}
		cout << min << endl;
	}
	return 0;
}