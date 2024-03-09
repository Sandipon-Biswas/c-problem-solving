t = int(input())

for _ in range(t):
    n = int(input())
    v = list(map(int, input().split()))
    flag = 1
    two = 0
    
    for i in range(n):
        if v[i] == 2:
            two += 1
        
    two2 = 0
    
    for i in range(n):
        if v[i] == 2:
            two2 += 1
        if two2 * 2 == two:
            print(i + 1)
            flag = 0
            break
    
    if flag == 1:
        print(-1)
