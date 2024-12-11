class Shape {
    // Method to calculate the area of the shape
    // Default implementation returns 0
    public double calculateArea() {
        return 0;
    }
}

class Circle extends Shape {
    private double radius;
    Circle(double radius) {
        this.radius = radius;
    }

    public double calculateArea() {
        return Math.PI * radius * radius;
    }
} 
// Define the Rectangle class as a subclass of Shape
class Rectangle extends Shape {
    private double width;
    private double height;
    Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }
   
    public double calculateArea() {
        return width * height;
    }
}
public class area_polymosrphism {
    public static void main(String[] args) {
        
        // Create a Circle object with radius 4
        Circle circle = new Circle(4);
        // Print the area of the Circle object
        System.out.println("Area of Circle: " + circle.calculateArea());

        // Create a Rectangle object with width 12 and height 34
        Rectangle rectangle = new Rectangle(12, 34);
        // Print the area of the Rectangle object
        System.out.println("\nArea of Rectangle: " + rectangle.calculateArea());

        
    }
}
