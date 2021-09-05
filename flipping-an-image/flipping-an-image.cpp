class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size();
        int m = image[0].size();
        
        for(int i = 0; i < n; i++)
        {
                int low = 0;
                int high = m - 1;
                while(low <= high)
                {
                    swap(image[i][low], image[i][high]);
                    low++;
                    high--;
                }
        }
        
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(image[i][j] == 0)
                    image[i][j] = 1;
                else if(image[i][j] == 1)
                    image[i][j] = 0;
            }
        }
        
        return image;
    }
};