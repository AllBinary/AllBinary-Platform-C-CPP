
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresHelperBase.h"
#include "HighScores.h"

class HighScoresHelper: public HighScoresHelperBase {
        

    private: const circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstanceAt(0, 0)!;

    public setHighScoresArray(std::vector<HighScores> highScoresArrayP){
super.setHighScoresArray(highScoresArrayP);
    
this.circularIndexUtil!.setSize(this.highScoresArrayP!.length);
    
}


    lastIndex: int32_t =  -1;

    public HighScores getNextHighScores(){

    highScores: HighScores = this.highScoresArrayP[this.circularIndexUtil!.getIndex()]!;;
    

    index: int32_t = 0;;
    

        while((highScores!.getTotal() < 1 || this.lastIndex == this.circularIndexUtil!.getIndex()) && index < this.highScoresArrayP!.length)
        {
this.circularIndexUtil!.next();
    
highScores= this.highScoresArrayP[this.circularIndexUtil!.getIndex()]!;
    
index++;
    
}

this.lastIndex= this.circularIndexUtil!.getIndex();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return highScores;
    
}


    public bool isAnyHighScores(){

                        if(this.highScoresArrayP!.length < 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    anyScores: bool = false;;
    

    highScores: HighScores;;
    




                        for (
    index: int32_t = this.highScoresArrayP!.length -1;index >= 0; index--)
        {
highScores= this.highScoresArrayP[index]!;
    

                        if(highScores!.getTotal() > 0)
                        
                                    {
                                    anyScores= true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyScores;
    
}


};

            

