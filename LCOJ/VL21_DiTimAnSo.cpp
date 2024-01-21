#include <bits/stdc++.h>

// Tim x lon nhat: 1 + 2 + 3 + ... + x <= N
// Vi du: N = 10
// Co nghia la: 1 + 2 + 3 + 4 = 10 --> x = 4 
// Input: So nguyen duong N
// Output: x la so nguyen duong lon nhat
// Y tuong: Dung vong lap, phep tinh cong, lap den khi nao ma == N thi dung
int main()
{
	long n;
	std::cin >> n;
	
	long sum = 0;
	for(long i = 1; i < n; i++)
	{
		sum += i;
		if(sum > n)
		{
			std::cout << i - 1;
			break;
		}
	}
	return 0;
}
