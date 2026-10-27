
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/AnimationInterface.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CompoundAnimationInterface: public AnimationInterface {

    public: virtual void nextAnimation() = 0;

    public: virtual void previousAnimation() = 0;

    public: virtual void setAnimation(int32_t index) = 0;

    public: virtual IndexedAnimation* getCurrentAnimation() = 0;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H
