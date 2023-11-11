float problemSolution1(float consumed_water) {
    float cost = 13.0;
    // write your code here
    if(consumed_water >= 0.0){
        cost += (consumed_water >= 30.0 ? 30.0 : consumed_water) * 0.4;
    }
    if(consumed_water > 30.0){
        cost += (consumed_water >= 50.0 ? 20.0 : consumed_water-30.0) * 0.12;
    }
    if(consumed_water > 50.0){
        cost += (consumed_water >= 60.0 ? 10.0 : consumed_water-50.0) * 1.4;
    }
    if(consumed_water >= 60.0){
        cost += (consumed_water-60.0) * 1.5;
    }
    return cost;
}
