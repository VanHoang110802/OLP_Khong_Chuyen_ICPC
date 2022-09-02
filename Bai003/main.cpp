/*
Bài 3. Khóa bảng (50 điểm)
Công ty của Nam vừa đưa ra thị trường một loại khóa có dạng bảng hình chữ nhật kích thước h x w.
Trên bảng có một số ô là phím bấm, việc mở khóa được thực hiện bằng cách bấm liên tiếp k phím ở k ô khác nhau và 
k ô này phải liên thông với nhau. Một nhóm các ô gọi là liên thông nếu từ một ô có thể tới các ô còn lại bằng dãy
các ô kề cạnh trong nhóm. 
Độ tin cậy của khóa phụ thuộc vào số lượng cách chọn k ô liên thông. Hai cách chọn gọi là khác nhau nếu tồn tại ít
nhất một ô thuộc cách chọn này nhưng không thuộc cách chọn kia. 
Để tính số lượng cách chọn, khóa được mô tả bằng lưới ô vuông kích thước h x w ô, ô là phím bấm được biểu diễn bằng
kí tự '#', các ô còn lại được biểu diễn bằng kí tự '.'.
Ví dụ, với k = 7 và bảng khóa như hình dưới, có 3 cách chọn 7 ô thông.
.#....
##.##.
..#.#.
.####.
.....#

Yêu cầu: Cho ba số nguyên h, w, k và bảng mô tả phím bấm. Hãy đếm số cách chọn k ô liên thông.
Dữ liệu: Vào từ thiết bị vào chuẩn:
- Dòng đầu tiên chứa ba số nguyên h, w và k (1 <= h <= 30);
- Mỗi dòng trong h dòng sau chứa xâu có độ dài w mô tả.

Kết quả: Ghi ra thiết bị ra chuẩn một số nguyên là số cách chọn đếm được.
Ví dụ:
Dữ liệu vào			Kết quả ra
5 6 7					3
.#....
##.##.
..#.#.
.####.
.....#

Giới hạn:
Subtask 1 (50% số điểm): k <= 3
Subtask 2 (50% số điểm): k <= 10.
*/
