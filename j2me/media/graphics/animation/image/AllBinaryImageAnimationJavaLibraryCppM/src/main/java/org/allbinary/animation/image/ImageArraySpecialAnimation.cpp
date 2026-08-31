
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/special/SpecialAnimationInterface.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageArrayAnimation.h"

class ImageArraySpecialAnimation: public ImageArrayAnimation: public SpecialAnimationInterface {
        

    private: const timeDelayHelper: TimeDelayHelper = new TimeDelayHelper(270);

public constructor (std::vector<Image> imageArray, AnimationBehavior animationBehavior){
            super(imageArray, animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.reset();
    
}


    private: loopCount: int32_t = 0;

    public int32_t getLoopCount(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.loopCount;
    
}


    public setLastFrame(){
this.circularIndexUtil!.setIndex(this.circularIndexUtil!.getSize() -1);
    
}


    public reset(){
this.setFrame(this.getSize() -1);
    
this.loopCount= 0;
    
}


    public nextFrame(){

                        if(this.getFrame() > 0)
                        
                                    {
                                    
                        if(this.timeDelayHelper!.isTime(GameTickTimeDelayHelperFactory.getInstance()!.startTime))
                        
                                    {
                                    this.previousFrame();
    

                        if(this.getFrame() == 0)
                        
                                    {
                                    this.loopCount++;
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    private: const loopCountTotal: int32_t = 1;

    public bool isComplete(){

                        if(this.loopCount < this.loopCountTotal || this.getFrame() != 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
x= DisplayInfoSingleton.getInstance()!.getLastHalfWidth() -(this.getImage(this.circularIndexUtil!.getIndex())!.getWidth()>>1);
    
y= 5;
    
super.paintXY(graphics, x, y);
    
}


};

            

