x, y = map(int, input("Enter x and y: ").split())
z=1
for i in range(x):
    for j in range(y):
        if i % 2 == 0:
            print("#", end="")
        if(z==1):
            if i % 2 != 0 and j ==y-1 :
                print("#", end="")
                if j==y-1:
                    z=0
            elif i % 2 != 0 and j <y  :
                print(".", end="")
        elif(z==0):
            if i % 2 != 0 and  j ==0  :
                print("#", end="")          
            elif i % 2 != 0 and j  <=y :
                print(".", end="")
                if j==y-1:
                    z=1
    
                
    print()