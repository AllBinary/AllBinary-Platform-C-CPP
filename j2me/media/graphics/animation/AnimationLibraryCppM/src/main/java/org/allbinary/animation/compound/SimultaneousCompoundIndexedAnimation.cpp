
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/SimultaneousCompoundIndexedAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SimultaneousCompoundIndexedAnimation::SimultaneousCompoundIndexedAnimation(std::vector<Animation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
}


    auto SimultaneousCompoundIndexedAnimation::setFrame(int32_t frameIndex) -> void{

    IndexedAnimation* indexedAnimation;;
    




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
indexedAnimation= dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[index]);
    
indexedAnimation->setFrame(frameIndex);
    
}

}


    auto SimultaneousCompoundIndexedAnimation::getFrame() -> int32_t{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[0]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation->getFrame();;
    
}


    auto SimultaneousCompoundIndexedAnimation::getSize() -> int32_t{

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[0]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation->getSize();;
    
}


    auto SimultaneousCompoundIndexedAnimation::previousFrame() -> void{

    IndexedAnimation* indexedAnimation;;
    




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
indexedAnimation= dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[index]);
    
indexedAnimation->previousFrame();
    
}

}


    auto SimultaneousCompoundIndexedAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto SimultaneousCompoundIndexedAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundIndexedAnimation::nextFrame() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->nextFrame();
    
}

}


    auto SimultaneousCompoundIndexedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{

    int32_t size = this->animationInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->animationInterfaceArray[index]->paintXY(graphics, x, y);
    
}

}


    auto SimultaneousCompoundIndexedAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{

    int32_t size = this->animationInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->animationInterfaceArray[index]->paintThreedXYZ(graphics, x, y, z);
    
}

}


    auto SimultaneousCompoundIndexedAnimation::getAnimationInterfaceArray() -> std::vector<Animation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray;
    
}


    auto SimultaneousCompoundIndexedAnimation::setAnimationInterfaceArray(std::vector<Animation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXEDANIMATION_CPP
