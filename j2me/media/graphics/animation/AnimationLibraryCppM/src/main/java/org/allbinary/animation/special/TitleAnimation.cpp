
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
        



            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/animation/IndexedAnimationBehavior.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SpecialAnimation.h"

class TitleAnimation: public SpecialAnimation {
        

    public static TitleAnimation createAnimation(std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new TitleAnimation(animationInterfaceArray, basicColorArray, dxArray, dyArray, y, width, new IndexedAnimationBehavior(1, 250));
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    public deltaX: float= 0.0;

    public deltaY: float= 0.0;

    public deltaZ: float= 0.0;

    const basicColorArray: std::vector<BasicColor>;

    const dxArray: std::vector<int32_t>;

    const dyArray: std::vector<int32_t>;

    const widthP: int32_t;

    const animationInterfaceArray: std::vector<IndexedAnimation>;

    const sizeP: int32_t;

    const y: int32_t;

    private: lastFrameStartTime: int64_t;

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

public constructor (std::vector<IndexedAnimation> animationInterfaceArray, std::vector<BasicColor> basicColorArray, std::vector<int32_t> dxArray, std::vector<int32_t> dyArray, int32_t y, int32_t width, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.lastFrameStartTime= Date.now();
    
this.animationInterfaceArray= animationInterfaceArray;
    
this.sizeP= this.animationInterfaceArray!.length;
    
this.basicColorArray= basicColorArray;
    
this.dxArray= dxArray;
    
this.dyArray= dyArray;
    
this.y= y;
    
this.widthP= width;
    
this.reset();
    
}


    public nextFrame(){

    currentTime: int64_t = Date.now()!;;
    

    totalTimeElapsed: int64_t = currentTime -this.lastFrameStartTime;;
    

    indexedAnimationBehavior: IndexedAnimationBehavior = this.getAnimationBehavior() as IndexedAnimationBehavior;;
    

                        if(totalTimeElapsed > indexedAnimationBehavior!.frameDelayTime)
                        
                                    {
                                    this.previousFrame();
    
this.lastFrameStartTime= currentTime;
    

                                    }
                                

                        if(this.animationInterfaceArray[0]!.getFrame() == 0)
                        
                                    {
                                    indexedAnimationBehavior!.loopIndex++;
    

                                    }
                                
}


    public bool isComplete(){

    indexedAnimationBehavior: IndexedAnimationBehavior = this.getAnimationBehavior() as IndexedAnimationBehavior;;
    

                        if(indexedAnimationBehavior!.loopTotal ==  -1 || indexedAnimationBehavior!.loopIndex < indexedAnimationBehavior!.loopTotal || this.getFrame() != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[0]!.getSize();;
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animationInterfaceArray[0]!.getFrame();;
    
}


    public setFrame(int32_t frame){




                        for (
    index: int32_t = 0;index < this.sizeP; index++)
        {
this.animationInterfaceArray[index]!.setFrame(frame);
    
}

}


    public setLastFrame(){
this.setFrame(this.getSize() -1);
    
}


    public reset(){
this.setLastFrame();
    

    indexedAnimationBehavior: IndexedAnimationBehavior = (this.getAnimationBehavior() as IndexedAnimationBehavior);;
    
indexedAnimationBehavior!.reset();
    
}


    public previousFrame(){




                        for (
    index: int32_t = 0;index < this.sizeP; index++)
        {
this.animationInterfaceArray[index]!.previousFrame();
    
}

}


    public paintFrameXY(Graphics graphics, int32_t frame, int32_t x, int32_t y){
this.setFrame(frame);
    
this.paintXY(graphics, x, y);
    
}


    const CLEAR_COLOR: BasicColor = BasicColorFactory.getInstance()!.CLEAR_COLOR;

    public paintXY(Graphics graphics, int32_t ax, int32_t ay){

    x: int32_t = 0;;
    

                        if(this.widthP != Integer.MIN_VALUE)
                        
                                    {
                                    x= ((this.displayInfoSingleton!.getLastWidth() -this.widthP) /2);
    

                                    }
                                

    deltaX: int32_t= 0;;
    

    deltaY: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < this.sizeP; index++)
        {
deltaX= this.dxArray[index] +x;
    
deltaY= this.dyArray[index] +this.y;
    

                        if(this.basicColorArray[index] != this.CLEAR_COLOR)
                        
                                    {
                                    this.basicSetColorUtil!.setBasicColorP(graphics, this.basicColorArray[index]!);
    

                                    }
                                
this.animationInterfaceArray[index]!.paintXY(graphics, deltaX, deltaY);
    
}

}


};

            

