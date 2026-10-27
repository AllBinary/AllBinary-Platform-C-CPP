
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/NullRotationAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/NullRotationAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
//#include "org/allbinary/animation/NullRotationAnimation2.h"
#include "org/allbinary/animation/Animation.h"

auto NullRotationAnimationFactory::NULL_ROTATION_ANIMATION_FACTORY_owner() -> NullRotationAnimationFactory* { static std::unique_ptr<NullRotationAnimationFactory> value(new NullRotationAnimationFactory()); return value.get(); }
NullRotationAnimationFactory* NullRotationAnimationFactory::NULL_ROTATION_ANIMATION_FACTORY = NullRotationAnimationFactory::NULL_ROTATION_ANIMATION_FACTORY_owner();

NullRotationAnimationFactory::NullRotationAnimation2::NullRotationAnimation2(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NullRotationAnimationFactory::NullRotationAnimation2::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}


NullRotationAnimationFactory::NullRotationAnimationFactory() : NULL_ROTATION_ANIMATION_ARRAY({}), NULL_ANIMATION(new NullRotationAnimation2()){
}


    auto NullRotationAnimationFactory::getFactoryInstance() -> NullRotationAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullRotationAnimationFactory::NULL_ROTATION_ANIMATION_FACTORY;
    
}


    auto NullRotationAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    auto NullRotationAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


    auto NullRotationAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_NULLROTATIONANIMATIONFACTORY_CPP
