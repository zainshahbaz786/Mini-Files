# for all type of the file handling...



"""R: Open the file for read only
R+: Open the file for reading and writing only
W: Open the file for writing only
W+: Open the file for both reading and writing 
A: Open the file for appending
A+: Open the file for appending and reading"""




x=1
while x<5:
    
    a=int(input("What do you want to do \n1.Create file\t2.Open file\t3.For appending the file\nEnter your option: "))
    if a==1:
        #in  1 I will show u how to write file...
        print("Enter the file name with .txt format: ")
        fileh=open(input(),"w")
        fileh.write("i am writing whatever I want to write inthis file...")
        fileh.close()
    elif a==2:
        #in 2, i will show you how to read file
        fileh=open("zain.txt","r+")
        word=fileh.read(57)
        print(word)
        fileh.close()
    elif a==3:
        #i will tell you how to append a file
        fileh=open("areesha.txt","a")
        fileh.write("i am appedig this text in the foemat")
        fileh.close()






