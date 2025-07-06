/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */

/**
 *
 * @author Veersingh Lodhi
 */
public class NewMain {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       String str="MAaDaAM"; 
       int start=0;
       int end=str.length()-1;
       boolean result=true;
       while(start<end){
           if(str.charAt(start)!=str.charAt(end)){
               result=false;
           }
           start++;
           end--;
       }
       if(result){
           System.out.println("The Array is a palindrome.");
       }else{
           System.out.println("The array is not a palindrome.");
       }
    }
    
}
