
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"


SingletonAnimationInterfaceFactory::SingletonAnimationInterfaceFactory(Animation* animationInterface){
this->animationInterface= animationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto SingletonAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto SingletonAnimationInterfaceFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterface;
    
}


    auto SingletonAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_SINGLETONANIMATIONINTERFACEFACTORY_CPP
