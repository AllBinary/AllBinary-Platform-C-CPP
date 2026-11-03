
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/VectorExplosionAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/VectorRotationAnimation.h"
#include "org/allbinary/animation/Animation.h"


VectorExplosionAnimationFactory::VectorExplosionAnimationFactory(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) : vectorExplosionGenerator(VectorExplosionGenerator::getInstance()), basicColor(BasicColorFactory::getInstance()->WHITE){
this->animationBehaviorFactory= animationBehaviorFactory;
    
this->setBasicColorP(basicColor);
    
}


                //@Throws(Exception.constructor)
            
    auto VectorExplosionAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{

    VectorAnimationInterface* vectorRotationAnimationInterface = dynamic_cast<VectorAnimationInterface*>(animationInterface);;
    

    int32_t frame = vectorRotationAnimationInterface->getFrame();;
    

    std::vector<std::vector<int32_t>> framePoints = vectorRotationAnimationInterface->getPoints(frame);;
    

    std::vector<std::vector<std::vector<int32_t>>> points = this->vectorExplosionGenerator->getInstance(framePoints, 6, this->vectorExplosionGenerator->ROTATION);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new VectorRotationAnimation(points, this->getBasicColorP(), this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto VectorExplosionAnimationFactory::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto VectorExplosionAnimationFactory::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_VECTOREXPLOSIONANIMATIONFACTORY_CPP
