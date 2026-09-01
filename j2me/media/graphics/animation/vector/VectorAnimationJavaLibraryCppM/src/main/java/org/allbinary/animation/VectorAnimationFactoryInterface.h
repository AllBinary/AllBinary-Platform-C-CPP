
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H

            #include <vector>
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VectorAnimation.h"

class VectorAnimationFactoryInterface {

    VectorAnimation getInstance(std::vector<std::vector<std::vector<int32_t>>> points, BasicColor basicColor);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORYINTERFACE_H
