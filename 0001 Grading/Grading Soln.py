a = int(input())
b = int(input())
c = int(input())
x = a+b+c
if x>=80 and x<=100 :
    print("A")
elif (x>=75 and x<=79):
    print("B+")
elif (x>=70 and x<=74):
    print("B")
elif (x>=65 and x<=69):
    print("C+")
elif (x>=60 and x<=64):
    print("C")
elif (x>=55 and x<=59):
    print("D+")
elif (x>=50 and x<=54):
    print("D")
elif (x>=0 and x<=49) :
    print("F")
