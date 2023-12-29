# formula  :  b +- sqrt b**2 - 4ac / 2a
#equ : ax**2 + bx + c = 0

import cmath

a = int(input("enter a: (a!=0): "))
b = int(input("enter b : "))
c = int(input("enter c : "))

root1 = (-b + cmath.sqrt((b**2)-(4 * a * c))) / (2 * a)
root2 = (-b - cmath.sqrt((b**2)-(4 * a * c))) / (2 * a)

print(f"roots are  {root1}  and  {root2}")