
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class GameFeatureImageCacheFactory;
class LockedResources;
class LockedUtil;
#include <org/allbinary/graphics/form/LockablePaintable.h>
class ScrollCurrentSelectionForm;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PreGameLockablePaintable: public LockablePaintable {

    private: int32_t halfWidth;

    private: ScrollCurrentSelectionForm* paintableForm;

public: PreGameLockablePaintable(ScrollCurrentSelectionForm* paintableForm, int32_t lockedIndex);

    public: void paint(Graphics* graphics, int32_t currentIndex, int32_t x, int32_t y);

    /*protected*/ public: ScrollCurrentSelectionForm* getPaintableForm();

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_PREGAMELOCKABLEPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/image/GameFeatureImageCacheFactory.h>)
#include <org/allbinary/image/GameFeatureImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockedResources.h>)
#include <org/allbinary/logic/system/security/licensing/LockedResources.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/LockedUtil.h>)
#include <org/allbinary/logic/system/security/licensing/LockedUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/form/LockablePaintable.h>)
#include <org/allbinary/graphics/form/LockablePaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollCurrentSelectionForm.h>
#endif

        #endif
    
