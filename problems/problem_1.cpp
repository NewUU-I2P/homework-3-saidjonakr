void problemSolution1(double consumed_water) {
    float cost;
    // write your code here
    cost = 13;
    if(consumed_water > 0){
        cost += min(30.0, consumed_water) * 0.4;
        consumed_water -= 30;
    }
    if(consumed_water > 0){
        cost += min(20.0, consumed_water) * 0.12;
        consumed_water -= 20;
    }
    if(consumed_water > 0){
        cost += min(10.0, consumed_water) * 1.4;
        consumed_water -= 10;
    }
    if(consumed_water > 0){
        cost += consumed_water * 1.5;
    }
    return cost;
}
