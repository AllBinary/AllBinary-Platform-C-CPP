
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/NullSpecialAnimationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/special/SpecialAnimation.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"

auto NullSpecialAnimationFactory::NULL_SPECIAL_ANIMATION_FACTORY_owner() -> NullSpecialAnimationFactory* { static std::unique_ptr<NullSpecialAnimationFactory> value(new NullSpecialAnimationFactory()); return value.get(); }
NullSpecialAnimationFactory* NullSpecialAnimationFactory::NULL_SPECIAL_ANIMATION_FACTORY = NullSpecialAnimationFactory::NULL_SPECIAL_ANIMATION_FACTORY_owner();

NullSpecialAnimationFactory::NullSpecialAnimationFactory(){
}


    auto NullSpecialAnimationFactory::getFactoryInstance() -> NullSpecialAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullSpecialAnimationFactory::NULL_SPECIAL_ANIMATION_FACTORY;
    
}


                //@Throws(Exception.constructor)
            
    auto NullSpecialAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SpecialAnimation::getInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto NullSpecialAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SpecialAnimation::getInstance();;
    
}


    auto NullSpecialAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_NULLSPECIALANIMATIONFACTORY_CPP
