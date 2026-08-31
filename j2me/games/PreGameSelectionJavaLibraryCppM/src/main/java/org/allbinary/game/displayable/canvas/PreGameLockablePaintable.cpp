
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedResources.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/graphics/form/LockablePaintable.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PreGameLockablePaintable: public LockablePaintable {
        

    private: const halfWidth: int32_t;

    private: const paintableForm: ScrollCurrentSelectionForm;

public constructor (ScrollCurrentSelectionForm paintableForm, int32_t lockedIndex){
            super(lockedIndex);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.paintableForm= paintableForm;
    
this.halfWidth= GameFeatureImageCacheFactory.getInstance()!.getWithKey(LockedResources.getInstance()!.LOCKED_DEMO_GAME_FEATURE_RESOURCE)!.getWidth() /2;
    
}


    public paint(Graphics graphics, int32_t currentIndex, int32_t x, int32_t y){

                        if(LockedUtil.getInstance()!.isLocked() && this.getPaintableForm()!.getSelectedIndex() >= this.getLockedIndex())
                        
                                    {
                                    this.getAnimation()!.paintXY(graphics, this.getPaintableForm()!.getDx() -this.halfWidth, this.getPaintableForm()!.getDy() +34);
    

                                    }
                                
}


    ScrollCurrentSelectionForm getPaintableForm(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paintableForm;
    
}


};

            

