x, y = map(int, input("Enter x and y: ").split())
z=0
for i in range(x):
    for j in range(y):
        if i % 2 == 0:
            print("#", end="")
        elif i % 2 != 0 and j ==y-1 and z==0:
            print("#", end="")
        elif i % 2 != 0 and j <y and z==0 :
            print(".", end="")
    print() 