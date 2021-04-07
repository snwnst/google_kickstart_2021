from math import ceil

T = int(input())
for t in range(T):
    N, X = map(int,input().split())
    arr = list(map(int,input().split()))
    queue = []
    for n in range(N):
        times = ceil(arr[n]/X)
        queue.append([n+1, times])
    outs = ''
    ax = sorted(queue, key=lambda x: x[1])
    for x, y in ax:
        outs += '{} '.format(x)
    print('Case #{}: {}'.format(t+1,outs))