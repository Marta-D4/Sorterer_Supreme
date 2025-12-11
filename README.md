_This project has been created as part of the 42 curriculum by madiaz-e_

# Description

This is the project **Push_Swap**, simple yet a challenge since we will be implementing algorithms. 
We have at our disposal a set of integer values, 2 stacks and a set of instructions to manipulate both stacks.
Our programs goal is its to calculate and display the shortest sequence of instructions needed to sort the given integers in ascending order.

At the beginning we have our 2 stacks named **a** and **b**, the stack **a** contains a random numer of unique negative and/or positive integers, while stack **b** is empty. To achieve sorting the numbers in stack a in ascending order we have the following operations at our disposal:

+ **sa**(swap a): Swap the first 2 elements at the top of stack **a**.
Do nothing if there is only one element or none.
+ **sb**(swap b): Swap the first 2 elements at the top of stack **b**.
Do nothing if there is only one element or none.
+ **ss** : **sa** and **sb** at the same time.
+ **pa**(push a): Take the first element at the top of **b** and put it at the top of **a**.
Do nothing if **b** is empty.
+ **pb**(push b): Take the first element at the top of **a** and put it at the top of **b**.
Do nothing if **a** is empty.
+ **ra**(rotate a): Shift up all elements of stack **a** by 1.
The first element becomes the last one.
+ **rb**(rotate b): Shift up all elements of stack **b** by 1.
The first element becomes the last one.
+ **rr** : **ra** and **rb** at the same time.
+ **rra**(reverse rotate a): Shift down all elements of stack **a** by 1.
The last element becomes the first one.
+ **rrb**(reverse rotate b): Shift down all elements of stack **b** by 1.
The last element becomes the first one.
+ **rrr** : **rra** and **rrb** at the same time.

# Instructions

# Resources

**_NO AI WAS USED FOR THIS PROJECT_**