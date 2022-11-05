/*
Chúc mừng các bạn 12Tin đã thi đậu đại học. Để thưởng nóng cho các bạn, anh Khôi quyết
định thưởng cho mỗi bạn.................... 2 cục kẹo. Tuy nhiên, là một người yêu thích sự đa dạng,
anh Khôi đã quyết định 2 cục kẹo mà mỗi bạn nhận phải khác màu với nhau. Anh Khôi hiện
đang có N cục kẹo, cục kẹo thứ i có màu là ci và có độ ngon là vi

. Lớp 12Tin năm nay có K bạn đậu đại học, do đó anh Khôi cần chọn trong N viên kẹo này tổng cộng 2*K viên sao cho 2*K
viên kẹo này có thể chia vào tay K bạn, mỗi bạn 2 viên khác màu, đồng thời tổng độ ngon phải là lớn nhất có thể.
- Dữ liệu đầu vào (AC6.INP):
 Dòng đầu tiên gồm một số nguyên dương T (1 ≤ T ≤ 20), là số lượng bộ dữ liệu.
 T bộ dữ liệu tiếp theo, mỗi bộ dữ liệu được tổ chức dưới dạng như sau:
 Dòng đầu tiên gồm 2 số nguyên dương N và K.
 N dòng sau, dòng thứ i gồm 2 số nguyên dương ci và vi, tương ứng là màu sắc và độ ngon của cục kẹo thứ i.

- Dữ liệu đầu ra (AC6.OUT):
o Gồm T dòng, dòng thứ i là tổng độ ngon lớn nhất mà anh Khôi có thể chọn ra 2*K cục kẹo cho lớp 12Tin. Nếu không có cách chia, ta hãy in ra -1.

AC6.INP
4
2 1
1 10
1 20
4 2
1 2
1 3
2 4
2 5
8 3
1 6
2 3
3 10
4 9
5 15
6 1
7 17
8 21
4 0
43 10
14 9
12 22
20 46


AC6.OUT
-1
14
78
0
*/

- Giải thích test ví dụ:
o Với test ví dụ 1: Anh Khôi có 2 cục kẹo, nhưng thật đáng tiếc là cả 2 viên kẹo này đều giống màu nhau. Do đó dù rằng chỉ có duy nhất 1 bạn, anh Khôi cũng không
thể đưa 2 cục kẹo này cho bạn í được.
o Với test ví dụ 2: Ta có thể chia 4 cục kẹo này cho 2 người được, mỗi người được 2 viên, một viên màu số 1 và một viên màu số 2. Vì anh Khôi chia hết 4 cục nên
tổng độ ngon lớn nhất chính là tổng độ ngon của 4 viên.
o Với test ví dụ 3: Ta có toàn bộ 8 viên kẹo này màu đều khác nhau, do đó để chia cho 3 bạn thì ta cần chọn 6 viên có độ ngon lớn nhất. Tổng độ ngon sẽ là: 21 +
17 + 15 + 10 + 9 + 6 = 78.
o Với test ví dụ 4: Dù có thể chia kẹo được, nhưng vì không có bạn nào đậu đại học nên tổng độ ngon lớn nhất là 0.
- Bài toán sẽ được chia làm 2 Dataset:
o Small Dataset (13 điểm): 0 ≤ 2 * K ≤ N ≤ 10.
o Large Dataset (19 điểm): 0 ≤ 2 * K ≤ N ≤ 50.
o Trong mọi dataset, ta luôn có 1 ≤ ci, vi ≤ 50.

- Giới hạn dữ liệu:
o 5s / Dataset.
o 512Mb / Dataset.
