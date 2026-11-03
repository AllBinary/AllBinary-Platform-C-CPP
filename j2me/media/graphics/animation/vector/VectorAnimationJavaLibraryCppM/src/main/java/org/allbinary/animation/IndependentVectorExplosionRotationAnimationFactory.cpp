
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/IndependentVectorExplosionRotationAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/vector/VectorInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/VectorRotationGenerator.h"
#include "org/allbinary/animation/VectorExplosionGenerator.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/Animation.h"


IndependentVectorExplosionRotationAnimationFactory::IndependentVectorExplosionRotationAnimationFactory(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface) : framePoints(NullUtil::getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY), vectorExplosionGenerator(VectorExplosionGenerator::getInstance()){
this->vectorInfo= vectorInfo;
    
this->basicColor= basicColor;
    
this->vectorAnimationFactoryInterface= vectorAnimationFactoryInterface;
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    auto IndependentVectorExplosionRotationAnimationFactory::init() -> void{
this->framePoints= VectorRotationGenerator::getInstance()->getInstance(this->vectorInfo);
    
}


                //@Throws(Exception.constructor)
            
    auto IndependentVectorExplosionRotationAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{

    int32_t frame = 0;;
    

                        if(animationInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    IndexedAnimation* rotationAnimationInterface = dynamic_cast<IndexedAnimation*>(animationInterface);;
    
frame= rotationAnimationInterface->getFrame();
    

                                    }
                                

    std::vector<std::vector<std::vector<int32_t>>> points = this->vectorExplosionGenerator->getInstance(this->framePoints[frame], 6, this->vectorExplosionGenerator->ROTATION);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->vectorAnimationFactoryInterface->getInstance(points, this->basicColor);;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_INDEPENDENTVECTOREXPLOSIONROTATIONANIMATIONFACTORY_CPP
