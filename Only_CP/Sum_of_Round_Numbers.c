#include <stdio.h>

int main() {
    int n_cases;
    scanf("%d", &n_cases);

    // টেস্ট কেসের জন্য প্রথম ফর লুপ
    for (int i = 0; i < n_cases; i++) {
        int n;
        scanf("%d", &n);

        int round_numbers[10];
        int count = 0;
        
        // সংখ্যার প্রতিটি ডিজিট বের করার জন্য দ্বিতীয় ফর লুপ
        // এখানে factor ১ থেকে শুরু হয়ে প্রতি ধাপে ১০ গুণ হবে (১, ১০, ১০০, ১০০০...)
        for (int factor = 1; n > 0; factor *= 10) {
            int digit = n % 10;
            if (digit != 0) {
                round_numbers[count] = digit * factor;
                count++;
            }
            n /= 10; // সংখ্যাটিকে ১০ দিয়ে ভাগ করে পরের ডিজিটে যাওয়া
        }

        // ফলাফল প্রিন্ট করা
        printf("%d\n", count);
        for (int j = 0; j < count; j++) {
            printf("%d ", round_numbers[j]);
        }
        printf("\n");
    }

    return 0;
}