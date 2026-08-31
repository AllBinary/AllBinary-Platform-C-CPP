
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
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
        

    private: static const instance: DecalAnimationInterfaceFactory = new DecalAnimationInterfaceFactory();

    public static DecalAnimationInterfaceFactory getInstance();

                //@Throws(Exception.constructor)
            
    public AnimationInterfaceFactoryInterface getAnimationFactory(BasicGameResources basicGameResources, BasicColor basicColor);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_DECALANIMATIONINTERFACEFACTORY_H
