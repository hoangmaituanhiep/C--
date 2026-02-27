public class MyLine{
    MyPoint begin;
    MyPoint end;

    MyLine(int x1, int y1, int x2, int y2){
        this.begin = new MyPoint(x1, y1);
        this.end = new MyPoint(x2, y2);
    }
    MyLine(MyPoint begin, MyPoint end){
        this.begin = begin;
        this.end = end;
    }
    
    public MyPoint getBegin(){
        return this.begin;
    }
    public void setBegin(MyPoint begin){
        this.begin = begin;
    }
    public MyPoint getEnd(){
        return  this.end;
    }
    public void setEnd(MyPoint end){
        this.end = end;
    }
    public int getBeginX(){
        return begin.getX();
    }
    public int getBeginY(){
        return begin.getY();
    }
    public int getEndX(){
        return end.getX();
    }
    public int getEndY(){
        return end.getY();
    }
    public void setBeginX(int x){
        begin.setX(x);
    }
    public void setBeginY(int y){
        begin.setY(y);
    }
    public void setEndX(int x){
        end.setX(x);
    }
    public void setEndY(int y){
        end.setY(y);
    }

    public int[] getBeginXY(){
        int[] XY = {begin.getX(), begin.getY()};
        return XY;
    }
    public void setBeginXY(int x, int y){
        begin.setXY(x, y);
    }
    public int[] getEndXY(){
        int[] XY = {end.getX(), end.getY()};
        return XY;
    }
    public void setEndXY(int x, int y){
        end.setXY(x, y);
    }

    public double getLength(){
        return begin.distance(end);
    }
    public double getGradient(){
        int yDiff = end.getY() - begin.getY();
        int xDiff = end.getX() - begin.getX();

        return Math.atan2(yDiff, xDiff);
    }
    public String toString(){
        return String.format("MyLine[begin=(%d,%d),end=(%d,%d)]", begin.getX(), begin.getY(), end.getX(), end.getY());
    }
}