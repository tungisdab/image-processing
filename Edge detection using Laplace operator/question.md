Viết chương trình C++/Java/Python phát hiện các biên trong ảnh sử dụng toán tử Laplace.

Input cho kích cỡ ảnh (ảnh vuông), tiếp theo là ma trận cấp xám của ảnh.

Output lấy giá trị tuyệt đối để đảm bảo không có mức xám âm.

Input format:

case=1

input=

5

150 150 150 150 150

150 100 100 100 150

150 100 50 100 150

150 100 100 100 150

150 150 150 150 150



Output format:

0 0 0 0 0

0 100 0 100 0

0 0 200 0 0

0 100 0 100 0

0 0 0 0 0