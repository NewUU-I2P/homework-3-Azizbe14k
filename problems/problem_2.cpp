float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    result=(i > j and j > k) ? i: (j > i and j > k) ? j: k;

    return result;
}
