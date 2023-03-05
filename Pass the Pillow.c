int passThePillow(int n, int time){
    int direction = 1;  // initial direction
    int curr_person = 1;  // initial pillow holder
    int i;
    for (i = 0; i < time; i++) {
        if (curr_person == 1) {
            direction = 1;
        }
        else if (curr_person == n) {
            direction = -1;
        }
        curr_person += direction;
    }
    return curr_person;
}
