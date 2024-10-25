count = input()
light = set()
for i in range(int(count)):
    list = input().split()
    a = float(list[0])
    cout = int(list[1])
    for i in range(cout):
        output = int(a * (i + 1))
        if output in light:
            light.discard(output)
        else:
            light.add(output)
for i in light:
    print(i)
