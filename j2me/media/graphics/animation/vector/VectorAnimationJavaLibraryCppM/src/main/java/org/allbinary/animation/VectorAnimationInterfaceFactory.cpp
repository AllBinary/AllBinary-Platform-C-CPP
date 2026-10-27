
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorAnimationInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/Animation.h"


VectorAnimationInterfaceFactory::VectorAnimationInterfaceFactory(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) : basicColor(BasicColorFactory::getInstance()->WHITE){
this->currentPoints= currentPoints;
    
this->setBasicColorP(basicColor);
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto VectorAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorAnimation(this->currentPoints, this->getBasicColorP(), this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto VectorAnimationInterfaceFactory::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto VectorAnimationInterfaceFactory::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto VectorAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACEFACTORY_CPP
