
class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int flag=1;
        for(int i=0;i<n-1;i++)
        {
            int min=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min])
                {
                    min=j;
                    flag=0;
                }
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
        if(flag==1){
            return 1;
        }
        else{
            return 0;
        }
    }
};
