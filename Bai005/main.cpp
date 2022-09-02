/*
Bài 5. Đèn trang trí (30 điểm)
Trong buổi lễ khai mạc kỳ thi Olympic Tin học sinh viên Việt Nam năm 2017, tại hội trường của trường Đại học Sư phạm Thành phố Hồ Chí Minh, Ban tổ chức đã chuẩn bị một hệ thống gồm n đèn để tạo hiệu ứng ánh sáng trong thời gian diễn ra buổi lễ. Các đèn đươc đánh chỉ số từ 1 đến n, mỗi đèn có 3 trạng thái, trạng thái sáng màu xanh hoặc sáng màu đỏ hoặc tắt. Ban đầu tất cả các đèn đều ở trạng thái tắt. Theo kịch bản sẽ có t lần thay đổi trạng thái của các đèn, lần thay đổi thứ k (k = 1,2, … ,t) sẽ thay đổi trạng thái của tất cả các đèn có chỉ số từ ak đến bk (1 <= ak <= bk <= n). Với một đèn khi được thay đổi trạng thái sẽ thay đổi theo nguyên tắc như sau: nếu đèn đang ở trạng thái tắt sẽ chuyển sang trạng thái sáng màu xanh, còn nếu đang ở trạng thái sáng màu xanh thì chuyển sang trạng thái sáng màu đỏ, nếu ở trạng thái sáng màu đỏ thì chuyển về trạng thái tắt. 

Ví dụ, nếu hệ thống gồm có 5 đèn và ban đầu đều ở trạng thái tắt, kịch bản gồm 3 thay đổi trạng thái các đèn, lần 1 thay đổi trạng thái các đèn có chỉ số từ 2 đến 4, lần 2 và lần 3 đều thay đổi trạng thái các đèn có chỉ số từ 3 đến 5. Khi đó, sau 3 lần thay đổi trạng cái của 5 đèn lần lượt là: tắt, sáng màu xanh, tắt, tắt, sáng màu đỏ.

Kết thúc buổi lễ, Ban tổ chức muốn thống kê số đèn ở trạng thái tắt sau t lần thay đổi trạng thái của các đèn theo kịch bản.

Yêu cầu: Cho biết kịch bản gồm t lần thay đổi trạng thái của các đèn, lần thay đổi thứ k (k = 1,2, … ,t) sẽ thay đổi trạng thái của tất cả các đèn có chỉ số từ ak đến bk. Hãy cho biết, khi kết thúc buổi lễ thì có bao nhiêu đèn ở trạng thái tắt.

Dữ liệu: Vào từ file văn bản DLIGHT.INP có khuôn dạng sau:
- Dòng đầu chứa hai số nguyên dương n , t;
- Dòng thứ k trong t dòng tiếp theo chứa hai số nguyên dương ak, bk (1 <= ak <= bk <= n) .
Kết quả: Ghi ra file văn bản DLIGHT.OUT gồm một số nguyên là số lượng đèn tắt khi buổi lễ kết thúc.

Ví dụ:
DLIGHT.INP 	DLIGHT.OUT 
5 3		3
2 4
3 5
3 5

DLIGHT.INP 	DLIGHT.OUT
1000 1		2
2 999

Chú ý:
- Có 25% số test có n <= 10^6 ; t = 1;
- Có 25% số test khác có n <= 10^3; t <= 10^5
- Có 40% số test khác có n <= 106; t <= 10^5
- Có 10% số test còn lại có n <= 10^9; t <= 10^5
*/
