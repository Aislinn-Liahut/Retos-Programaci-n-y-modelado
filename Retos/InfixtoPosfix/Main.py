"""
Modulo encargado de convertir una expresión infija en postfija
@author Celic Aislinn Lahut Ley
"""
prioridad = {'+':1, '-':1, '*':2, '/':2, '^':3,'(':4,')':4} # dictionary having priorities 

def de_infijo_a_postfijo(cadena): 

    '''Convierte una expresión de infijo a postfijo
    Parameters
    ----------
    cadena: expresion infija
    Returns
    -------
    resultado la expresion convertida postfija '''   

    resultado = ""
    stack = [] 

    for ch in cadena:

        if ch not in prioridad.keys():

            resultado+= ch

        elif ch=='(': 

            stack.append('(')

        elif ch==')':

            while stack and stack[-1]!= '(':

                resultado+=stack.pop()

            stack.pop()

        else:

            while stack and stack[-1]!='(' and prioridad[ch]<=prioridad[stack[-1]]:

                resultado+=stack.pop()

            stack.append(ch)

    while stack:

        resultado+=stack.pop()

    return resultado

 

numero = int(input())

for i in range(numero):
    expression = input()
    print(de_infijo_a_postfijo(expression))
