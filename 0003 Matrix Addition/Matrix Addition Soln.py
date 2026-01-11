m,n = map(int,input().split())
mylist = []
for i in range(m):
  inner = []
  text =input().split()
  for j in range(n):
    inner.append(int(text[j]))
  mylist.append(inner)
#print(mylist)
mylist2 = []
for i in range(m):
  inner = []
  text =input().split()
  for j in range(n):
    inner.append(int(text[j]))
  mylist2.append(inner)


for j in range(m):
  for i in range(n):
    print(mylist[j][i]+mylist2[j][i],end=' ')
  print()
