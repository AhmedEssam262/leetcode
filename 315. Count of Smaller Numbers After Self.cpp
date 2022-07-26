class Solution {
 private:
      vector<int>ans;
    vector<pair<int,int>>temp;
public:
    vector<int> countSmaller(vector<int>& nums) {
      ans.resize(nums.size(),0);
      temp.resize(nums.size(),{0,0});
      vector<pair<int,int>>dup_nums;
        for(int i=0;i<nums.size();i++)
          dup_nums.push_back({nums[i],i});
       
        mergeSort(dup_nums,0,nums.size()-1);
        return ans;
    }
    void mergeSort(vector<pair<int,int>>&dup_nums,int l,int h)
    {
        if(l<h)
        { int mid=(l+h)/2;
           mergeSort(dup_nums,l,mid);
           mergeSort(dup_nums,mid+1,h);
         merge(dup_nums,l,mid,h);
           }
    }
    void merge(vector<pair<int,int>>&dup_nums,int l,int mid,int h)
    {
        int i=l; int j=mid+1; int k=0;
        
        //Merging two sorted list with 2-way merge
        while(i<=mid && j<=h)
        {
            if(dup_nums[i].first>dup_nums[j].first)
            {
     temp[k++]={dup_nums[i].first,dup_nums[i].second};
                if(dup_nums[i].second<dup_nums[j].second)
                    ans[dup_nums[i].second]+=(h-j+1);
                i++;
            }
            else
            {
    temp[k++]={dup_nums[j].first,dup_nums[j].second};
                j++;
            }
        }
        while(i<=mid)
        {
     temp[k++]={dup_nums[i].first,dup_nums[i].second};i++;
        }
        while(j<=h)
        {
    temp[k++]={dup_nums[j].first,dup_nums[j].second};j++;
        }
        
        //Copy temporary array into original one
        for(int index=0;index<=h-l;index++)
            dup_nums[index+l]=temp[index];
    }
};
