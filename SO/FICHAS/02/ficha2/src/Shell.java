import java.io.*;

public class Shell {
    public static void main(String[] args) throws IOException {
        if (args.length != 1) {
            System.err.println("Modo de uso: java Shell <comando>");
            System.exit(0);
        }
        // args[0] comando a executar
        ProcessBuilder pb = new ProcessBuilder(args);

        Process process = pb.start();
        System.out.println("Inicio do comando \"" + args[0] + "\".");

        BufferedReader reader = new BufferedReader(new InputStreamReader(process.getInputStream()));
        String linha;

        while((linha = reader.readLine()) != null) {
            System.out.println();
        }

        reader.close();

        try {
            int codigoTermino = process.waitFor();
            System.out.println("Fim do comando \"" + args[0] + "\". código de termino" + codigoTermino);
        } catch (InterruptedException e) {}
    }
}