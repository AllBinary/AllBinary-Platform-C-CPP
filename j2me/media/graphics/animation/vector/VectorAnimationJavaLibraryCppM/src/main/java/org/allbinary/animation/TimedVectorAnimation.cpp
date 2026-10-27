
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/TimedVectorAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"


TimedVectorAnimation::TimedVectorAnimation(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) : VectorAnimation(currentPoints, basicColor, animationBehavior), timeElapsedHelper(new TimeDelayHelper(200)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto TimedVectorAnimation::nextFrame() -> void{

                        if(this->timeElapsedHelper->isTime(GameTickTimeDelayHelperFactory::getInstance()->startTime))
                        
                                    {
                                    VectorAnimation::nextFrame();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATION_CPP
