
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
class VectorAnimation;
class AnimationBehavior;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorAnimationFactory
            : public virtual Object
        , public virtual VectorAnimationFactoryInterface {


            
    public: VectorAnimationFactory();
        
    public: VectorAnimation* getInstance(std::vector<std::vector<std::vector<int32_t>>> points, BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/animation/VectorAnimationFactoryInterface.h")
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimation.h")
#include "org/allbinary/animation/VectorAnimation.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehavior.h")
#include "org/allbinary/animation/AnimationBehavior.h"
#endif

        #endif
    
