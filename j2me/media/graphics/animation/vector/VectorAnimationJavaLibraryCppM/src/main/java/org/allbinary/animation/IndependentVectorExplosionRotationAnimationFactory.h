
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H
        #define ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H

        
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
class NullUtil;
class VectorInfo;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
class VectorAnimationFactoryInterface;
class VectorRotationGenerator;
class VectorExplosionGenerator;
class IndexedAnimation;
class Animation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class IndependentVectorExplosionRotationAnimationFactory
            : public virtual Object
        , public virtual ProceduralAnimationInterfaceFactoryInterface {

    private: std::vector<std::vector<std::vector<int32_t>>> framePoints;

    private: VectorInfo* vectorInfo;

    private: BasicColor* basicColor;

    private: VectorAnimationFactoryInterface* vectorAnimationFactoryInterface;

public: IndependentVectorExplosionRotationAnimationFactory(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void init();

    private: VectorExplosionGenerator* vectorExplosionGenerator;

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/vector/VectorInfo.h>)
#include <org/allbinary/vector/VectorInfo.h>
#endif
#if __has_include("org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorAnimationFactoryInterface.h")
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/VectorRotationGenerator.h")
#include "org/allbinary/animation/VectorRotationGenerator.h"
#endif
#if __has_include("org/allbinary/animation/VectorExplosionGenerator.h")
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

        #endif
    
