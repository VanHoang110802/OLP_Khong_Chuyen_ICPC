/*
Bài 1. Mã hóa (100 điểm)
Khi nghiên cứu xây dựng thuật toán mã hóa, Nam cần giải quyết bài toán sau:
Với bốn số nguyên dương L,R,A,K, cần đếm số lượng số nguyên dương S mà L <= S <= R và (A x S ) % K = 0 ,
trong đó % là phép toán chia lấy dư. Hãy giúp Nam giải bài toán trên.
Dữ liệu: Vào từ thiết bị vào chuẩn gồm bốn số nguyên dương (L,R,A,K), các số cách nhau bởi dấu cách.
Kết quả: Ghi ra thiết bị ra chuẩn một số nguyên là số lượng số nguyên dương S thỏa mãn.
Ví dụ:
Dữ liệu vào				Kết quả ra
1 10 2 10					2
Giới hạn:
Subtask 1 (50% số điểm): L,R,A,K <= 10^6
Subtask 2 (50% số điểm): L,R,A,K <= 10^18
ta có: L = 1, R = 10, A = 2, K = 10
-> (AxS) % K = 0
(A ∗ S) % K = 0, K′ = K / gcd(A, S) = 10/(2,10 - 1 + 1) = 5
f(R) = R/K′ = 10 / 5 = 2
(AxS) % K = 0
(2x1) % 10 = 1
(2x2) % 10 = 4
(2x3) % 10 = 6
(2x4) % 10 = 8
(2x5) % 10 = 0
*/

#include <iostream>
#include <cmath>

using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}
int main()
{
	long long l, r, a, k, k1;
	cin >> l >> r >> a >> k;
	k1 = gcd(a, k);
	k = k / k1;
	cout << (r/k) - ((l-1)/k);
	return 0;
}
