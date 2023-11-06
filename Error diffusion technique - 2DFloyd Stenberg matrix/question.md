Viết chương trình C++/Java/Python thực hiện kỹ thuật error diffusion 2D trên ảnh và cho ảnh kết quả.

Đầu vào cho cỡ ảnh vuông, sau đó là ma trận giá trị mức xám của ảnh.

Giả thiết ảnh có 256 cấp xám, ngưỡng là 127, ma trận khuếch tán lỗi là ma trân Floyd - Stenberg.

Input format:

case=1

input=

4

50 150 200 50

75 180 30 220

160 40 90 120

210 70 250 25



Output format:

0 255 255 0

0 255 0 255

255 0 0 0

255 0 255 0