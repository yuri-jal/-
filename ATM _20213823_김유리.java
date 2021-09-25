import java.util.*;

public class Main {

    public static void main(String [] args){
        Scanner scanner = new Scanner(System.in);

        int person = scanner.nextInt();
        int [] times = new int [person];

        for(int i=0;i<times.length;i++)
            times[i] = scanner.nextInt();

        Arrays.sort(times);

        int result = 0;

        for(int i=0;i<times.length;i++)
            result += (times[i] * (times.length - i));

        System.out.println(result);
    }
}