HT=[ [] for _ in range(10)]
print("Blank" ,HT)

def insert(HT,key,value):
    loc=key%10
    bucket=HT[loc]
    exist=False
    for i,kv in enumerate(bucket):
        k,v=kv
        if key==k:
            exist=True
            break
        
    if exist==True:
        bucket[i]=(key,value)
    else:
        bucket.append((key,value))
        
def delete(HT,key):
    loc=key%10
    bucket=HT[loc]
    exist=False
    for i,kv in enumerate(bucket):
        k,v=kv
        if key==k:
            exist=True
            break
        
    if exist==True:
        del bucket[i]
        print("Element Deleted")
    else:
        print("Element to be deleted not found")
        
def search (HT,key):
    loc=key%10
    bucket=HT[loc]
    exist=False
    for i,kv in enumerate(bucket):
        k,v=kv
        if key==k:
            exist=True
            break
        
    if exist ==True:
        print("element found i.e",v )
    else:
        print("Element not found")
        
def display(HT):
    for i,bucket in enumerate (HT):
        print("bucket",i,"Elements",bucket)
        
        
while True:
    print("\n 1.Insert")
    print("\n 2.delete")
    print("\n 3.search")
    print("\n 4.display")
    print("5.exit")
    
    ch=int(input("Enter choice"))

    if (ch==1):
        key=int(input("Enter the key"))
        value=input("Enter value")
        insert(HT,key,value)
    elif(ch==2):
        key=int(input("enter the key you want to delete"))
        delete(HT,key)
    elif(ch==3):
        key=int(input("enter the element you want to search"))
        search(HT,key)
    elif(ch==4):
        display(HT)
    elif (ch==5):
        break
    else:
        print("Wrong choice")
        
        
