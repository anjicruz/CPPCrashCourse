#include <cstdio>
struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
    bool set_year(int new_year) {
        if(new_year < 2019)
            return false;
        year = new_year;
        return true;
    }
    int get_year() {
        return year;
    }
    int year;
};
int main() {
    ClockOfTheLongNow clock;
    if(!clock.set_year(2018)) {
        clock.set_year(2019);
    }
    clock.add_year();
    printf("year: %d\n", clock.year);
}
/*You declare a clock and attempt to set its year to 2018. This fails
because 2018 is less than 2019, and the program then sets the year to 2019 . You increment the year once x and then print its value.*/