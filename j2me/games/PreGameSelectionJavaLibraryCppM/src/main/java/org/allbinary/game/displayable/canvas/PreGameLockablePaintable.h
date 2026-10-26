
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H

            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedResources.h>

      
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>

      
#include <org/allbinary/graphics/form/LockablePaintable.h>

      
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PreGameLockablePaintable: public LockablePaintable {

    private: int32_t halfWidth;

    private: ScrollCurrentSelectionForm paintableForm;

public: PreGameLockablePaintable(ScrollCurrentSelectionForm paintableForm, int32_t lockedIndex);

    public: void paint(Graphics graphics, int32_t currentIndex, int32_t x, int32_t y);

    protected: ScrollCurrentSelectionForm getPaintableForm();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H
