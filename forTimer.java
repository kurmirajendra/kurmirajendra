
import java.time.Instant;
import java.time.LocalDateTime;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.Calendar;
import java.util.Date;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author Veersingh Lodhi
 */
public class forTimer {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       LocalDateTime dateTime = LocalDateTime.now();
        System.out.println("Current date and time: " + dateTime);
        
        Instant timestamp = Instant.now();
        System.out.println("Current timestamp: " + timestamp);
        
        
         Calendar calendar = Calendar.getInstance();
        System.out.println("Current time: " + calendar.getTime());
        
         Date date = new Date();
        System.out.println("Current time: " + date);
        
         LocalTime time = LocalTime.now();
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("hh:mm:ss a");
        System.out.println("Formatted time: " + time.format(formatter));
        
        System.out.println("------------------------");
        
//         LocalDateTime now = LocalDateTime.now();
//        LocalDateTime tenMinutesLater = now.plusMinutes(10); // Add 10 minutesx`
//        LocalDateTime tenMinutesEarlier = now.minusMinutes(10); // Subtract 10 minutes
//
//        System.out.println("Current date and time: " + now);
//        System.out.println("10 minutes later: " + tenMinutesLater);
//        System.out.println("10 minutes earlier: " + tenMinutesEarlier);
        
        LocalTime currentTime = LocalTime.now();

        // Add 10 minutes
        LocalTime tenMinutesLater = currentTime.plusMinutes(10);

        // Subtract 10 minutes (optional, just for demonstration)
        LocalTime tenMinutesEarlier = currentTime.minusMinutes(10);

        // Display the results
//        System.out.println("Current time: " + currentTime);
//        System.out.println("10 minutes later: " + tenMinutesLater);
//        System.out.println("10 minutes earlier: " + tenMinutesEarlier);
        
        String sagar=tenMinutesLater+"";
        
        LocalTime currentTime1=LocalTime.now();
                LocalTime otpSentTime = LocalTime.parse(sagar);

                System.out.println("Current time "+currentTime1);
                System.out.println("OTP sent time "+tenMinutesLater);
                System.out.println("Compare them "+currentTime1.isBefore(otpSentTime));
        
    }
    
}
