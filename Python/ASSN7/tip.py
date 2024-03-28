def resta():
    n=int(input("Enter the cheque amount : "))
    t=int(input("Enter the tip in percentage : "))

    tip=n*(t/100)
    total=n+tip

    print(f"The total bill is : {total}\nTip amount : {tip}\nCheque amount : {n}")


resta()
