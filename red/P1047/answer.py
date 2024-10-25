line1 = input().split()
road = list()
for i in range(int(line1[0])+1):
	road.append(True)
for i in range(int(line1[1])):
	line = input().split()
	for j in range(int(line[1])-int(line[0])+1):
		if road[int(line[0])+j]==True:
			road[int(line[0])+j]=False
count = 0
for i in range(int(line1[0])+1):
	if road[i]==True:
		count += 1
print(count)
