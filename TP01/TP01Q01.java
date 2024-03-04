import java.util.Scanner;

public class TP01Q01 {
    public static void main(String[] args){
        //variaveis e scanner
        Scanner sc = new Scanner(System.in);
        String text = "";
        boolean bool;

        
        do{
            
            //entrada do usuario
            text = sc.nextLine();

            //metodo para verificar se eh palindromo
            bool = palindromo(text);
            if(bool){
                System.out.println("SIM");
            } else if (bool == false && !text.equals("FIM")){
                System.out.println("NAO");
            } 
        }while(!text.equals("FIM"));

    }

    static boolean palindromo(String str){
        String reverseStr = "";

        for(int i = 0; i < str.length(); i++){
            reverseStr = str.charAt(i) + reverseStr;
        }

        
        if(reverseStr.equals(str)){
            return true;
        } else {
            return false;
        }
    }

}