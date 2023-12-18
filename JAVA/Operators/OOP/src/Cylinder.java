class Cylinder {
    public double radius;
    public double height;

    public double lidArea() {
        return 2 * Math.PI * radius * radius;
    }
    public double totalSurfaceArea() {
        return (2 * Math.PI * radius * height + lidArea());
    }
    public double volume() {
        return Math.PI * radius * radius * height;
    }
}
