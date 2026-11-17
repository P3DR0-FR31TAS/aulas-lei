package ex1;

public class ex1 {
    
    public static void main(String args[]) {
        TwoTypePair<String, Integer> par1 = new TwoTypePair<>("João", 20);
        TwoTypePair<String, Integer> par2 = new TwoTypePair<>("João", 20);
        TwoTypePair<String, Integer> par3 = new TwoTypePair<>("Maria", 20);


        System.out.println(par1.equals(par2)); // true  ("João" == "João" E 20 == 20)
        System.out.println(par1.equals(par3)); // false ("João" != "Maria")
        System.out.println(par1.equals(null)); // false (cai logo no Teste 1)

    }

}
