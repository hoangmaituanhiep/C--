public class Date{
    private int day;
    private int year;
    private int month;

    Date(int day, int month, int year){
        this.day = day;
        this.month = month;
        this.year = year;
    }
    public int getDay(){
        return this.day;
    }
    public int getMonth(){
        return this.month;
    }
    public int getYear(){
        return this.year;
    }
    public void setDay(int day){
        this.day = day;
    }
    public void setMonth(int month){
        this.month = month;
    }
    public void setYear(int year){
        this.year = year;
    }
    public void setDate(int day, int month, int year){
        this.day = day;
        this.year = year;
        this.month = month;
    }

    public String toString(){
        return String.format("%02d/%02d/%04d", this.day, this.month, this.year);
    }
}