import numpy as np

def process():
    while True:
        try:
            n, m = [int(x) for x in input().split()]
            break
        except:
            continue
    gray_level = int(input())

    inp = []
    for i in range(0, n):
        inp.extend([int(x) for x in input().split()])

    cnt = {element: 0 for element in range(0, gray_level)}
    for i in inp:
        cnt[i] += 1
    for i in range(1, len(cnt)):
        cnt[i] = cnt[i] + cnt[i-1]
    arr = np.array(inp).reshape(n, m)
    for a in arr:
        for b in a:
            print(round((gray_level-1) * (cnt[b] / (n*m))), end=" ")
        print()

if __name__ == "__main__":
    process()
