
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimation.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

SimultaneousCompoundIndexAnimation::SimultaneousCompoundIndexAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
}


    auto SimultaneousCompoundIndexAnimation::setFrame(int32_t frameIndex) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->setFrame(frameIndex);
    
}

}


    auto SimultaneousCompoundIndexAnimation::getFrame() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getFrame();;
    
}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundIndexAnimation::getAnimationSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getAnimationSize();;
    
}


    auto SimultaneousCompoundIndexAnimation::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray[0]->getSize();;
    
}


    auto SimultaneousCompoundIndexAnimation::previousFrame() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->previousFrame();
    
}

}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundIndexAnimation::nextFrame() -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->nextFrame();
    
}

}


    auto SimultaneousCompoundIndexAnimation::setSequence(std::vector<int32_t> sequence) -> void{
}


    auto SimultaneousCompoundIndexAnimation::getSequence() -> std::vector<int32_t>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    auto SimultaneousCompoundIndexAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->paintXY(graphics, x, y);
    
}

}


    auto SimultaneousCompoundIndexAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->paintThreedXYZ(graphics, x, y, z);
    
}

}


                //@Throws(Exception.constructor)
            
    auto SimultaneousCompoundIndexAnimation::set(GL* gl) -> void{




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]->set(gl);
    
}

}


    auto SimultaneousCompoundIndexAnimation::getAnimationInterfaceArray() -> std::vector<IndexedAnimation*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->animationInterfaceArray;
    
}


    auto SimultaneousCompoundIndexAnimation::setAnimationInterfaceArray(std::vector<IndexedAnimation*> animationInterfaceArray) -> void{
this->animationInterfaceArray= animationInterfaceArray;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_COMPOUND_SIMULTANEOUSCOMPOUNDINDEXANIMATION_CPP
