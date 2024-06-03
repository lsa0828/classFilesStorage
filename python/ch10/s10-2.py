import random
from tkinter import *

btnList=[None]*9
fnameList=["froyo.gif", "gingerbread.gif", "honeycomb.gif", "icecream.gif",
           "jellybean.gif", "kitkat.gif", "lollipop.gif", "marshmallow.gif", "nougat.gif"]
photoList=[None]*9
i, k, n=0, 0, 0
xPos, yPos=0, 0
numList=[]
copyList=[]

window=Tk()
window.geometry("210x210")

for i in range(0, 9):
    photoList[i]=PhotoImage(file="gif/"+fnameList[i])
    btnList[i]=Button(window, image=photoList[i])
    
for i in range(0, 3):
    for k in range(0, 3):
        while True:
            numList.append(random.randrange(0, 9))
            if not numList[n] in copyList :
                break
            numList.pop()
        btnList[numList[n]].place(x=xPos, y=yPos)
        n+=1
        copyList=numList.copy()
        xPos+=70
    xPos=0
    yPos+=70

window.mainloop()
