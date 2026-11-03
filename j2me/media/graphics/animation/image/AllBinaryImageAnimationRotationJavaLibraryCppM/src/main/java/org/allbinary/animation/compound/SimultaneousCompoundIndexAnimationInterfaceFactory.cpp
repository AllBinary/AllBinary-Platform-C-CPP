
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimationInterfaceFactory.h"
        

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

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimation.h"


SimultaneousCompoundIndexAnimationInterfaceFactory::SimultaneousCompoundIndexAnimationInterfaceFactory(std::vector<AnimationInterfaceFactoryInterface*> basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory){
this->basicAnimationInterfaceFactoryInterfaceArray= basicAnimationInterfaceFactoryInterfaceArray;
    
this->animationBehaviorFactory= animationBehaviorFactory;
    
}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundIndexAnimationInterfaceFactory::getInstance(int32_t instanceId) -> Animation*{

    int32_t size = this->basicAnimationInterfaceFactoryInterfaceArray.size();;
    

    std::vector<IndexedAnimation*> animationInterfaceArray = std::vector<IndexedAnimation*>(size);;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
animationInterfaceArray[index]= dynamic_cast<IndexedAnimation*>(this->basicAnimationInterfaceFactoryInterfaceArray[index]->getInstance(instanceId));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getOrCreate(animationInterfaceArray);;
    
}


    auto SimultaneousCompoundIndexAnimationInterfaceFactory::getOrCreate(std::vector<IndexedAnimation*> animationInterfaceArray) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new SimultaneousCompoundIndexAnimation(animationInterfaceArray, this->animationBehaviorFactory->getOrCreateInstance());
    
}


    auto SimultaneousCompoundIndexAnimationInterfaceFactory::getBasicAnimationInterfaceFactoryInterfaceArray() -> std::vector<AnimationInterfaceFactoryInterface*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicAnimationInterfaceFactoryInterfaceArray;
    
}


    auto SimultaneousCompoundIndexAnimationInterfaceFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATIONINTERFACEFACTORY_CPP
