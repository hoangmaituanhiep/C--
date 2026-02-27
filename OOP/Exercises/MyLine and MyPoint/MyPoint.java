public class MyPoint{
    private int x;
    private int y;

    MyPoint(){
        this.x = 0;
        this.y = 0;
    };
    MyPoint(int x, int y){
        this.x = x;
        this.y = y;
    }

    public int getX(){
        return this.x;
    }
    public void setX(int x){
        this.x = x;
    }
    public int getY(){
        return this.y;
    }
    public void setY(int y){
        this.y = y;
    }
    public int[] getXY(){
        int[] XY = {this.x, this.y};
        return XY;
    }
    public void setXY(int x, int y){
        this.x = x;
        this.y = y;
    }

    public String toString(){
        return String.format("(%d,%d)", this.x, this.y);
    }

    public double distance(int x, int y){
        int dif_x = this.x-x;
        int dif_y = this.y-y;

        return Math.sqrt(dif_x*dif_x + dif_y*dif_y);
    }
    public double distance(MyPoint another){
        int dif_x = this.x - another.x;
        int dif_y = this.y - another.y;

        return Math.sqrt(dif_x*dif_x + dif_y*dif_y);
    }
    public double distance(){
        return Math.sqrt(this.x*this.x + this.y*this.y);
    }
}