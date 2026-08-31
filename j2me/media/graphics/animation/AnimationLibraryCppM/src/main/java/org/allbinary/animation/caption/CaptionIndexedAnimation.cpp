
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

      
#include <javax/microedition/media/Player.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/AnimationEventHandler.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/logic/math/PrimitiveIntUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/time/GameTickTimeDelayHelperFactory.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CaptionIndexedAnimation: public IndexedAnimation {
        

    private: animationInterface: Animation;

    private: movieIndexedAnimationInterface: IndexedAnimation;

    private: captionDx: int32_t;

    private: captionDy: int32_t;

    private: dx: int32_t;

    private: dy: int32_t;

    private: time: int32_t;

    private: END_EVENT: AllBinaryEventObject;

    private: timeDelayHelper: TimeDelayHelper;

    private: player: Player;

public constructor (Animation animationInterface, IndexedAnimation movieIndexedAnimationInterface, Player player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.animationInterface= animationInterface;
    
this.movieIndexedAnimationInterface= movieIndexedAnimationInterface;
    
this.captionDx= captionDx;
    
this.captionDy= captionDy;
    
this.dx= dx;
    
this.dy= dy;
    
this.time= time;
    
this.END_EVENT= new AllBinaryEventObject(this);
    

    timePerFrame: int32_t = this.time /this.getSize();;
    
this.timeDelayHelper= new TimeDelayHelper(timePerFrame);
    
this.player= player;
    
this.player.start();
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){

                        if(this.timeDelayHelper!.isTime(GameTickTimeDelayHelperFactory.getInstance()!.startTime))
                        
                                    {
                                    this.movieIndexedAnimationInterface!.nextFrame();
    

                                    }
                                

                        if(this.isLastFrame())
                        
                                    {
                                    AnimationEventHandler.getInstance()!.fireEvent(this.END_EVENT);
    

                                    }
                                
}


    public bool isLastFrame(){

                        if(this.movieIndexedAnimationInterface!.getFrame() == this.getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public previousFrame(){
this.movieIndexedAnimationInterface!.previousFrame();
    
}


    public setFrame(int32_t index){
this.movieIndexedAnimationInterface!.setFrame(index);
    
}


    public int32_t getFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.movieIndexedAnimationInterface!.getFrame();;
    
}


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.movieIndexedAnimationInterface!.getSize();;
    
}


    public setSequence(std::vector<int32_t> sequence){
}


    public std::vector<int32_t> getSequence(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PrimitiveIntUtil.getArrayInstance();;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.animationInterface!.paintXY(graphics, x +this.captionDx, y +this.captionDy);
    
this.movieIndexedAnimationInterface!.paintXY(graphics, x +this.captionDx +this.dx, y +this.captionDy +this.dy);
    
}


    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z){
this.animationInterface!.paintThreedXYZ(graphics, x +this.captionDx, y +this.captionDy, z);
    
this.movieIndexedAnimationInterface!.paintThreedXYZ(graphics, x +this.captionDx +this.dx, y +this.captionDy +this.dy, z);
    
}


};

            

