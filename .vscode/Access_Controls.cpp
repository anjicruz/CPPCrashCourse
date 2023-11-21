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
    private:
    int year;
};
int main() {
    ClockOfTheLongNow clock;
    clock.year = 2017;
    clock.add_year();
    printf("year: %d\n", clock.year);
    clock.add_year();
    printf("year: %d\n", clock.year);
}
/*You’ve added two methods to ClockOfTheLongNow: a setter  and a getter 
for year. Rather than allowing a user of ClockOfTheLongNow to modify year
directly, you set the year with set_year. This addition of input validation
ensures that new_year will never be less than 2019 . If it is, the code returns false and leaves year unmodified. Otherwise, year is updated and returns true. To obtain the value of year, the user calls get_year.
You’ve used the access control label private to prohibit consumers from
accessing year. Now, users can access year only from within ClockOfTheLongNow*/