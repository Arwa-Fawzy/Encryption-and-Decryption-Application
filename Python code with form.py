from tkinter import *
import string

arwa=""
def encry(arr, c):
    for i in range(26):
        if arr[i] == c:
            idx = i
            break
    return idx

def solve(input_str):
    
    encrypt, decrypt = "", ""
    count=0 
    key = 11
    letters = list(string.ascii_lowercase)
    for i in range(len(input_str)):
        encrypt += str(encry(letters, input_str[i])) + '.'
    print("The encrypted message value is: " + encrypt)
    j = 0
    for i in range(len(encrypt)):
        if encrypt[i] == '.':
            sub = encrypt[j:i]
            j = i + 1
            #print(sub)
            x = int(sub)
            ans = (x + key) % 26
            decrypt += letters[ans]
        else:
            count += 1
    print("The ciphertext message is: " + decrypt)
    return decrypt

root = Tk()
root.geometry("300x300")
root.title(" Q&A ")

def Take_input():
	INPUT = inputtxt.get(1.0, "end-1c")
	Output.insert(END, solve(INPUT))
	
	
l = Label(text = "Write the word that you want to encrypt")
inputtxt = Text(root, height = 10,
				width = 25,
				bg = "light yellow")

Output = Text(root, height = 5,
			width = 25,
			bg = "light cyan")

Display = Button(root, height = 2,
				width = 20,
				text ="Encrypt",
				command = lambda:Take_input())

l.pack()
inputtxt.pack()
Display.pack()
Output.pack()

mainloop()
