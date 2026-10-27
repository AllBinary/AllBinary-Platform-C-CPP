
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/TimedVectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/VectorAnimation.h"

class TimedVectorAnimationFactory
            : public Object
        , public VectorAnimationFactoryInterface {

    public: VectorAnimation* getInstance(std::vector<std::vector<std::vector<int32_t>>> points, BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TIMEDVECTORANIMATIONFACTORY_H
