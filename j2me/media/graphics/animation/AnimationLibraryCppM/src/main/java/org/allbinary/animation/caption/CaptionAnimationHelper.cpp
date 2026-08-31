
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/text/TextAnimation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CaptionAnimationHelperBase.h"
#include "CaptionAnimation.h"

class CaptionAnimationHelper: public CaptionAnimationHelperBase {
        

    private: const timeHelper: TimeDelayHelper = new TimeDelayHelper(620);

    private: const textAnimation: TextAnimation = new TextAnimation(StringUtil.getInstance()!.EMPTY_STRING, AnimationBehavior.getInstance());

    private: const captionAnimation: Animation;

    private: animation: Animation = NullAnimationFactory.getFactoryInstance()!.getInstance(0)!;

public constructor (Animation captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy){

            super();
        this.captionAnimation= new CaptionAnimation(captionAnimation, this.textAnimation, captionDx, captionDy, dx, dy);
    
}


    public bool isShowing(){

                        if(this.animation == this.captionAnimation)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public tick(){

                        if(this.timeHelper!.isTime(GameTickTimeDelayHelperFactory.getInstance()!.startTime))
                        
                                    {
                                    this.animation= NullAnimationFactory.getFactoryInstance()!.getInstance(0);
    

                                    }
                                
}


    public update(string message, BasicColor basicColor){
this.textAnimation!.setBasicColorP(basicColor);
    
this.textAnimation!.setText(message);
    
this.animation= this.captionAnimation;
    
this.timeHelper!.setStartTimeTNT();
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.animation.paintXY(graphics, x, y);
    
}


};

            

