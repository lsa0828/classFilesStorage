'''
#연습문제 3
from tkinter import *
window=Tk()

def rdo_change():
    if var.get()==1:
        label1.configure(text="벤츠")
    else:
        label1.configure(text="포르쉐")

var=IntVar()
rdo1=Radiobutton(window, text="벤츠", variable=var, value=1, command=rdo_change)
rdo2=Radiobutton(window, text="포르쉐", variable=var, value=2, command=rdo_change)

label1=Label(window, text="선택한 차량", fg="red")

rdo1.pack()
rdo2.pack()
label1.pack()

window.mainloop()


#연습문제 5
from tkinter import *
from time import *

fnameList=["jeju1.gif", "jeju2.gif", "jeju3.gif", "jeju4.gif", "jeju5.gif", "jeju6.gif", "jeju7.gif", "jeju8.gif", "jeju9.gif"]
photoList=[None]*9
num=0

def clickNext():
    global num
    num+=1
    if num>8:
        num=0
    pLabel.configure(text=fnameList[num])

def clickPrev():
    global num
    num-=1
    if num<0:
        num=8
    pLabel.configure(text=fnameList[num])

window=Tk()
window.geometry("700x100")

btnPrev=Button(window, text="<<이전", command=clickPrev)
btnNext=Button(window, text="다음>>", command=clickNext)
pLabel=Label(window, text="파일명", font=("궁서체", 20), fg="blue")

btnPrev.place(x=150, y=10)
btnNext.place(x=500, y=10)
pLabel.place(x=300, y=10)

window.mainloop()


#연습문제 7
from tkinter import *

def clickMouse(event):
    txt=str(event.y)+","+str(event.x)+"에서 클릭됨"
    label1.configure(text=txt)

window=Tk()
window.geometry("400x400")

label1=Label(window,text="이곳이 바뀜")
window.bind("<Button>", clickMouse)
label1.pack(expand=1, anchor=CENTER)

window.mainloop()
'''

#연습문제 9
from tkinter import *
window=Tk()

totalMenu=Menu(window)
window.config(menu=totalMenu)

upMenu=Menu(totalMenu)

totalMenu.add_cascade(label="상위메뉴", menu=upMenu)
upMenu.add_command(label="하위메뉴1")
upMenu.add_separator()
upMenu.add_command(label="하위메뉴2")

window.mainloop()
