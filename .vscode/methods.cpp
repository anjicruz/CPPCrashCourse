#include <cstdio>
struct ClockOfTheLongNow {
    void add_year() {
        year++;
    }
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
/*You declare the ClockOfTheLongNow instance clock u and then set the year of clock to 2017 v. Next, you call the add_year method on clock w and then print the value of clock.year x. You complete the program by incrementing y and printing z once more.*/