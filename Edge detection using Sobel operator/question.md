Viết chương trình C++/Java/Python phát hiện các biên trong ảnh sử dụng toán tử Sobel.

Input cho kích cỡ ảnh (ảnh vuông), tiếp theo là ma trận cấp xám của ảnh.

Đầu ra là ảnh gradient tổng tính theo công thức G = sqrt(Gx^2 + Gy^2).

Input format:

case=1

input=

8

50 50 50 50 50 50 50 50

50 50 50 50 50 50 50 50

0 0 0 0 0 0 0 0

50 50 50 50 50 50 50 50

50 50 50 50 50 50 50 50

50 50 50 50 50 50 50 50

50 50 50 50 50 50 50 50

50 50 50 50 50 50 50 50



Output format:

0 0 0 0 0 0 0 0

0 200 200 200 200 200 200 0

0 0 0 0 0 0 0 0

0 200 200 200 200 200 200 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0

0 0 0 0 0 0 0 0