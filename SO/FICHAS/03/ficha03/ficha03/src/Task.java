public class Task implements Runnable {

    private int id;

    public Task(int id) {
        this.id = id; 
    }

    public void run() {
        try {
            for(int i = 0; i < 10; i++) {
                System.out.println("[Th" + this.id + "]Eu sou uma thread"); 
                Thread.sleep(1000);
            }
        }  
        catch(InterruptedException e) {
            System.out.println("Thread interrompida");
        }
        
    }

}
