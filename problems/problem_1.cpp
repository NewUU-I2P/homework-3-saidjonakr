double problemSolution1(double consumed_water) {
    double cost = 13.0;
    // write your code here
    if(consumed_water > 0.0) {
        if(consumed_water >= 30.0){
            cost += 30.0 * 0.4;
        }else {
            cost += consumed_water * 0.4;
        }
        consumed_water -= 30.0;
    }
    if(consumed_water > 0.0) {
        if(consumed_water >= 20.0){
            cost += 20.0 * 0.12;
        }else {
            cost += consumed_water * 0.12;
        }
        consumed_water -= 20.0;
    }
    if(consumed_water > 0.0) {
        if(consumed_water >= 20.0){
            cost += 10.0 * 1.4;
        }else {
            cost += consumed_water * 1.4;
        }
        consumed_water -= 10.0;
    }
    if(consumed_water > 0.0) {
        cost += consumed_water * 1.5;
    }
    return cost;
}
