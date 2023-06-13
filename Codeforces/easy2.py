n = int(input())

for i in range (1, n):
    for j in range (1, 2*n-1 +1):
        if j == n or j == (n-i+1) or j == (n+i-1):
            print("*", end = "")
        else:
            print(" ", end = "")
    print()

for i in range (n-1, 2*n-1 +1 ):
    for j in range (1, 2*n-1 + 1):
        if j == n or j == (n-i+1) or j == (n+i-1):
            print("*", end = "")
        else:
            print(" ", end = "")
    print()    

