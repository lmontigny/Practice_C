int main(){
    direction_s D = {.name="left", .left=1};             
    draw_box(D);
    D = (direction_s) {"upper right", .up=1, .right=1};  
    draw_box(D);
    draw_box((direction_s){});                           
}


// Another example:
 printf("sum: %g\n", sum((double[]){1.1, 2.2, 3.3, NAN}));
