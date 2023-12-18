class TV {
    public void switchOn() {
        System.out.println("TV Switched ON");
    }
    public void changeChanel() {
        System.out.println("TV Chanel Changed");}
}

class SmartTV extends TV {
    @Override
    public void switchOn(){
        System.out.println("SmartTV Switched ON");
    }
    @Override
    public void changeChanel() {
        System.out.println("SmartTV Chanel is Changed");
    }
    public void browse() {
        System.out.println("SmartTV Browsing");
    }

}
public class OverridingTV {
    public static void main(String[] args) {
        TV tv = new SmartTV();
        tv.changeChanel();
        tv.switchOn();
    }
}
