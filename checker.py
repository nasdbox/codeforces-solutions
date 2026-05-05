t = int(input())
l_b = []

for _ in range(t):
    a = int(input())
    b = list(map(int, input().split()))
    l_b.append(b)

for j in range(t):
    l_b[j] = [0] + l_b[j]
    n = len(l_b[j]) - 1

    while True:
        swapped = False
        k = 1


        while k <= n:
            if 2*k <= n and l_b[j][k] > l_b[j][2*k]:
                l_b[j][k], l_b[j][2*k] = l_b[j][2*k], l_b[j][k]
                swapped = True
            k += 1


        if l_b[j] == sorted(l_b[j]):
            print("YES")
            break
        if not swapped:
            print("NO")
            break
