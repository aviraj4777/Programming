import java.util.Scanner;

public class WordFrequency {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Read the number of words
        System.out.print("Enter the number of words: ");
        int numWords = scanner.nextInt();

        // Read the words and count their frequency
        String[] words = new String[numWords];
        int[] freqs = new int[numWords];
        for (int i = 0; i < numWords; i++) {
            System.out.print("Enter word " + (i+1) + ": ");
            String word = scanner.next().toLowerCase();
            int freq = 1;
            for (int j = 0; j < i; j++) {
                if (words[j].equals(word)) {
                    freqs[j]++;
                    freq = freqs[j];
                    break;
                }
            }
            words[i] = word;
            freqs[i] = freq;
            System.out.println(word + ": " + freq);
        }
    }
}
