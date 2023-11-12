
float problemSolution1(float consumed_water) {
    // write your code here
    float cost = 10.0;
    if (consumed_water > 0.0) {
        cost += (consumed_water > 30.0 ? 30.0 : consumed_water) * 0.6;
        consumed_water -= 30.0;
    }

    if (consumed_water > 0.0) {
        cost += (consumed_water > 20.0 ? 20.0 : consumed_water) * 0.8;
        consumed_water -= 20.0;
    }
    /*
    if (consumed_water > 0.0) {
        cost += (consumed_water > 10.0 ? 10.0 : consumed_water) * 1.0;
        consumed_water -= 10.0;
    }
    */
    if (consumed_water > 0.0) {
        cost += consumed_water * 1.0;
    }
    return cost;
}
