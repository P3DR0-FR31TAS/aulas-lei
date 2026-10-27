public class App {
    public static void main(String[] args) throws Exception {
        //int numeroThreads = Integer.parseInt(args[0]);

        /* exercicio 2.2
            for(int i = 0; i < numeroThreads; i++) {
                Thread thread = new Thread(new Task(i+1));
                thread.start();
            }
        */

        int tempoParaInterrup = Integer.parseInt(args[0]) * 1000;

        Thread thread = new Thread(new Task(1));
        thread.start();

        Thread.sleep(tempoParaInterrup);
        thread.interrupt();

    }
}
