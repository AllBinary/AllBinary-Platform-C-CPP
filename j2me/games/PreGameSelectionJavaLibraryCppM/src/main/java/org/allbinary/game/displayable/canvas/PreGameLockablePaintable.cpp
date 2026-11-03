
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/PreGameLockablePaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedResources.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/graphics/form/LockablePaintable.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

PreGameLockablePaintable::PreGameLockablePaintable(ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex) : LockablePaintable(lockedIndex){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paintableForm= paintableForm;
    
this->halfWidth= GameFeatureImageCacheFactory::getInstance()->getWithKey(LockedResources::getInstance()->LOCKED_DEMO_GAME_FEATURE_RESOURCE)->getWidth() /2;
    
}


    auto PreGameLockablePaintable::paint(Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y) -> void{

                        if(LockedUtil::getInstance()->isLocked() && this->getPaintableForm()->getSelectedIndex() >= this->getLockedIndex())
                        
                                    {
                                    this->getAnimation()->paintXY(graphics, this->getPaintableForm()->getDx() -this->halfWidth, this->getPaintableForm()->getDy() +34);
    

                                    }
                                
}


    auto PreGameLockablePaintable::getPaintableForm() -> ScrollCurrentSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paintableForm;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_CPP
