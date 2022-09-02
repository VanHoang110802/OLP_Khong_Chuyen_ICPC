/*
Bài 6. Camera quan sát (30 điểm)
Có n camera quan sát, đánh số tuần tự từ 1 đến n, được đặt lần lượt thẳng hàng trên đường cao tốc từ Tây sang Đông. Camera thứ i được đặt ở độ cao hi và hướng về một trong hai hướng: Tây hoặc Đông.

Camera thứ i có thể quan sát được camera thứ j nếu camera thứ i nhìn về phía camera thứ j và không có bất kỳ camera nào ở giữa hai camera này có độ cao vượt quá độ cao của camera thứ j.

Yêu cầu: Cho biết độ cao và hướng nhìn của n camera. Hãy cho biết mỗi camera có thể quan sát được bao nhiêu camera khác.

Dữ liệu: Vào từ file văn bản CAMERA.INP có khuôn dạng sau:
- Dòng đầu chứa số nguyên dương n;
- Dòng thứ hai gồm n số nguyên dương h1, h2, … , hn là độ cao của mỗi camera (1 <= hk <= 10^9 với 1 <= k <= n);
- Dòng thứ ba chứa một xâu gồm n ký tự cho biết hướng nhìn của các camera với quy ước: ‘W’ là nhìn sang hướng Tây, ‘E’ là nhìn sang hướng Đông.

Kết quả: Ghi ra file văn bản CAMERA.OUT trên một dòng n số tự nhiên, số thứ k cho biết số lượng camera mà camera thứ k (k = 1,2, … ,n) có thể quan sát được.

Ví dụ:
CAMERA.INP		CAMERA.OUT
5			 3 2 1 2 0
1 2 2 3 1
EEWWE

Chú ý:
- Có 40% số test có 𝑛 <= 10^2
- Có 20% số test có 𝑛 <= 10^3
- Có 40% số test còn lại có 𝑛 <= 10^5
*/
