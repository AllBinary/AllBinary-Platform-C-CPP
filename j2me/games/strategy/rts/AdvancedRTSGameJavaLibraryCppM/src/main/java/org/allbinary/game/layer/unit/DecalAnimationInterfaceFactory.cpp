
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/animation/NullRotationAnimationFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DecalAnimationInterfaceFactory
            : public Object
         {

    private: static DecalAnimationInterfaceFactory instance() { return DecalAnimationInterfaceFactory(); }

    public: static DecalAnimationInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DecalAnimationInterfaceFactory::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: AnimationInterfaceFactoryInterface getAnimationFactory(BasicGameResources basicGameResources, BasicColor basicColor){

    AnimationInterfaceFactoryInterface animationInterfaceFactoryInterface;;
    

                        if(basicColor == BasicColorFactory::getInstance().RED)
                        
                                    {
                                    animationInterfaceFactoryInterface= FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance().get(basicGameResources.RESOURCE);
    

                                    }
                                
                        else {
                            animationInterfaceFactoryInterface= NullRotationAnimationFactory::getFactoryInstance();
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return animationInterfaceFactoryInterface;
    
}


};

            

