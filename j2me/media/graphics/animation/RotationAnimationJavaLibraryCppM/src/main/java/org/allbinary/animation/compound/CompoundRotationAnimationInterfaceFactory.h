
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Animation;
class AnimationBehaviorFactory;
class AnimationInterfaceFactoryInterface;
class RotationAnimation;
class ForcedLogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
class CompoundRotationAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CompoundRotationAnimationInterfaceFactory: public CompoundAnimationInterfaceFactory {

public: CompoundRotationAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

    /*protected*/ public: std::vector<Animation*> createArray(int32_t size);

    /*protected*/ public: Animation* createAnimation(std::vector<Animation*> animationInterfaceArray);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDROTATIONANIMATIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/RotationAnimation.h>)
#include <org/allbinary/animation/RotationAnimation.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include("org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h")
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/animation/compound/CompoundRotationAnimation.h")
#include "org/allbinary/animation/compound/CompoundRotationAnimation.h"
#endif

        #endif
    
