
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicColor;
class ColorChangeEventHandler;
#include <org/allbinary/graphics/color/ColorChangeListener.h>
class FormPaintable;
class ScrollSelectionForm;
class ABStringComponent;
class ABTextItem;
class Paintable;
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
class MainGameDemoStatePaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameScrollMenuPaintable: public BasicGameDemoPaintable, public ColorChangeListener {

public: GameScrollMenuPaintable(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface, BasicColor* basicColor);

    public: void setState(int32_t state);

    public: void onEvent(AllBinaryEventObject* eventObject);

    /*protected*/ public: void setColor(BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_GAMESCROLLMENUPAINTABLE_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorChangeEventHandler.h>)
#include <org/allbinary/graphics/color/ColorChangeEventHandler.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorChangeListener.h>)
#include <org/allbinary/graphics/color/ColorChangeListener.h>
#endif
#if __has_include(<org/allbinary/graphics/form/FormPaintable.h>)
#include <org/allbinary/graphics/form/FormPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABStringComponent.h>)
#include <org/allbinary/graphics/form/item/ABStringComponent.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABTextItem.h>)
#include <org/allbinary/graphics/form/item/ABTextItem.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/game/paint/BasicGameDemoPaintable.h")
#include "org/allbinary/game/paint/BasicGameDemoPaintable.h"
#endif
#if __has_include("org/allbinary/game/paint/MainGameDemoStatePaintable.h")
#include "org/allbinary/game/paint/MainGameDemoStatePaintable.h"
#endif

        #endif
    
