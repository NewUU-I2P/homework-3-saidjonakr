void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cost = 13.0;
    if(consumed_water > 0.0){
        cost += (consumed_water > 30.0 ? 30.0 : consumed_water) * 0.4;
        consumed_water -= 30.0;
    }
    if(consumed_water > 0.0){
        cost += (consumed_water > 20.0 ? 20.0 : consumed_water) * 0.12;
        consumed_water -= 20.0;
    }
    if(consumed_water > 0.0){
        cost += (consumed_water > 10.0 ? 10.0 : consumed_water) * 1.4;
        consumed_water -= 10.0;
    }
    if(consumed_water > 0.0){
        cost += consumed_water * 1.5;
    }
    return cost;
}
