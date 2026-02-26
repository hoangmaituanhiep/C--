public class Circle {
    double radius = 1.0;

    Circle() {
    }
    
    Circle(double radius){
        this.radius = radius;
    }

    public double getRadius() {
        return this.radius;
    }

    public void setRadius(double radius){
        this.radius = radius;
    }

    public double getArea(){
        return radius*radius*Math.PI;
    }

    public double getCircumference(){
        return radius*2*Math.PI;
    }

    public String toString(){
        return String.format("Circle[radius=%.1f]", this.radius);
    }
}