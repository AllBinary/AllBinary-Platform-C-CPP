
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

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedResources.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ItemPaintable.h"

class LockablePaintable: public ItemPaintable {
        

    private: const animation: Animation = FeaturedAnimationInterfaceFactoryInterfaceFactory.getInstance()!.get(LockedResources.getInstance()!.LOCKED_DEMO_GAME_FEATURE_RESOURCE)!.getInstance(0)!;

    private: const lockedIndex: int32_t;

public constructor (int32_t lockedIndex){

            super();
        this.lockedIndex= lockedIndex;
    
}


    public paint(Graphics graphics, int32_t currentIndex, int32_t x, int32_t y){

                        if(LockedUtil.getInstance()!.isLocked() && currentIndex >= this.getLockedIndex())
                        
                                    {
                                    this.getAnimation()!.paintXY(graphics, x, y);
    

                                    }
                                
}


    int32_t getLockedIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lockedIndex;
    
}


    Animation getAnimation(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.animation;
    
}


};

            

