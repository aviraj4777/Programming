class HondaCity
{
    static long price = 10;
    int a, b;

    static double onRoadPrice(String city) {
        switch (city) {
            case "Delhi":
                return price + price*0.1;

            case "Mumbai":
                return price + price * 0.09;
        }
        return -1;
    }
}
public class HondaTest {
    public static void main(String[] args) {
        System.out.println(HondaCity.price);
        System.out.println(HondaCity.onRoadPrice("Mumbai"));
    }
}
