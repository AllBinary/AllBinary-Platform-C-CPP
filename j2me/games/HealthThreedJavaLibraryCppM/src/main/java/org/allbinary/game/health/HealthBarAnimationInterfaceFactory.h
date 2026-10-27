
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Animation;
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
class AllBinaryLayer;
class ScaleProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class HealthBarThreedAnimation;
class HealthBarAnimation;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealthBarAnimationInterfaceFactory
            : public virtual Object
        , public AnimationInterfaceFactoryInterface, public ProceduralAnimationInterfaceFactoryInterface {

public: HealthBarAnimationInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: HealthBarAnimation* getInstanceByLocation(AllBinaryLayer* layerInterface, int32_t location);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstance(int32_t instanceId);

                //@Throws(Exception.constructor)
            
    public: Animation* getInstanceAnimation(Animation* animationInterface);

    public: void setInitialScale(ScaleProperties* scaleProperties);

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/media/ScaleProperties.h>)
#include <org/allbinary/media/ScaleProperties.h>
#endif
#if __has_include("org/allbinary/game/health/HealthBarThreedAnimation.h")
#include "org/allbinary/game/health/HealthBarThreedAnimation.h"
#endif
#if __has_include("org/allbinary/game/health/HealthBarAnimation.h")
#include "org/allbinary/game/health/HealthBarAnimation.h"
#endif

        #endif
    
