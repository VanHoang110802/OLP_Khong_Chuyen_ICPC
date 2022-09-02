/*
Bài 2. Khoảng cách (100 điểm)
Nam định nghĩa khoảng cách giữa hai dãy số A = (a1, a2,...,am ) và B = (b1, b2,...,bn ) là giá trị |ai - bj| nhỏ nhất 
trong tất cả các cặp (ai, bj) với 1 <= i <= m và 1 <= j <= n.
Ví dụ, khoảng cách giữa hai dãy (1, 5, 7) và (4, -1, 3, 9) là |5 - 4| = 1.
Trên dãy số A = (a1, a2,...,am ) với cặp chỉ số (L, R), tạo ra dãy số C gồm các phần tử từ L đến R (1 <= L <= R <= m), 
cụ thể C = (aL, aL+1,..., aR), Nam cần tính khoảng cách của hai dãy số C và B.

Yêu cầu: Cho hai dãy số nguyên A = (a1, a2, ... , am), B = (b1, b2,..., bn) và k cặp chỉ số (L, R), với mỗi cặp chỉ 
số (L, R), hãy tạo dãy số C tương ứng và đưa ra khoảng cách của dãy số C với dãy số B.

Dữ liệu: Vào từ thiết bị vào chuẩn:
 - Dòng đầu tiên chứa ba số nguyên dương m,n,k;
 - Dòng thứ hai gồm m số nguyên a1, a2, ...,am (|ai| <= 10^9; 1 <= i <= m);
 - Dòng thứ ba gồm n số nguyên b1, b2, ..., bn (|bj| <= 10^9; 1 <= j <= n);
 - Dòng thứ t (1 <= t <= k) trong k dòng tiếp theo, mỗi dòng chứa hai số nguyên dương L, R (1 <= L <= R <= m)
Các số trên cùng một dòng cách nhau bởi dấu cách.

Kết quả: Ghi ra thiết bị ra chuẩn gồm k dòng, mỗi dòng chứa một số nguyên là khoảng cách của hai dãy số C và B tương 
ứng với cặp chỉ số L, R trong dữ liệu vào.

Ví dụ:
input			ouput
3 4 3			1
1 5 7			2
4 -1 3 9		1
1 3
1 1
2 2

Giới hạn:
Subtask 1 (40% số điểm): m, n <= 5000; k = 1;
Subtask 2 (30% số điểm): m, n <= 10^5; k = 1;
Subtask 3 (20% số điểm): m, n <= 5000; k <= 10^6;
Subtask 4 (10% số điểm): m, n <= 10^5; k <= 10^6;

*/
