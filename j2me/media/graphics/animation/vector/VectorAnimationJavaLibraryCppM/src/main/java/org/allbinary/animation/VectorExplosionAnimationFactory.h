
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicColor;
class BasicColorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
class VectorExplosionGenerator;
class AnimationBehaviorFactory;
class VectorAnimationInterface;
class VectorRotationAnimation;
class Animation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VectorExplosionAnimationFactory
            : public virtual Object
        , public ProceduralAnimationInterfaceFactoryInterface {

    private: VectorExplosionGenerator* vectorExplosionGenerator;

    private: BasicColor* basicColor;

    /*protected*/ public: AnimationBehaviorFactory* animationBehaviorFactory;

public: VectorExplosionAnimationFactory(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

    private: void setBasicColorP(BasicColor* basicColor);

    private: BasicColor* getBasicColorP();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorExplosionGenerator.h")
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationInterface.h")
#include "org/allbinary/animation/VectorAnimationInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorRotationAnimation.h")
#include "org/allbinary/animation/VectorRotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

        #endif
    
