
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehaviorFactory.h>

      
#include <org/allbinary/animation/AnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CompoundAnimationInterfaceFactory::CompoundAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory){
this->basicAnimationInterfaceFactoryInterfaceArrayP= basicAnimationInterfaceFactoryInterfaceArray;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{

    int32_t size = this->basicAnimationInterfaceFactoryInterfaceArrayP.size();;
    

    std::vector<Animation*> animationInterfaceArray = this->createArray(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
animationInterfaceArray[index]= this->basicAnimationInterfaceFactoryInterfaceArrayP[index]->getInstance(instanceId);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->createAnimation(animationInterfaceArray);;
    
}


    auto CompoundAnimationInterfaceFactory::createArray(int32_t size) -> std::vector<Animation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullAnimationFactory::getFactoryInstance()->EMPTY_ARRAY;
    
}


    auto CompoundAnimationInterfaceFactory::createAnimation(std::vector<Animation*> animationInterfaceArray) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullAnimationFactory::getFactoryInstance()->getInstance(0);;
    
}


    auto CompoundAnimationInterfaceFactory::getBasicAnimationInterfaceFactoryInterfaceArray() -> std::vector<AnimationInterfaceFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicAnimationInterfaceFactoryInterfaceArrayP;
    
}


    auto CompoundAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{

    int32_t size = this->basicAnimationInterfaceFactoryInterfaceArrayP.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->basicAnimationInterfaceFactoryInterfaceArrayP[index]->setInitialScale(scaleProperties);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACEFACTORY_CPP
