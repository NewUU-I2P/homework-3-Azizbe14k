void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    (consumed_water<=30)
    cost=13+consumed_water*0.4;
    (consumed_water>30 and consumed_water<=50)
    cost=13+30*0.4+(consumed_water-30)*0.12;
    (consumed_water>50 and consumed_water<=55)
    cost=13+30*0.4+20*0.12+(consumed_water-50)*1.4;
    (consumed_water>55)
    cost=13+30*0.4+20*0.12+5*1.4+(consumed_water-55)*1.5;
    

    return cost;
}
