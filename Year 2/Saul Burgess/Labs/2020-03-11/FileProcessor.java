import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

/***********************************************************************************************************************
 * @description: File Processing Class
 * @author: Saul Burgess
 * @date: 2021-03-11
 ***********************************************************************************************************************/

public class FileProcessor {

    // Handles reading a file
    static String readFile(String filepath) {

        String everything = "";

        try (BufferedReader br = new BufferedReader(new FileReader(filepath))) {
            StringBuilder sb = new StringBuilder();
            String line = br.readLine();

            while (line != null) {
                sb.append(line);
                sb.append(System.lineSeparator());
                line = br.readLine();
            }
            everything = sb.toString();

        } catch (IOException e) {
            e.printStackTrace();
        }

        return everything;
    }

    // Handles writing to a file
    static String writeFile(String message, String fileName) {
        BufferedWriter writer;
        try {
            writer = new BufferedWriter(new FileWriter(fileName));
            writer.write(message);
            writer.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return message;
    }
}