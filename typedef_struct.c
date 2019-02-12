//Keyword typedef can be used to simplify syntax of a structure.

//This code
struct Distance{
    int feet;
    float inch;
};

int main() {
    structure Distance d1, d2;
}

//is equivalent to
typedef struct Distance{
    int feet;
    float inch;
} distances;

int main() {
    distances dist1, dist2, sum;
}
