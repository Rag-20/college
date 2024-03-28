file1 = open("text.txt","a+")
file1.write("\n...20...")
file1.seek(0)
print(file1.read())
file1.close()

