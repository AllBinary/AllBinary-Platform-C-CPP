
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicGameResources;
class AnimationInterfaceFactoryInterface;
class FeaturedAnimationInterfaceFactoryInterfaceFactory;
class NullRotationAnimationFactory;
class BasicColor;
class BasicColorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DecalAnimationInterfaceFactory
            : public virtual Object
         {

    private: static DecalAnimationInterfaceFactory* instance_owner();
    private: static DecalAnimationInterfaceFactory* instance;

    public: static DecalAnimationInterfaceFactory* getInstance();


            
    public: DecalAnimationInterfaceFactory();
        
                //@Throws(Exception.constructor)
            
    public: AnimationInterfaceFactoryInterface* getAnimationFactory(BasicGameResources* basicGameResources, BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/resources/BasicGameResources.h>)
#include <org/allbinary/game/layer/resources/BasicGameResources.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationInterfaceFactoryInterface.h>)
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/animation/NullRotationAnimationFactory.h>)
#include <org/allbinary/animation/NullRotationAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif

        #endif
    
