vector intersect(vector& nums1, vector& nums2) {
unordered_map<int,int>m;
vectorv;
for(int i=0;i<nums1.size();i++){
m[nums1[i]]++;
}
for(int i=0;i<nums2.size();i++){
if(m.find(nums2[i])!=m.end() && m[nums2[i]]>=1){

            v.push_back(nums2[i]);
            m[nums2[i]]--;
        }
    }
    return v;
    
}