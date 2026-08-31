
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H

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

public constructor (Animation animationInterface, IndexedAnimation movieIndexedAnimationInterface, Player player, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehavior animationBehavior);

                //@Throws(Exception.constructor)
            
    public nextFrame();

    public bool isLastFrame();

    public previousFrame();

    public setFrame(int32_t index);

    public int32_t getFrame();

    public int32_t getSize();

    public setSequence(std::vector<int32_t> sequence);

    public std::vector<int32_t> getSequence();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_CAPTION_CAPTIONINDEXEDANIMATION_H
