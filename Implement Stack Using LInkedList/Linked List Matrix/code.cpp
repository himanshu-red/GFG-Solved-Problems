Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
    vector<vector<Node*>> matrix; 
    for (int i = 0; i< n; i++)
    {
        vector<Node*> row; 
        for (int j = 0; j< n; j++)
        {
            Node *newNode = new Node (mat[i][j]); 
            row.push_back(newNode);
        }
        matrix.push_back(row); 
        row.clear(); 
    }
    for (int i = 0; i< n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (j+1 < n)
            {
                matrix[i][j]->right = matrix[i][j+1]; 
            }
            else 
            {
                matrix[i][j]->right = nullptr;  
            }
            if(i+1 < n)
            {
                matrix[i][j]->down = matrix[i+1][j]; 
            }
            else 
            {
                matrix[i][j]->down = nullptr; 
            }
        }
    }
    return matrix[0][0]; 
}
