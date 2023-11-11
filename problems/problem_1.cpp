double problemSolution1(double consumed_water) {
    // write your code here
/*
    double cost = 13.0;
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
*/
    double fixedAmount = 13.0, consumption = consumed_water;

    // Prices per cubic meter
    double price1 = 0.4;
    double price2 = 0.12;
    double price3 = 1.4;
    double priceAdditional = 1.5;

    // Consumption thresholds
    double threshold1 = 30;
    double threshold2 = 50;
    double threshold3 = 60;

    // Calculate cost based on consumption
    double cost;
    if (consumption <= threshold1) {
        cost = fixedAmount + consumption * price1;
    } else if (consumption <= threshold2) {
        cost = fixedAmount + threshold1 * price1 + (consumption - threshold1) * price2;
    } else if (consumption <= threshold3) {
        cost = fixedAmount + threshold1 * price1 + (threshold2 - threshold1) * price2 + (consumption - threshold2) * price3;
    } else {
        cost = fixedAmount + threshold1 * price1 + (threshold2 - threshold1) * price2 + (threshold3 - threshold2) * price3 + (consumption - threshold3) * priceAdditional;
    }

    return cost;
}
