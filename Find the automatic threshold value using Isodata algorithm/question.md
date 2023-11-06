Viết chương trình C++/Java/Python tính toán ngưỡng tự động cho ảnh xám sử dụng thuật toán Isodata.

Input cho kích cỡ ảnh (ảnh vuông), tiếp theo là ma trận cấp xám của ảnh.

Khởi tạo ngưỡng t0 bằng trung bình có trọng số là histogram đã chuẩn hóa (t0=sum(i*p[i])/sum(p[i] trên toàn giải các mức cường độ sáng của ảnh); sai số cho cố định epsi=0.001.

Output lấy giá trị nguyên của ngưỡng.

Input format:

case=1

input=

5

100 120 110 95 105

90 100 115 105 98

105 110 105 98 100

80 85 95 100 110

120 125 130 125 120

Output format:

Isodata threshold = 128