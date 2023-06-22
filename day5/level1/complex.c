#include <stdio.h>
struct Complex {
    float real;
    float imaginary;
};

void read(struct Complex *c) {
    printf("real part: ");
    scanf("%f", &c->real);
    printf("imaginary part: ");
    scanf("%f", &c->imaginary);
}

void write(const struct Complex *c) {
    if (c->imaginary >= 0)
        printf("Complex number: %.2f + %.2fi\n", c->real, c->imaginary);
    else
        printf("Complex number: %.2f - %.2fi\n", c->real, -c->imaginary);
}

struct Complex add(const struct Complex *c1, const struct Complex *c2) {
    struct Complex result;
    result.real = c1->real + c2->real;
    result.imaginary = c1->imaginary + c2->imaginary;
    return result;
}

struct Complex mult(const struct Complex *c1, const struct Complex *c2) {
    struct Complex result;
    result.real = c1->real * c2->real - c1->imaginary * c2->imaginary;
    result.imaginary = c1->real * c2->imaginary + c1->imaginary * c2->real;
    return result;
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("complex number1:\n");
    read(&c1);

    printf("\ncomplex number2:\n");
    read(&c2);

    printf("\n");
    write(&c1);
    write(&c2);

    
    sum = add(&c1, &c2);
    printf("\nSum:\n");
    write(&sum);

    
    product = mult(&c1, &c2);
    printf("\nProduct:\n");
    write(&product);

}
