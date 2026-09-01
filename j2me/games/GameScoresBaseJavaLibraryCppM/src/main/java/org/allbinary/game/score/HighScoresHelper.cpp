
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBase.h"
#include "HighScores.h"

class HighScoresHelper: public HighScoresHelperBase {

    private: const CircularIndexUtil circularIndexUtil = CircularIndexUtil::createInstanceAt(0, 0);

    public: void setHighScoresArray(std::vector<HighScores> highScoresArrayP){
super.setHighScoresArray(highScoresArrayP);
    
this->circularIndexUtil.setSize(this->highScoresArrayP.size());
    
}


    int32_t lastIndex =  -1;

    public: HighScores getNextHighScores(){

    HighScores highScores = this->highScoresArrayP[this->circularIndexUtil.getIndex()];;
    

    int32_t index = 0;;
    

        while((highScores.getTotal() < 1 || this->lastIndex == this->circularIndexUtil.getIndex()) && index < this->highScoresArrayP.size())
        {
this->circularIndexUtil.next();
    
highScores= this->highScoresArrayP[this->circularIndexUtil.getIndex()]!;
    
index++;
    
}

this->lastIndex= this->circularIndexUtil.getIndex();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    
}


    public: bool isAnyHighScores(){

                        if(this->highScoresArrayP.size() < 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    bool anyScores = false;;
    

    HighScores highScores;;
    




                        for (
    int32_t index = this->highScoresArrayP.size() -1;index >= 0; index--)
        {
highScores= this->highScoresArrayP[index]!;
    

                        if(highScores.getTotal() > 0)
                        
                                    {
                                    anyScores= true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyScores;
    
}


};

            

