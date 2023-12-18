import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

class Shape {
    // abstract class for a shape
    public double area() {
        return 0.0;
    }
}

class Triangle extends Shape {
    // implementation for a triangle
    double[] x = new double[3];
    double[] y = new double[3];

    Triangle(double[] x, double[] y) {
        this.x = x;
        this.y = y;
    }

    public double area() {
        double area = 0.5 * Math.abs((x[1] - x[0]) * (y[2] - y[0]) - (x[2] - x[0]) * (y[1] - y[0]));
        return area;
    }
}

class Parallelogram extends Shape {
    // implementation for a parallelogram
    double[] x = new double[4];
    double[] y = new double[4];

    Parallelogram(double[] x, double[] y) {
        this.x = x;
        this.y = y;
    }

    public double area() {
        double area = Math.abs((x[1] - x[0]) * (y[2] - y[1]) - (x[2] - x[1]) * (y[1] - y[0]));
        return area;
    }
}

public class Main {

    public static void main(String[] args) {
        String filename = "shapes.data"; // replace with the actual filename
        Shape[] shapes = readShapesFromFile(filename);

        Shape largest = findLargestShape(shapes);

        if (largest == null) {
            System.out.println("No valid shapes were found in the file.");
        } else {
            System.out.printf("The biggest shape in the file \"%s\" is the %s with an area of %.2f.\n",
                    filename, largest.getClass().getSimpleName(), largest.getArea());
        }
    }

    private static Shape[] readShapesFromFile(String filename) {
        Shape[] shapes = new Shape[100]; // assuming there are no more than 100 shapes in the file
        int count = 0;
        try (Scanner scanner = new Scanner(new File(filename))) {
            while (scanner.hasNext()) {
                int x1 = scanner.nextInt();
                int y1 = scanner.nextInt();
                int x2 = scanner.nextInt();
                int y2 = scanner.nextInt();
                int x3 = scanner.nextInt();
                int y3 = scanner.nextInt();
                String type = scanner.next();

                Shape shape;
                if (type.equalsIgnoreCase("T")) {
                    shape = new Triangle(x1, y1, x2, y2, x3, y3);
                } else if (type.equalsIgnoreCase("P")) {
                    shape = new Parallelogram(x1, y1, x2, y2, x3, y3);
                } else {
                    System.out.printf("Unknown shape type \"%s\". Skipping...\n", type);
                    continue;
                }

                if (shape.isValid()) {
                    shapes[count++] = shape;
                } else {
                    System.out.printf("%s with vertices %d, %d, %d, %d, %d, %d, %d, %d cannot be created.\n",
                            shape.getClass().getSimpleName(), x1, y1, x2, y2, x3, y3, shape.getVertex4().x, shape.getVertex4().y);
                }
            }
        } catch (FileNotFoundException e) {
            System.out.printf("File \"%s\" not found.\n", filename);
        }
        return resizeArray(shapes, count);
    }

    private static Shape[] resizeArray(Shape[] shapes, int count) {
        Shape[] newShapes = new Shape[count];
        System.arraycopy(shapes, 0, newShapes, 0, count);
        return newShapes;
    }

    private static Shape findLargestShape(Shape[] shapes) {
        double largestArea = 0;
        Shape largestShape = null;
        for (Shape shape : shapes) {
            if (shape == null) {
                break;
            }
            double area = shape.getArea();
            if (area > largestArea) {
                largestArea = area;
                largestShape = shape;
            }
        }
        return largestShape;
    }
}