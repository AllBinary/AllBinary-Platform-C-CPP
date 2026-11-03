
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/IndexedAnimationInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorAnimationInterface: public virtual IndexedAnimationInterface, public virtual ColorCompositeInterface {

    public: virtual std::vector<std::vector<int32_t>> getPoints(int32_t frame) = 0;

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/ColorCompositeInterface.h>)
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>
#endif
#if __has_include("org/allbinary/animation/IndexedAnimationInterface.h")
#include "org/allbinary/animation/IndexedAnimationInterface.h"
#endif

        #endif
    
