
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/DecalAnimationInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/animation/NullRotationAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DecalAnimationInterfaceFactory::DecalAnimationInterfaceFactory() {
        }
        auto DecalAnimationInterfaceFactory::instance_owner() -> DecalAnimationInterfaceFactory* { static std::unique_ptr<DecalAnimationInterfaceFactory> value(new DecalAnimationInterfaceFactory()); return value.get(); }
DecalAnimationInterfaceFactory* DecalAnimationInterfaceFactory::instance = DecalAnimationInterfaceFactory::instance_owner();

    auto DecalAnimationInterfaceFactory::getInstance() -> DecalAnimationInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DecalAnimationInterfaceFactory::instance;
    
}


                //@Throws(Exception.constructor)
            
    auto DecalAnimationInterfaceFactory::getAnimationFactory(BasicGameResources* basicGameResources, BasicColor* basicColor) -> AnimationInterfaceFactoryInterface*{

    AnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface;;
    

                        if(basicColor == BasicColorFactory::getInstance()->RED)
                        
                                    {
                                    animationInterfaceFactoryInterface= FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance()->get(basicGameResources->RESOURCE);
    

                                    }
                                
                        else {
                            animationInterfaceFactoryInterface= NullRotationAnimationFactory::getFactoryInstance();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return animationInterfaceFactoryInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_CPP
