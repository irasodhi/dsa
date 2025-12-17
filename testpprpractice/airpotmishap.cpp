int missingBag(int* a, int a_size, int* b, int b_size) {
    long long sumA = 0, sumB = 0;

    for (int i = 0; i < a_size; i++) {
        sumA += a[i];
    }

    for (int i = 0; i < b_size; i++) {
        sumB += b[i];
    }

    return (int)(sumA - sumB);
}