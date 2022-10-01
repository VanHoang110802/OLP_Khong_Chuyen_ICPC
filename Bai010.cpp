/*

https://codeforces.com/problemset/problem/551/A


time limit per test: 1 seconds
memory limit per test: 256 megabytes

Professor GukiZ likes programming contests. He especially likes to rate his students on the contests he prepares. Now, he has decided to prepare a new contest.

In total, n students will attend, and before the start, every one of them has some positive integer rating. Students are indexed from 1 to n. Let's denote the rating of i-th student as ai. After the contest ends, every student will end up with some positive integer position. GukiZ expects that his students will take places according to their ratings.

He thinks that each student will take place equal to 1 + (number of students with strictly higher rating than his or her). In particular, if student A has rating strictly lower then student B, A will get the strictly better position than B, and if two students have equal ratings, they will share the same position.

GukiZ would like you to reconstruct the results by following his expectations. Help him and determine the position after the end of the contest for each of his students if everything goes as expected.

Input
The first line contains integer n (1 ≤ n ≤ 2000), number of GukiZ's students.

The second line contains n numbers a1, a2, ... an (1 ≤ ai ≤ 2000) where ai is the rating of i-th student (1 ≤ i ≤ n).

Output
In a single line, print the position after the end of the contest for each of n students in the same order as they appear in the input.

input
3
1 3 3
output
3 1 1
input
1
1
output
1
input
5
3 5 3 4 5
output
4 1 4 3 1

Note
In the first sample, students 2 and 3 are positioned first (there is no other student with higher rating), and student 1 is positioned third since there are two students with higher rating.

In the second sample, first student is the only one on the contest.

In the third sample, students 2 and 5 share the first position with highest rating, student 4 is next with third position, and students 1 and 3 are the last sharing fourth position.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int n; 
int a[2005]; 
vector <int> listID[2005]; 
int result[2005]; 
 
int main () 
{
	cin >> n; 
	for (int i = 1; i <= n; ++i) 
	{
		cin >> a[i]; 
		listID[a[i]].push_back(i); 
	}
	sort(a + 1, a + n + 1); 
	int higherScore = 2005; 
	int Rank = 0; 
	for (int i = n; i >= 1; --i) 
	{
		if (higherScore != a[i]) 
		{
			higherScore = a[i]; 
			Rank = n - i + 1; 
		}  
		int lastid = listID[a[i]].back(); 
		listID[a[i]].pop_back(); 
		result[lastid] = Rank;
	}
	for (int i = 1; i <= n; ++i) 
	{
		cout << result[i] << ' '; 
	}
	return 0; 
}
