
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SimultaneousCompoundIndexedAnimation: public IndexedAnimation {

    private: std::vector<Animation> animationInterfaceArray;

public: SimultaneousCompoundIndexedAnimation(std::vector<Animation> animationInterfaceArray, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->animationInterfaceArray= animationInterfaceArray;
    
}


    public: void setFrame(int32_t frameIndex){

    IndexedAnimation indexedAnimation;;
    




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
indexedAnimation= this->animationInterfaceArray[index]! as IndexedAnimation;
    
indexedAnimation.setFrame(frameIndex);
    
}

}


    public: int32_t getFrame(){

    IndexedAnimation indexedAnimation = this->animationInterfaceArray[0]! as IndexedAnimation;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation.getFrame();;
    
}


    public: int32_t getSize(){

    IndexedAnimation indexedAnimation = this->animationInterfaceArray[0]! as IndexedAnimation;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexedAnimation.getSize();;
    
}


    public: void previousFrame(){

    IndexedAnimation indexedAnimation;;
    




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
indexedAnimation= this->animationInterfaceArray[index]! as IndexedAnimation;
    
indexedAnimation.previousFrame();
    
}

}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


                //@Throws(Exception.constructor)
            
    public: void nextFrame(){




                        for (
    int32_t index = this->animationInterfaceArray.size();--index >= 0; )
        {
this->animationInterfaceArray[index]!.nextFrame();
    
}

}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

    int32_t size = this->animationInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->animationInterfaceArray[index]!.paintXY(graphics, x, y);
    
}

}


    public: void paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){

    int32_t size = this->animationInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->animationInterfaceArray[index]!.paintThreedXYZ(graphics, x, y, z);
    
}

}


    public: std::vector<Animation> getAnimationInterfaceArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray;
    
}


    public: void setAnimationInterfaceArray(std::vector<Animation> animationInterfaceArray){
this->animationInterfaceArray= animationInterfaceArray;
    
}


};

            

