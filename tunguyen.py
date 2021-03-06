print('Enter your string:')
r = []
x = input()
x = str(x).split(" ")
x = sorted()
for i in range(len(x)):
    if i == 0:
        r.append(x[i])
    else:
        if x[i] != x[i - 1]:
            r.append(x[i])
print(" ".join(r))