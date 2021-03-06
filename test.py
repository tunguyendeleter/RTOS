x = 0 
a = list(map(int,input("\nEnter the numbers : ").strip().split())) 
print("List is ", a)

for i in a:
    count = 0
    for y in range(1,i + 1):
        if i%y == 0 and i%2 == 0:
            count += 1
    if count == 2:
        x += 1

print(x)


        
   