int totalSearchTime(int N, vector<int>& books, int K, vector<int>& queries) {
    unordered_map<int, int> indexMap;
 
    for (int i = 0; i < N; i++) {
        indexMap[books[i]] = i;
    }

    int totalTime = 0;

    
    for (int i = 0; i < K; i++) {
        int x = queries[i];

        if (indexMap.find(x) != indexMap.end())
            totalTime += indexMap[x];   
        else
            totalTime += N;             
    }

    return totalTime;
}
