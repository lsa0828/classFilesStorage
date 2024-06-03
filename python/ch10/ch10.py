Python 3.10.2 (tags/v3.10.2:a58ebcc, Jan 17 2022, 14:12:15) [MSC v.1929 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
from tkinter import *
window-TK()
Traceback (most recent call last):
  File "<pyshell#1>", line 1, in <module>
    window-TK()
NameError: name 'window' is not defined
window-Tk()
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    window-Tk()
NameError: name 'window' is not defined
window=Tk()
window.mainloop()

====================== RESTART: C:/Cookpython/code10-01.py =====================

====================== RESTART: C:/Cookpython/code10-02.py =====================

====================== RESTART: C:/Cookpython/code10-03.py =====================

====================== RESTART: C:/Cookpython/code10-04.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code10-04.py", line 4, in <module>
    photo=PhotoImage(file="gif/deg.gif")
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 4093, in __init__
    Image.__init__(self, 'photo', name, cnf, master, **kw)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 4038, in __init__
    self.tk.call(('image', 'create', imgtype, name,) + options)
_tkinter.TclError: couldn't open "gif/deg.gif": no such file or directory

====================== RESTART: C:/Cookpython/code10-04.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code10-04.py", line 7, in <module>
    label1.pack()
NameError: name 'label1' is not defined. Did you mean: 'labe1'?

====================== RESTART: C:/Cookpython/code10-04.py =====================

======================== RESTART: C:/Cookpython/s10-1.py =======================

======================== RESTART: C:/Cookpython/s10-1.py =======================

======================== RESTART: C:/Cookpython/s10-1.py =======================

====================== RESTART: C:/Cookpython/code10-05.py =====================

====================== RESTART: C:/Cookpython/code10-06.py =====================

====================== RESTART: C:/Cookpython/code10-06.py =====================
Exception in Tkinter callback
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1921, in __call__
    return self.func(*args)
  File "C:/Cookpython/code10-06.py", line 5, in myFunc
    messagebox.showinfo("강아지 버튼", "강아지가 귀엽죠? ^^")
NameError: name 'messagebox' is not defined

====================== RESTART: C:/Cookpython/code10-07.py =====================

====================== RESTART: C:/Cookpython/code10-08.py =====================

====================== RESTART: C:/Cookpython/code10-09.py =====================

====================== RESTART: C:/Cookpython/code10-10.py =====================
from tkinter import *
window=Tk()
btnList=["버튼1","버튼2","버튼3"]
for i in range(0, 3):
    btnList[i]=Button(window, text="버튼"+str(i+1))

Traceback (most recent call last):
  File "<pyshell#9>", line 2, in <module>
    btnList[i]=Button(window, text="버튼"+str(i+1))
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 2679, in __init__
    Widget.__init__(self, master, 'button', cnf, kw)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 2601, in __init__
    self.tk.call(
_tkinter.TclError: can't invoke "button" command: application has been destroyed

====================== RESTART: C:/Cookpython/code10-12.py =====================

======================== RESTART: C:/Cookpython/s10-3.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-3.py", line 26, in <module>
    window=Tk()
NameError: name 'Tk' is not defined

======================== RESTART: C:/Cookpython/s10-3.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-3.py", line 26, in <module>
    window=Tk()
NameError: name 'Tk' is not defined

======================== RESTART: C:/Cookpython/s10-3.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-3.py", line 28, in <module>
    window=Tk()
NameError: name 'Tk' is not defined

======================== RESTART: C:/Cookpython/s10-3.py =======================
Exception in Tkinter callback
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1921, in __call__
    return self.func(*args)
  File "C:/Cookpython/s10-3.py", line 16, in clickNext
    panmeL.configure(text=str(fnameList[num]))
NameError: name 'panmeL' is not defined
Exception in Tkinter callback
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1921, in __call__
    return self.func(*args)
  File "C:/Cookpython/s10-3.py", line 16, in clickNext
    panmeL.configure(text=str(fnameList[num]))
NameError: name 'panmeL' is not defined
Exception in Tkinter callback
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1921, in __call__
    return self.func(*args)
  File "C:/Cookpython/s10-3.py", line 16, in clickNext
    panmeL.configure(text=str(fnameList[num]))
NameError: name 'panmeL' is not defined

======================== RESTART: C:/Cookpython/s10-3.py =======================
Exception in Tkinter callback
Traceback (most recent call last):
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1921, in __call__
    return self.func(*args)
  File "C:/Cookpython/s10-3.py", line 16, in clickNext
    panmeL.configure(text=str(fnameList[num]))
NameError: name 'panmeL' is not defined

======================== RESTART: C:/Cookpython/s10-3.py =======================

======================== RESTART: C:/Cookpython/s10-3.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-2.py", line 21, in <module>
    num.randomrange(0, 9)
AttributeError: 'int' object has no attribute 'randomrange'

======================== RESTART: C:/Cookpython/s10-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-2.py", line 21, in <module>
    num.randomrange(0, 9)
AttributeError: 'int' object has no attribute 'randomrange'

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-2.py", line 21, in <module>
    num=int([random.randrange(0, 9)])
TypeError: int() argument must be a string, a bytes-like object or a real number, not 'list'

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-2.py", line 8, in <module>
    i, k, n1,n2=0, 0, 0
ValueError: not enough values to unpack (expected 4, got 3)

======================== RESTART: C:/Cookpython/s10-2.py =======================

======================== RESTART: C:/Cookpython/s10-2.py =======================
Traceback (most recent call last):
  File "C:/Cookpython/s10-2.py", line 23, in <module>
    if not numList[n] in copyList :
NameError: name 'copyList' is not defined. Did you mean: 'copyright'?

======================== RESTART: C:/Cookpython/s10-2.py =======================

====================== RESTART: C:/Cookpython/code10-13.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code10-13.py", line 9, in <module>
    window.bind("<Button-1", clickLeft)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1421, in bind
    return self._bind(('bind', self._w), sequence, func, add)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 1375, in _bind
    self.tk.call(what + (sequence, cmd))
_tkinter.TclError: missing ">" in binding

====================== RESTART: C:/Cookpython/code10-13.py =====================

====================== RESTART: C:/Cookpython/code10-14.py =====================

====================== RESTART: C:/Cookpython/code10-15.py =====================

====================== RESTART: C:/Cookpython/code10-16.py =====================

======================== RESTART: C:/Cookpython/s10-4.py =======================

======================== RESTART: C:/Cookpython/s10-4.py =======================

====================== RESTART: C:/Cookpython/code10-17.py =====================

====================== RESTART: C:/Cookpython/code10-18.py =====================
Traceback (most recent call last):
  File "C:/Cookpython/code10-18.py", line 18, in <module>
    fileMenu.add_command(label="열기", menu=func_open)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 3331, in add_command
    self.add('command', cnf or kw)
  File "C:\Users\이수아\AppData\Local\Programs\Python\Python310\lib\tkinter\__init__.py", line 3318, in add
    self.tk.call((self._w, 'add', itemType) +
_tkinter.TclError: unknown option "-menu"

====================== RESTART: C:/Cookpython/code10-18.py =====================
