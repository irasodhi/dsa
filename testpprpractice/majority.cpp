class sol{
    public:
    int maj(vector<int>arr){
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        if(freq[arr[i]]>N/2){
            return arr[i];
        }
        return -1;

       
    }
   
}
