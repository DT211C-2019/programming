/***********************************************************************************************************************
 * @description: File Processing Class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class Date {

    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public int getDay() {
        return this.day;
    }

    public void setDay(int day) {
        this.day = day;
    }

    public int getMonth() {
        return this.month;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public int getYear() {
        return this.year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    @Override
    public String toString() {
        return "{" + " day='" + getDay() + "'" + ", month='" + getMonth() + "'" + ", year='" + getYear() + "'" + "}";
    }

}
