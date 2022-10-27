class Solution {
public:
    bool judgeCircle(string moves) {
    
        unordered_map<char, int> StepMap;
        
        for(int i = 0; i < moves.length(); i++)   
            StepMap[moves[i]] += 1;
        
        if(StepMap['U'] != StepMap['D'])
            return false;
        
        if(StepMap['R'] != StepMap['L'])    
            return false;
            
        return true;
    }
};