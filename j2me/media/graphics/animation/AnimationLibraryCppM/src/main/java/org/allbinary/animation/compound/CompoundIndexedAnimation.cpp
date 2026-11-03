
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/CompoundIndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/compound/CompoundAnimationInterface.h"


CompoundIndexedAnimation::CompoundIndexedAnimation(std::vector<Animation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->animationInterfaceArray.size());
    
}


    auto CompoundIndexedAnimation::setFrame(int32_t index) -> void{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    
indexedAnimation->setFrame(index);
    
}


    auto CompoundIndexedAnimation::getFrame() -> int32_t{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return indexedAnimation->getFrame();;
    
}


    auto CompoundIndexedAnimation::getSize() -> int32_t{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return indexedAnimation->getSize();;
    
}


    auto CompoundIndexedAnimation::previousFrame() -> void{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    
indexedAnimation->previousFrame();
    
}


    auto CompoundIndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto CompoundIndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundIndexedAnimation::nextFrame() -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->nextFrame();
    
}


    auto CompoundIndexedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintXY(graphics, x, y);
    
}


    auto CompoundIndexedAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
this->animationInterfaceArray[this->circularIndexUtil->getIndex()]->paintThreedXYZ(graphics, x, y, z);
    
}


    auto CompoundIndexedAnimation::getCurrentAnimation() -> IndexedAnimation*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);
    
}


    auto CompoundIndexedAnimation::nextAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->next();
    
this->setFrame(frame);
    
}


    auto CompoundIndexedAnimation::previousAnimation() -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->previous();
    
this->setFrame(frame);
    
}


    auto CompoundIndexedAnimation::setAnimation(int32_t index) -> void{

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->setIndex(index);
    
this->setFrame(frame);
    
}


    auto CompoundIndexedAnimation::getAnimationInterfaceArray() -> std::vector<Animation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray;
    
}


    auto CompoundIndexedAnimation::setAnimationInterfaceArray(std::vector<Animation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    auto CompoundIndexedAnimation::set(GL* gl) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->set(gl);
    
}

}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDINDEXEDANIMATION_CPP
