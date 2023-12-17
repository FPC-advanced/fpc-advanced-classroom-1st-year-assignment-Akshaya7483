// 4. Write a program to evaluate a polynomial at a given point using [Horner's Method](https://en.wikipedia.org/wiki/Horner%27s_method#:~:text=Alternatively%2C%20Horner's%20method%20also%20refers,into%20general%20use%20around%201970.)

int input_degree();
void input_coefficients(int n, float a[n]);
float input_x();
float evaluate_polynomial(int n, float a[n], float x);
void output(int n, float a[n], float x, float result);