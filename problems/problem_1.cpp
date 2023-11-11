double problemSolution1(double consumed_water) {
    // write your code here
    double cost = 0;
    cost = (consumed_water <= 30 ? 13 + (consumed_water * 0.4) : 13);
    cost = (((consumed_water > 30) && (consumed_water <= 50)) ? 13 + 30 * 0.4 + (consumed_water - 30) * 0.12 : 13);
    cost = (((50 < consumed_water) && (consumed_water <= 60)) ? 13 + 30 * 0.4 + 20 * 0.12 + (consumed_water - 50) * 1.4 : 13);
    cost = ((consumed_water >= 60) ? 13 + 30 * 0.4 + 20* 0.12 + 10 * 1.4 + (consumed_water - 60) * 1.5 : 13);
    return cost;
}
