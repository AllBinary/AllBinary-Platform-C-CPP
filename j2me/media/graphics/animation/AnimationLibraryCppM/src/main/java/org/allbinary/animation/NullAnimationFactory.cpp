
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/NullAnimationFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/media/ScaleProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"

auto NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY_owner() -> NullAnimationFactory* { static std::unique_ptr<NullAnimationFactory> value(new NullAnimationFactory()); return value.get(); }
NullAnimationFactory* NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY = NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY_owner();
auto NullAnimationFactory::NULL_ANIMATION_FACTORY_owner() -> NullAnimationFactory* { static std::unique_ptr<NullAnimationFactory> value(new NullAnimationFactory()); return value.get(); }
NullAnimationFactory* NullAnimationFactory::NULL_ANIMATION_FACTORY = NullAnimationFactory::NULL_ANIMATION_FACTORY_owner();

NullAnimationFactory::NullAnimationFactory() : NULL_ANIMATION(class extends Animation
                                {
                                
    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
}

                                }
                            ), EMPTY_ARRAY({}){
}


    auto NullAnimationFactory::getFactoryInstance() -> NullAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAnimationFactory::NULL_ANIMATION_FACTORY;
    
}


    auto NullAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    auto NullAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


    auto NullAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_NULLANIMATIONFACTORY_CPP
