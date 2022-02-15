#3rd assignment
print("                     1st question")

str1=input("enter a string: ").lower().split()
if len(str1)==1:
    str1=str1[0]
repeat={}
for a in str1:
    if a in repeat:
        repeat[a]+=1
    else:
        repeat[a]=1
for a in repeat:
    print("occurance of %s in string is %d"%(a,repeat[a]))
    
print("                     1st question")

print("                     2nd answer")
date=int(input("enter date between 1 and 31: "))
month=int(input("enter the month between 1 and 12: "))
year=int(input("enter year between 1800 and 2025: "))
if((1<=month<=12) and (1<=date<=31) and (1800<=year<=2025)):
    if ((year%4==0) and (year%100!=0)) or (year%400==0):
        if month==2:
            date1=29
        elif month in(1,3,5,7,8,10,12):
            date1=31
        else:
            date1=30
    else:
        if month==2:
            date1=28
        elif month in(1,3,5,7,8,10,12):
            date1=31
        else :
            date1=30
    if date==31 and month==12 :
        date=1
        month=1
        year=year+1   
    elif date1==date:
        month=month+1
        date=1
    else:
        date=date+1
        

    print("next date is day/month/year : ",date, month ,year)
else:
    print(" date or month or year is out of range")

print("                    3rd answer")
list1=[]
x=1
n=int(input("enter number of elements : "))
while(x<=n):
    p=int(input("enter number: "))
    t=(p,p*p)
    list1.append(t)
    x=x+1
print(list1)

print("                    4th answer")
gp=int(input("enter grade points: "))
if gp==10:
    x="A+"
    y="excellent performance"
elif gp==9:
    x="A"
    y="excellent"
elif gp==8:
    x="B+"
    y="very good"
elif gp==7:
    x="B"
    y="Good"
elif gp==6:
    x="C+"
    y="Average"
elif gp==5:
    x="C"
    y="Below Average"
elif gp==4:
    x="D"
    y="Poor"
else:
    x="out of range"
print("your grade is %s and %s"%(x,y))

print("                    5th answer")
n=6
for i in range(n):
    for j in range(i):
        print(' ', end='')
    for j in range(2*(n-i)-1):
        print(chr(65 + j), end='')
    print()
    
print("                    6th answer")
dic ={ }
condition=True
str1="Y"
while condition:
    if str1.lower()=="y":
        name=str(input("enter name of student: "))
        SID=int(input("enter SID of student(sid should be unique): "))
        dic[SID]=name
        str1=input(" enter y for entering more details and n to stop: ")
        condition= True
    else :
        condition=False
print("                    6th(part(a))")
print(dic)

print("                    6th(part(b))")
print("value sorted dictionary is: ",sorted(dic.values()))

print("                    6th(part(c))")
print("key sorted dictionary is: ",sorted(dic.keys()))

print("                    6th(part(d))")
SID_find=int(input("enter the sid of student to find the details: "))
if SID_find in dic.keys():
    print("name of the student is: ",dic[SID_find])
else:
    print("SID not in data")



print("                    7th answer")
n=int(input("enter number of terms you want to print: "))
a=0
b=1
sum1=a+b
if n==1:
        print(a)
else:
    print(a)
    print(b)
    for num in range(2,n):
        c=a+b
        print(c)
        a=b
        b=c
        sum1=sum1+c
    print("average of fibonacci is: ",(sum1/n))

print("                    8th answer")
Set1={1, 2, 3, 4, 5}
Set2={2, 4, 6, 8}
Set3={1, 5, 9, 13,17}
print("                    8(a)answer")
Set_a=Set1^Set2
print("new set of elements that are in Set1 and Set2 but not both: ",Set_a)


print("                    8(b)answer")
set_b=Set1^Set2^Set3
print("new set of elemnts that are only in one of the three sets Set1,Set2,Set3: ",set_b)
print("                    8(c) answer")
set_c=(Set1|Set2|Set3) -(Set1&Set2&Set3) -(Set1^Set2^Set3)
print("set of elements only present in two sets are: ",set_c)
print("                    8(d) answer")
set_p=set()
for x in range(1,11):
    set_p.add(x)
set_y=set_p-Set1
print("set of integers in range 1 to 10 that are not in Set1: ",set_y)
print("                    8(e) answer")
set_o=set()
for x in range(1,11):
    set_o.add(x)
    set_op=set_o-(Set1|Set2|Set3)
print("set of all integers in the range 1 to 10 not in set1,se2,set3: ",set_op)

