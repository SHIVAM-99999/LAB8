# LAB8

 Matrix Chain Multiplication

 Aim-To study and implement the **Matrix Chain Multiplication** problem using **Dynamic Programming** to find the minimum number of scalar multiplications required for multiplying a chain of matrices.



 Theory

Matrix Chain Multiplication is an optimization problem in which we determine the most efficient way to multiply a sequence of matrices.

Suppose there are matrices:

 A₁ of size p₀ × p₁
 A₂ of size p₁ × p₂
 A₃ of size p₂ × p₃
 ...
 Aₙ of size pₙ₋₁ × pₙ

The product:

A₁ × A₂ × A₃ × ... × Aₙ

can be computed in many ways by placing parentheses differently.

Since matrix multiplication is associative:

(A₁A₂)A₃ = A₁(A₂A₃)

But the number of computations may differ.

The objective is to find the parenthesization that requires the minimum cost


 Method 1:

((A₁A₂)A₃)

Cost = (10×30×5) + (10×5×60)
= 1500 + 3000
= 4500

 Method 2:

(A₁(A₂A₃))

Cost = (30×5×60) + (10×30×60)
= 9000 + 18000
= 27000

Minimum Cost = 4500



 Dynamic Programming Approach

We use a table `m[i][j]` where:

 `m[i][j]` = minimum cost of multiplying matrices from i to j.

Formula:

m[i][j] = min { m[i][k] + m[k+1][j] + p(i-1) × p(k) × p(j) }

for all i ≤ k < j



 Algorithm

1. Read number of matrices.
2. Read dimensions array.
3. Initialize diagonal values as 0.
4. Calculate chain length from 2 to n.
5. For each subproblem:

   * Try all possible partitions.
   * Store minimum cost.
6. Final answer is stored in `m[1][n]`.





 Result

Thus, the Matrix Chain Multiplication problem was successfully implemented using Dynamic Programming, and the minimum multiplication cost was obtained.

