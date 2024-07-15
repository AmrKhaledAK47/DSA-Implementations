int binary_search(vector<int> vec,int item){
    int l = 0;
    int h = vec.size()-1 , mid;
    while(l<=h){
        mid = floor((l+h)/2);
        if(item == vec[mid]) return mid;
        else if (item < vec[mid]) h = mid - 1;
        else l = mid + 1;
    }
    return -1;
}
