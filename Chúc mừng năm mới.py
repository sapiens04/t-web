# Chúc mừng năm mới
print("Chúc mừng năm mới!")

# Lời chúc tết
print("Chúc mừng Tết Nguyên Đán, xin được gửi tới bạn những lời chúc tài lộc, sức khỏe và hạnh phúc trong năm mới.")

# Lời chúc tết mới
print("Tết đến rồi, chúc bạn và gia đình một năm mới an lành, hạnh phúc và thành công.")
from datetime import datetime, timedelta

# Lấy thời gian hiện tại
now = datetime.now()

# Tạo đối tượng datetime cho Tết Nguyên Đán
tet = datetime(now.year, 1, 1)

# Kiểm tra nếu Tết Nguyên Đán đã qua thì tăng năm lên 1
if now > tet:
    tet = tet.replace(year=tet.year + 1)

# Tính thời gian còn lại đến Tết Nguyên Đán
time_to_tet = tet - now

# In ra thời gian còn lại đến Tết Nguyên Đán
print("Còn " + str(time_to_tet.days) + " ngày đến Tết Nguyên Đán.")

# In ra lời chúc mừng năm mới
print("Chúc mừng năm mới!")
