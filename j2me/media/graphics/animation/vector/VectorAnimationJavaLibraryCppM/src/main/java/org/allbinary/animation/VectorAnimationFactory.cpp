
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
        
            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimationFactoryInterface.h"
#include "VectorAnimation.h"
#include "AnimationBehavior.h"

class VectorAnimationFactory
            : public Object
        : public VectorAnimationFactoryInterface {

    public: VectorAnimation getInstance(std::vector<std::vector<std::vector<int32_t>>> points, BasicColor basicColor){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return VectorAnimation(points, basicColor, AnimationBehavior::getInstance());
    
}


};

            

