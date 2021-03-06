#Viết một chương trình chấp nhận đầu vào là một chuỗi các từ tách biệt bởi khoảng trắng, loại bỏ các từ trùng lặp,
sắp xếp theo thứ tự bảng chữ cái, rồi in chúng.
print('Enter your string:')
r = []
x = input()
x = str(x).split(" ")
x = sorted(x)
for i in range(len(x)):
    if i == 0:
        r.append(x[i])
    else:
        if x[i] != x[i - 1]:
            r.append(x[i])
print(" ".join(r))