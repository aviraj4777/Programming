class Product {
    private String itemNo;
    private String name;
    private double price;
    private short qty;

    String getItemNo() {
        return itemNo;
    }
    String getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    short getQty() {
        return qty;
    }

    void setPrice(int price) {
        this.price = price;
    }
    void setQty(short qty) {
        this.qty = qty;
    }

    Product(String itemNo, String name) {
        this.itemNo = itemNo;
        this.name = name;
    }
    Product(String itemNo, String name, double price, short qty) {
        this.itemNo = itemNo;
        this.name = name;
        this.price = price;
        this.qty = qty;
    }
}

class Customer {
    private String custId;
    private String name;
    private String address;
    private String phno;

    public String getName() {return name;}
    public String getCustId() { return custId;}
    public String getAddress() { return address; }
    public String getPhno() { return phno; }

    public Customer(String custId, String name) {
        this.custId = custId;
        this.name = name;
    }
    public Customer(String custId, String name, String address, String phno) {
        this.custId = custId;
        this.name = name;
        setAddress(address);
        setPhno(phno);
    }
    public void setAddress(String address) {
        this.address = address;
    }
    public void setPhno(String phno) {
        this.phno = phno;
    }
}

