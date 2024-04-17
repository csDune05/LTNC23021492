1. output: *p3 = B, p3 = 0x5678
           *p3 = A, p3 = 0x1234
           *p1 = B, p1 = 0x1234

2.  đáp án: *p = 5 

3. Giải thích lỗi sau:
char c = ‘C';
double *p = &c;

lỗi xảy ra khi ở double *p = &c; vì c được khai báo kiểu char, p là biến con trỏ trỏ tới giá trị double mà ở dòng này lại gán một địa chỉ của biến kiểu char cho biến con trỏ kiểu double * nên không tương ứng.