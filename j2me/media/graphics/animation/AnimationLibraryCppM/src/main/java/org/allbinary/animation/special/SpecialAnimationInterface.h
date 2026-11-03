
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/animation/IndexedAnimationInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SpecialAnimationInterface: public virtual IndexedAnimationInterface {

    public: virtual void setLastFrame() = 0;

    public: virtual bool isComplete() = 0;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/animation/IndexedAnimationInterface.h>)
#include <org/allbinary/animation/IndexedAnimationInterface.h>
#endif

        #endif
    
