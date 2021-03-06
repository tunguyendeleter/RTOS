print('Enter your name:')       
dung = 0
sai = 0
x = input()
x = str(x).split(" ")
for i in x:
    if i[0:1] == i[0:1].upper():
        dung += 1
    else:
        sai += 1
print(str(dung) + " dung, " + str(sai) + " sai")
