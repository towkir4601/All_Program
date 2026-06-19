import java.util.ArrayList;
public class Advance_ArryList {
    public static void main(String[] args){
        ArrayList<Integer> towkir = new ArrayList<Integer>();
        towkir.add(10);
        towkir.add(320);
        towkir.add(40);

        // ১. নির্দিষ্ট কোনো ইনডেক্সে ডাটা পুশ করা
        // ইনডেক্স ১-এ আমরা ২০ বসাচ্ছি, ফলে ৩০ এবং ৪০ এক ঘর ডানে পিছিয়ে যাবে
        towkir.add(1, 20);

        // ২. contains() মেথড দিয়ে উপাদান খোঁজা
        if (towkir.contains(30)) {
            System.out.println("লিস্টে ৩০ সংখ্যাটি আছে।");
        } else {
            System.out.println("লিস্টে ৩০ সংখ্যাটি নেই।");
        }
    }
}
