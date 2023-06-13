def main():
    n = int(input())
    arr = list(map(int, input().split()))
    color = [-1 for _ in range(n)]
    ans = True
    for i in range(0, n):
        if color[i] == -1:
            color[i] = 1    
        for j in range(i + 1, n):
            if arr[i] > arr[j]:
                if color[i] == color[j]:
                    ans = False
                else:
                    color[j] = 1 - color[i]
    if ans:
        for i in range(n):
            print(color[i], end='')
        print()
    else:
        print("No")

for _ in range(int(input())):
    main()