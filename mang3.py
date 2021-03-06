a = list(map(int,input("\nEnter the numbers : ").strip().split())) 
print("List is ", a)
for i in range(0,len(a)):
    if a[i] < 0:
        a[i] = 0
print(a)