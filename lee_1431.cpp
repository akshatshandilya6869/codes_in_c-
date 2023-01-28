class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int ex) {
       vector<bool> ar;
     
       int max=c[0];
       for(int i=0;i<c.size();i++)
       {
           if(c[i]>max){
               max=c[i];
           }}
           for(int i=0;i<c.size();i++){

           
if(c[i]+ex>=max  ){
 ar.push_back(true);
 
}
else {
   ar.push_back(false);
    
}
}
       
   return ar; }
};
