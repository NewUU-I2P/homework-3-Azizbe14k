void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    if(consumed_water<=30){
        cout<<cost=13+consumed_water%*0.4;
    }else if(30<consumed_water<=50){
        cout<<cost=13+30*0.4+consumed_water%30*0.12;
    }else if(50<consumed_water<=55){
        cout<<cost=13+30*0.4+20*0.12+consumed_water%50*1.4;
    }else
        cout<<cost=13+30*0.4+20*0.12+5*1.4+(consumed_water-55)*1.5;
    

    return cost;
}
