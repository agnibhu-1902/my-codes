import java.io.*;
import java.util.*;
public class RailwayTicketReservation {
    public static void main(String args[]) throws IOException {
        BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
        Scanner br=new Scanner(System.in);
        System.out.println("Before you continue, please enter today's date in dd/mm/yyyy format");
        String tdate = sc.readLine();
        System.out.println("QUICK BOOK");
        System.out.println("From: (Enter City Name single word)");
        String from = sc.readLine();
        System.out.println("To: (Enter City Name single word)");
        String to = sc.readLine();
        System.out.println("Date of journey: (dd.mm.yyyy)");
        String date = sc.readLine();
        System.out.println("Select Class:\nPlease type in the option you would like to select and press enter\n1. Sleeper Class\t2. AC Class\n3. General");
        String clas = "";
        switch (Integer.parseInt(sc.readLine())) {
            case 1:
                clas = "Sleeper";
                break;
            case 2:
                clas = "AC";
                break;
            case 3:
                clas = "General";
        }
        System.out.println("Enter train number:");
        long trno = Long.parseLong(sc.readLine());
        System.out.println("Enter Train Name");
        String trname = sc.readLine();
        System.out.println("Enter Boarding Point:");
        String bdg = sc.readLine();
        System.out.println("Enter ticket type:\nPlease type in the option you would like to select and press enter\n1. e-ticket\t2. i-ticket");
        String type = "";
        if (Integer.parseInt(sc.readLine()) == 1)
            type = "e-ticket";
        else
            type = "i-ticket";
        System.out.println("Quota:\nPlease type in the option you would like to select and press enter\n1. General\t2. Ladies\n3. Tatkal");
        String quota = "";
        switch (Integer.parseInt(sc.readLine())) {
            case 1:
                quota = "General";
                break;
            case 2:
                quota = "Ladies";
                break;
            case 3:
                quota = "Tatkal";
        }
        System.out.println("Enter Passenger Name (first name):");
        String pname = sc.readLine();
        System.out.println("Enter age");
        int age = Integer.parseInt(sc.readLine());
        System.out.println("Enter Sex(M/F)");
        String Sex = sc.readLine();
        System.out.print("All your details have been received successfully. Please wait while we are processing your ticket");
        for (double i = 0; ; i++) {
            if (i % 10000000.0 == 0)
                System.out.print(".");
            if (i == 50000000.0) {
                System.out.println(".");
                break;
            }
        }
        double fare = Math.random() * 1000;
        System.out.println("Exact fare to be paid: Rs." + fare + "\nProceed to Pay?(Y/N)");
        String chh=br.next();
        System.out.println();
        double p;int q;p=Math.random();
        if (chh.equalsIgnoreCase("N"))
            System.out.println("The Ticket Booking Process Has Been Cancelled :(");
        else {
            q=(int)(p*10);
            if(p>=1&&p<=5)
            {
                System.out.println("Seats already Booked. You have been placed in a waiting list.");
                System.out.println("Your RAC number is RAC/WL2431700");
            }
            else{
            System.out.println("Ticket Booking Successful! Please carry a printout of the following on the day of boarding the train!");
            System.out.println("-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
            System.out.println("Transaction ID:       20000019846198\nPNR No.        :2289484678");
            System.out.println("Train Name and No:  " + trname + "/" + trno + "\nDate Of Journey:        " + date);
            System.out.println("Class:        " + clas + "\nDate of Booking:   " + tdate);
            System.out.println("Date of Boarding:    " + date + "\nDistance:   978 KM");
            System.out.println("From:             " + from + "\tTo             " + to);
            System.out.println("Boarding At:         " + bdg + "\nScheduled Departure:" + date + " 16:30 HOURS");
            System.out.println("Adult:             1\nQuota:   " + quota+"\n");
            System.out.println("FARE DETAILS:");
            System.out.println("Ticket Fare: Rs." + fare);
            System.out.println("IRCTC Service Charge (Incl. Service Tax): Rs. 22.47");
            System.out.println("Total Fare (all inclusive): Rs." + (fare + 22.47)+"\n");
            System.out.println("PASSENGER DETAILS");
            System.out.println("Sl\tName of passenger\tAge\tGender");
            System.out.println("1\t" + pname + "   \t\t" + age + "   \t" + Sex);}
        }
    }
}
