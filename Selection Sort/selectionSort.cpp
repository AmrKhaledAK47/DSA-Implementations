int findSmallest(vector<int>& v){
    int smallest = v[0];
    int smallestIndex = 0;
    for(int i=1;i<v.size();i++){
        if(v[i]<smallest){
            smallest = v[i];
            smallestIndex = i;
        }
    }
    return smallestIndex;
}
void selectionSort(vector<int>& v){
    vector <int> ans;
    while(!v.empty()){
        int id = findSmallest(v);
        ans.push_back(v[id]);
        v.erase(v.begin()+id);
    }
    v = ans;
}