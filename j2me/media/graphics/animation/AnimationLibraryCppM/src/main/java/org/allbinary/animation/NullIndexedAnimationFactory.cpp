
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/NullIndexedAnimationFactory.h"
        

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
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullIndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
//#include "org/allbinary/animation/NullIndexedAnimationInner.h"
#include "org/allbinary/animation/Animation.h"

std::vector<IndexedAnimation*> NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_ARRAY = {};
auto NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY_owner() -> NullIndexedAnimationFactory* { static std::unique_ptr<NullIndexedAnimationFactory> value(new NullIndexedAnimationFactory()); return value.get(); }
NullIndexedAnimationFactory* NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY = NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY_owner();

NullIndexedAnimationFactory::NullIndexedAnimationInner::NullIndexedAnimationInner() : NullIndexedAnimation(new IndexedAnimationBehavior(1, 250)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto NullIndexedAnimationFactory::NullIndexedAnimationInner::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}


NullIndexedAnimationFactory::NullIndexedAnimationFactory() : NULL_ANIMATION(javaInner(new NullIndexedAnimationInner(), this)){
}


    auto NullIndexedAnimationFactory::getFactoryInstance() -> NullIndexedAnimationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullIndexedAnimationFactory::NULL_INDEXED_ANIMATION_FACTORY;
    
}


                //@Throws(Exception.constructor)
            
    auto NullIndexedAnimationFactory::getInstance(int32_t instanceId) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


                //@Throws(Exception.constructor)
            
    auto NullIndexedAnimationFactory::getInstanceAnimation(Animation* animationInterface) -> Animation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NULL_ANIMATION;
    
}


    auto NullIndexedAnimationFactory::setInitialScale(ScaleProperties* scaleProperties) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_NULLINDEXEDANIMATIONFACTORY_CPP
