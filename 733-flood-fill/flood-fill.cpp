class Solution {
public:

    void DFS(vector<vector<int>>& image,int i,int j,int val,int &color)
    {
        if(i<0 || j<0)
        return;

        if(i==image.size() || j==image[0].size() || image[i][j] != val)
        return;

        image[i][j] = color;

        DFS(image,i-1,j,val,color);
        DFS(image,i,j-1,val,color);
        DFS(image,i+1,j,val,color);
        DFS(image,i,j+1,val,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int val = image[sr][sc];

        if(val==color)
        return image;

        DFS(image,sr,sc,val,color);

        return image;
    }
};