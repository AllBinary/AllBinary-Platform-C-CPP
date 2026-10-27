
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

        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/special/SpecialAnimation.h"

class TitleAnimation: public SpecialAnimation {

    public: static TitleAnimation* createAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TitleAnimation(animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, new IndexedAnimationBehavior(1, 250));
    
}


    protected: ABSystemWrapper* systemWrapper = ABSystemWrapper::getInstance();

    public: float deltaX= 0.0;

    public: float deltaY= 0.0;

    public: float deltaZ= 0.0;

    protected: std::vector<BasicColor*> basicColorArray;

    protected: std::vector<int32_t> dxArray;

    protected: std::vector<int32_t> dyArray;

    protected: int32_t widthP;

    protected: std::vector<IndexedAnimation*> animationInterfaceArray;

    protected: int32_t sizeP;

    protected: int32_t y;

    private: int64_t lastFrameStartTime;

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

public: TitleAnimation(std::vector<IndexedAnimation*> animationInterfaceArray, std::vector<BasicColor*> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior* animationBehavior) : SpecialAnimation(animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->lastFrameStartTime= this->systemWrapper->currentTimeMillis();
    
this->animationInterfaceArray= animationInterfaceArray;
    
this->sizeP= this->animationInterfaceArray.size();
    
this->basicColorArray= basicColorArray;
    
this->dxArray= dxArray;
    
this->dyArray= dyArray;
    
this->y= y;
    
this->widthP= width;
    
this->reset();
    
}


    public: void nextFrame(){

    int64_t currentTime = this->systemWrapper->currentTimeMillis();;
    

    int64_t totalTimeElapsed = currentTime -this->lastFrameStartTime;;
    

    IndexedAnimationBehavior* indexedAnimationBehavior = dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior());;
    

                        if(totalTimeElapsed > indexedAnimationBehavior->frameDelayTime)
                        
                                    {
                                    this->previousFrame();
    
this->lastFrameStartTime= currentTime;
    

                                    }
                                

                        if(this->animationInterfaceArray[0].getFrame() == 0)
                        
                                    {
                                    indexedAnimationBehavior->loopIndex++;
    

                                    }
                                
}


    public: bool isComplete(){

    IndexedAnimationBehavior* indexedAnimationBehavior = dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior());;
    

                        if(indexedAnimationBehavior->loopTotal ==  -1 || indexedAnimationBehavior->loopIndex < indexedAnimationBehavior->loopTotal || this->getFrame() != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: void setSequence(std::vector<int32_t> sequence){
}


    public: std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil::getArrayInstance();;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[0].getSize();;
    
}


    public: int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->animationInterfaceArray[0].getFrame();;
    
}


    public: void setFrame(int32_t frame){




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
this->animationInterfaceArray[index].setFrame(frame);
    
}

}


    public: void setLastFrame(){
this->setFrame(this->getSize() -1);
    
}


    public: void reset(){
this->setLastFrame();
    

    IndexedAnimationBehavior* indexedAnimationBehavior = (dynamic_cast<IndexedAnimationBehavior*>(this->getAnimationBehavior()));;
    
indexedAnimationBehavior->reset();
    
}


    public: void previousFrame(){




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
this->animationInterfaceArray[index].previousFrame();
    
}

}


    public: void paintFrameXY(Graphics* graphics, int32_t frame, int32_t x, int32_t y){
this->setFrame(frame);
    
this->paintXY(graphics, x, y);
    
}


    protected: BasicColor* CLEAR_COLOR = BasicColorFactory::getInstance()->CLEAR_COLOR;

    public: void paintXY(Graphics* graphics, int32_t ax, int32_t ay){

    int32_t x = 0;;
    

                        if(this->widthP != Integer.MIN_VALUE)
                        
                                    {
                                    x= ((this->displayInfoSingleton->getLastWidth() -this->widthP) /2);
    

                                    }
                                

    int32_t deltaX= 0;;
    

    int32_t deltaY= 0;;
    




                        for (
    int32_t index = 0;index < this->sizeP; index++)
        {
deltaX= this->dxArray[index] +x;
    
deltaY= this->dyArray[index] +this->y;
    

                        if(this->basicColorArray[index] != this->CLEAR_COLOR)
                        
                                    {
                                    this->basicSetColorUtil.setBasicColorP(graphics, this->basicColorArray[index]);
    

                                    }
                                
this->animationInterfaceArray[index].paintXY(graphics, deltaX, deltaY);
    
}

}


};

            

