class Phone {
    void call() {
        System.out.println("Phone calling");
    }
    void sms() {
        System.out.println("Phone sending SMS");
    }
}
interface ICamera {
    void click();
    void record();
}
interface IMusicPlayer {
    void play();
    void stop();
}
class SmartPhone extends Phone implements ICamera, IMusicPlayer {
    public void videoCall() {
        System.out.println("Smartphone Video Calling");
    }
    public void click() {
        System.out.println("Smartphone Clicking Photo");
    }
    public void record() {
        System.out.println("Smartphone Video Recording");
    }
    public void play() {
        System.out.println("Smartphone Playing Music");
    }
    public void stop() {
        System.out.println("Smartphone Stopping Music");
    }
}
public class InterfaceExample {
    public static void main(String[] args) {
        ICamera s = new SmartPhone();
        //By changing the reference, accessibility of methods are also changing.

    }
}
