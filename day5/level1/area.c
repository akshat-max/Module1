#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double vol(const struct Box *box) {
    return box->length * box->width * box->height;
}
double arrea(const struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box *boxPtr = &box;

    (*boxPtr).length = 7.0;
    boxPtr->width = 4.0;
    (*boxPtr).height = 6.0;

    
    printf(" Volume: %.2f\n", vol(boxPtr));
    printf(" Area: %.2f\n", arrea(boxPtr));

    return 0;
}
