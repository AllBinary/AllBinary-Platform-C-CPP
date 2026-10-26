
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AnimationBehavior.h"

class IndexedAnimationBehavior: public AnimationBehavior {

    public: int64_t frameDelayTime;

    public: int32_t loopTotal;

    public: int64_t elapsedTime= 0;

    public: int32_t loopIndex= 0;

public: IndexedAnimationBehavior(int32_t loopTotal, int64_t frameDelayTime){
this->loopTotal= loopTotal;
    
this->frameDelayTime= frameDelayTime;
    
}


    public: void reset(){
this->loopIndex= 0;
    
}


};

            

