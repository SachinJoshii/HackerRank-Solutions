int designerPdfViewer(vector<int> h, string word) {
    int tallest=0;
    for (int i=0; i<word.size(); i++){
        int index = word[i] - 'a';
        for (int j=0; j<h.size(); j++){
            if (h[index]>tallest){
                tallest = h[index];
            }
        }
    }
    int area = word.size()*tallest;
    return area;
}
