/*
Bài 7. Tam giác vuông (30 điểm)
Một trò chơi trí tuệ dành cho trẻ em có liên quan đến tam giác vuông như sau: Với hai số nguyên dương a, b liệu có thể chọn được một số nguyên dương c để ba số nguyên dương a, b, c là ba cạnh của một tam giác vuông hay không?
Ví dụ, nếu a = 3, b = 4 thì tồn tại số nguyên dương c = 5 để a, b, c là ba cạnh của một tam giác vuông, hoặc nếu a = 12, b = 13 thì tồn tại số nguyên dương c = 5 để a, b, c là ba cạnh của một tam giác vuông, còn nếu a = 1, b = 1 thì không tồn tại số nguyên dương c nào để a, b, c là ba cạnh của một tam giác vuông.

Yêu cầu: Cho n cặp số nguyên dương ai, bi (i = 1,2, … , n), với mỗi cặp hãy kiểm tra xem có tồn tại số nguyên dương ci để ai, bi, ci là ba cạnh của một tam giác vuông hay không?

Dữ liệu: Vào từ file văn bản RTRI.INP có dạng:
- Dòng đầu chứa số nguyên 𝑛;
- Dòng thứ i trong n dòng tiếp theo chứa hai số nguyên dương ai, bi (ai, bi <= 10^9);

Kết quả: Ghi ra file văn bản RTRI.OUT gồm 𝑛 dòng, dòng thứ 𝑖 ghi số 1 nếu tồn tại số nguyên dương ci để ai, bi, ci là ba cạnh của một tam giác vuông, ghi số 0 trong trường hợp ngược lại.

Ví dụ:
RTRI.INP 		RTRI.OUT
3		1
3 4		0
1 1		1
12 13

Chú ý:
- Có 50% số test có 𝑛 = 1;
- Có 50% số test còn lại có 𝑛 <= 10^5
*/
