print("                    1st answer")
def tower_of_hanoi(n,source,des,aux):
    if n==1:
        print("move the disk 1 from source %s to destination %s"%(source,des))
        return
    tower_of_hanoi(n-1,source,aux,des)
    print("move the disk %s from source %s to destination %s"%(n,source,des))
    tower_of_hanoi(n-1,aux,des,source)
n=3
tower_of_hanoi(n,'a','b','c')
print("                    2nd answer(a)")
n=int(input("enter number of rows"))
for line in range(1, n + 1):
    print('  ' * (n - line), end='')
    x = 1
    for i in range(1, line + 1):
        print(x, end='   ')
        x = x * (line - i) // i
    print()
print("")
print("                    2nd answer(b)")
n=int(input("enter no of rows: "))
def pascal(n, num=n):
    if n == 0:
        return
    pascal(n-1,num)
    print('  ' * (num - n),end='')
    first_num = 1
    for i in range(1, n + 1):
        print(first_num,end='   ')
        first_num =first_num*(n - i) // i
    print()

pascal(n)
print("                    3rd answer")
a=int(input("enter first number: "))
b=int(input("enter second number: "))
x=divmod(a,b)
print("quotient and remainder of the numbers are: ",x)

print("                     part(a)")
c=callable(x)
print(c)

print("                     part(b)")
if all(x!=0 for i in x):
    print("all the values are non zero")
else:
    print(" all the values are not non zero")
    
print("                     part(c)")
tup1=(4,5,6)
new_x=x+tup1
new_output=sorted(list((i for i in new_x if i>4)))
print("values greater than 4 are",new_output)
print(new_output)
print("                     part(d)")
set1=set(new_output)
print("                     part(e)")
set2=frozenset(set1)
print("after making set immutable:",set2)
max_set2=max(set2)
print("maximum value of the set is:", max_set2)
print("                      part(f)")
print("hash value of set considering it to be an integer:" ,hash(max_set2))
print("hash value of set considering it to be a string: ",hash(str(max_set2)))
print("                    4th question")
class Students:
    def __init__(self,name,sid):
        self.name=name
        self.sid=sid
    def __del__(self):
        print("object destroyed")

student1=Students("Rahul", 21105058)
print("object is created")
print("student's name: %s and sid is: %d" %(student1.name,student1.sid))
del student1
print("                    5th answer")
class Employees:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    def __del__(self):
        print("record of employee %s deleted"%(self.name))

employee_a=Employees("Mehak",40000)
employee_b=Employees("Ashok",50000)
employee_c=Employees("Viren",60000)

employee_a.salary=70000
print("updated salary of employee %s is %d" %(employee_a.name,employee_a.salary))
del employee_c
print("                    6th answer")
word_george=input("enter word said by george:")
word_barbie=input("enter word that barbie uttered:")
def anagrams(x):
    if x=="":
        return[x]
    req=[]
    for i in anagrams(x[1:]):
        for pos in range(len(i)+1):
            req.append(i[:pos]+x[0]+i[pos:])
    return req
Anag=anagrams(word_george)
pop=False
for i in Anag:
    if i==word_barbie and pop==False:
        print("barbie and george are best friends")
        pop=True
if pop== False:
    print("george and barbie's freindship is fake")


