

interface Engine
{
    void speedUp(int s);
    void changeGear(int g);
}

class Vehicle implements Engine
{
    int gear = 3;
    int speed = 70;
    public void speedUp(int s)
    {
        int ch = s - speed;
        speed = s;
        System.out.println("New speed: " + speed);
        System.out.println("Speed increase: " + ch);
    }
    public void changeGear(int g)
    {
        int ch = g - gear;
        gear = g;
        System.out.println("New gear: " + gear);
        System.out.println("Gear increase: " + ch);
    }
}

class VehicleEngine
{
    public static void main(String args[])
    {
        Engine e = new Vehicle();
        e.speedUp(100);
        e.changeGear(4);
    }
}