/*
Bài 8. Trò chơi đẩy bi (20 điểm)
Trò chơi đẩy bi là một trò chơi trên lưới ô vuông vô hạn. Các dòng và cột của lưới được đánh số theo thứ tự bởi các số nguyên … -3 -2 -1 0 1 2 3 … Các cột được đánh số theo thứ tự từ trái sang phải, còn các dòng theo thứ tự từ dưới lên trên. Ô nằm trên giao của dòng x và cột y được gọi là ô (x, y). Khi bắt đầu chơi, người chơi được cho một số nguyên dương 𝑘 và trên lưới sẽ xuất hiện một số viên bi, mỗi viên bi sẽ nằm gọn trong một ô và không có ô nào chứa nhiều hơn một viên bi. Người chơi sẽ phải chọn k ô phân biệt trên lưới làm ô hố, nếu ô được chọn làm ô hố có chứa bi thì viên bi đó sẽ biến mất. Sau đó, mỗi bước, người chơi có thể chọn một ô chứa bi và đẩy viên bi đó sang một trong bốn ô chung cạnh (hiện đang không có 
bi), nếu viên bi bị đẩy vào một trong k ô hố thì viên bi này sẽ biến mất. Nhiệm vụ của người chơi là đẩy hết tất cả các viên bi trên lưới vào hố với số bước ít nhất.

Yêu cầu: Cho biết vị trí các ô có chứa bi. Hãy chọn k ô tự do là ô hố và tìm cách đẩy tất cả các viên bi trên lưới vào hố với số bước ít nhất.

Dữ liệu: Vào từ file văn bản BGAME.INP bao gồm:
- Dòng đầu ghi hai số nguyên dương n,k (2 <= n <= 12);
- Dòng thứ i (i = 1,2, … , n) trong 𝑛 dòng tiếp theo, mỗi dòng chứa hai số nguyên xi, yi mô tả ô (xi, yi) là ô chứa bi.

Kết quả: Ghi ra file văn bản BGAME.OUT gồm một dòng chứa một số nguyên là số bước ít nhất cần thiết để đẩy tất cả các viên bi trên lưới vào hố. 

Ví dụ:
BGAME.INP 			BGAME.OUT
5 1				16
0 0
0 4
4 0
4 4
2 2

Chú ý:
- Có 20% số lượng test thỏa mãn điều kiện: k = 1 và các số xi, yi là số nguyên dương 
không vượt quá 100;
- Có 20% số lượng test khác thỏa mãn điều kiện: k = 2 và các số xi, yi là số nguyên dương không vượt quá 100;
- Có 20% số lượng test thỏa mãn điều kiện: 𝑘 = 1 và các số xi, yi là số nguyên có trị 
tuyệt đối không vượt quá 10^6;
- Có 20% số lượng test khác thỏa mãn điều kiện: 𝑘 = 2 và các số xi, yi là số nguyên có trị tuyệt đối không vượt quá 10^6;
- Có 20% số lượng test khác thỏa mãn điều kiện: 𝑘 ≤ 𝑛 các số xi, yi là số nguyên có trị tuyệt đối không vượt quá 10^6

*/
