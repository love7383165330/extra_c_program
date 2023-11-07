
// Program :- 1 


#include <stdio.h>
int main()
{

   // Sum of two numbers using pointer

   int first, second, *p, *q, sum;

   printf("Enter two integers to add\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;

   sum = *p + *q;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}

/*

Output :-

Enter two integers to add
12
12
Sum of the numbers = 24

*/

// Program :- 2

#include <stdio.h>
 
int main()
{

  // Swap Two Numbers Using Pointer

   int x, y, *a, *b, temp;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}

/*

Output :-

Enter the value of x and y
12
24
Before Swapping
x = 12
y = 24
After Swapping
x = 24
y = 12

*/

// Program :- 3

#include <stdio.h>
int main()
{

// Input and Print Array Element Using A Pointer

    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", data + i);
    }
    printf("You entered: \n");
    
    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", *(data + i));
    }
    return 0;
}

/*

Output :-

Enter elements: 5
4
3
2
1
You entered: 
5
4
3
2
1

*/


// Program :- 4

