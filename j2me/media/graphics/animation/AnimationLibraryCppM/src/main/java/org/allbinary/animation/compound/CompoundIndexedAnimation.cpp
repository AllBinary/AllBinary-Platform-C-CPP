
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

class CompoundIndexedAnimation: public IndexedAnimation, public CompoundAnimationInterface {

    private: CircularIndexUtil* circularIndexUtil;

    private: std::vector<Animation*> animationInterfaceArray;

public: CompoundIndexedAnimation(std::vector<Animation*> animationInterfaceArray, AnimationBehavior* animationBehavior) : IndexedAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
this->circularIndexUtil= CircularIndexUtil::createInstance(this->animationInterfaceArray.size());
    
}


    public: void setFrame(int32_t index){

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    
indexedAnimation->setFrame(index);
    
}


    public: int32_t getFrame(){

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation->getFrame();;
    
}


    public: int32_t getSize(){

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation->getSize();;
    
}


    public: void previousFrame(){

    IndexedAnimation* indexedAnimation = dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);;
    
indexedAnimation->previousFrame();
    
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){
this->animationInterfaceArray[this->circularIndexUtil->getIndex()].nextFrame();
    
}


    public: void paintXY(Graphics* graphics, int32_t x, int32_t y){
this->animationInterfaceArray[this->circularIndexUtil->getIndex()].paintXY(graphics, x, y);
    
}


    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z){
this->animationInterfaceArray[this->circularIndexUtil->getIndex()].paintThreedXYZ(graphics, x, y, z);
    
}


    public: IndexedAnimation* getCurrentAnimation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<IndexedAnimation*>(this->animationInterfaceArray[this->circularIndexUtil->getIndex()]);
    
}


    public: void nextAnimation(){

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->next();
    
this->setFrame(frame);
    
}


    public: void previousAnimation(){

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->previous();
    
this->setFrame(frame);
    
}


    public: void setAnimation(int32_t index){

    int32_t frame = this->getFrame();;
    
this->circularIndexUtil->setIndex(index);
    
this->setFrame(frame);
    
}


    public: std::vector<Animation*> getAnimationInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray;
    
}


    public: void setAnimationInterfaceArray(std::vector<Animation*> animationInterfaceArray){
this->animationInterfaceArray= animationInterfaceArray;
    
}


                //@Throws(Exception.constructor)
            
    public: void set(GL* gl){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index].set(gl);
    
}

}


};

            

