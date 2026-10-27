
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorRotationAnimationInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorRotationAnimation.h"
#include "org/allbinary/animation/Animation.h"


VectorRotationAnimationInterfaceFactory::VectorRotationAnimationInterfaceFactory(std::vector<std::vector<std::vector<int32_t>>> currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) : currentPoints(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY), basicColor(BasicColorFactory::getInstance()->WHITE){
this->currentPoints= currentPoints;
    
this->setBasicColorP(basicColor);
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto VectorRotationAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorRotationAnimation(this->currentPoints, this->getBasicColorP(), this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto VectorRotationAnimationInterfaceFactory::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto VectorRotationAnimationInterfaceFactory::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    auto VectorRotationAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTORROTATIONANIMATIONINTERFACEFACTORY_CPP
