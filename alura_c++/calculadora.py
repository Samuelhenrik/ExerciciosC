import tkinter as tk

class Calculator(tk.Tk):
    def __init__(self):
        tk.Tk.__init__(self)
        self.geometry("230x160")
        self.title("Calculator")

        self.entry = tk.Entry(self, width=25)
        self.entry.grid(row=0, column=0, columnspan=4)

        self.button1 = tk.Button(self, text="1", command=lambda: self.entry.insert(tk.END, "1"))
        self.button1.grid(row=1, column=0)

        self.button2 = tk.Button(self, text="2", command=lambda: self.entry.insert(tk.END, "2"))
        self.button2.grid(row=1, column=1)

        self.button3 = tk.Button(self, text="3", command=lambda: self.entry.insert(tk.END, "3"))
        self.button3.grid(row=1, column=2)

        self.button4 = tk.Button(self, text="4", command=lambda: self.entry.insert(tk.END, "4"))
        self.button4.grid(row=2, column=0)

        self.button5 = tk.Button(self, text="5", command=lambda: self.entry.insert(tk.END, "5"))
        self.button5.grid(row=2, column=1)

        self.button6 = tk.Button(self, text="6", command=lambda: self.entry.insert(tk.END, "6"))
        self.button6.grid(row=2, column=2)

        self.button7 = tk.Button(self, text="7", command=lambda: self.entry.insert(tk.END, "7"))
        self.button7.grid(row=3, column=0)

        self.button8 = tk.Button(self, text="8", command=lambda: self.entry.insert(tk.END, "8"))
        self.button8.grid(row=3, column=1)

        self.button9 = tk.Button(self, text="9", command=lambda: self.entry.insert(tk.END, "9"))
        self.button9.grid(row=3, column=2)

        self.button0 = tk.Button(self, text="0", command=lambda: self.entry.insert(tk.END, "0"))
        self.button0.grid(row=4, column=0)

        self.button_plus = tk.Button(self, text="+", command=lambda: self.entry.insert(tk.END, "+"))
        self.button_plus.grid(row=1, column=3)

        self.button_minus = tk.Button(self, text="-", command=lambda: self.entry.insert(tk.END, "-"))
        self.button_minus.grid(row=2, column=3)

        self.button_multiply = tk.Button(self, text="*", command=lambda: self.entry.insert(tk.END, "*"))
        self.button_multiply.grid(row=3, column=3)

        self.button_divide = tk.Button(self, text="/", command=lambda: self.entry.insert(tk.END, "/"))
        self.button_divide.grid(row=4, column=3)

        self.button_equal = tk.Button(self, text="=", command=self.calculate)
        self.button_equal.grid(row=4, column=2)

        self.button_clear = tk.Button(self, text="C", command=self.clear)
        self.button_clear.grid(row=4, column=1)

    def calculate(self):
        try:
            expression = self.entry.get()
            result = eval(expression)
            self.entry.delete(0, tk.END)
            self.entry.insert(tk.END, str(result))
        except:
            self.entry.delete(0, tk.END)