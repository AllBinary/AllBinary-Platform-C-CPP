
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
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimation.h"
#include "AnimationBehavior.h"

class TimedVectorAnimation: public VectorAnimation {

    private: TimeDelayHelper timeElapsedHelper = TimeDelayHelper(200);

public: TimedVectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor basicColor, AnimationBehavior animationBehavior){
            super(currentPoints, basicColor, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void nextFrame(){

                        if(this->timeElapsedHelper.isTime(GameTickTimeDelayHelperFactory::getInstance().startTime))
                        
                                    {
                                    super.nextFrame();
    

                                    }
                                
}


};

            

