/*
Bài 4. Trò chơi (50 điểm)
Khi dạy về thuật toán, Nam thường tổ chức các trò chơi, dưới đây là một trò chơi có nhiều chiến thuật chơi tương ứng 
với nhiều chiến lược thiết kế thuật toán.
Ban đầu, Nam tạo một dãy số nguyên dương a1, a2, ... ,an tương ứng với n lượt chọn. Một người chơi sẽ thực hiện đúng 
n lượt chọn, với lượt chọn thứ i (1<=i<=n ) người chơi sẽ chọn số nguyên bi mà bi <= ai. Kết thúc n lượt chọn nếu với
mọi i đều không tồn tại l, r mà 1 <= l < i < r <= n và bl > bi > br thì người chơi giành chiến thắng và nhận được số 
kẹo là tổng giá trị bi ở các lượt, ngược lại, người chơi sẽ không nhận được kẹo.

Yêu cầu: Cho dãy số nguyên dương a1, a2, ..., an, hãy giúp Nam tính số kẹo ít nhất cần chuẩn bị để trong mọi trường 
hợp đều có đủ số kẹo cho một người chơi.

Dữ liệu: Vào từ thiết bị vào chuẩn:
- Dòng đầu tiên chứa số nguyên n;
- Dòng tiếp theo chứa n số nguyên dương cách nhau bởi dấu cách a1, a2, ... ,an (ai <= 10^9).

Kết quả: Ghi ra thiết bị ra chuẩn một số nguyên là số kẹo ít nhất mà Nam cần chuẩn bị để trong mọi trường hợp đều đủ 
số kẹo cho một người chơi.

Ví dụ:
Dữ liệu vào			Kết quả ra
4						        5
1 2 1 2

Giới hạn:
Subtask 1 (60% số điểm): n <= 5000
Subtask 2 (40% số điểm): n <= 5 x 10^5.
*/
