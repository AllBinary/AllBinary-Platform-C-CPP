
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
        



        #ifndef ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H
        #define ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/StatePaintable.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicGameDemoPaintable: public StatePaintable {
        

    private: const mainDemoStatePaintable: Paintable;

    private: const ownershipPaintable: Paintable;

    private: const helpPaintableInterface: Paintable;

    private: currentStatePaintable: Paintable = NullPaintable.getInstance()!;

public constructor (Paintable mainDemoStatePaintable, Paintable ownershipPaintable, Paintable helpPaintableInterface);

    public setState(int32_t state);

    public paint(Graphics graphics);

    public Paintable getHelpPaintableInterface();

    setCurrentStatePaintable(Paintable currentStatePaintable);

    Paintable getCurrentStatePaintable();

    Paintable getMainDemoStatePaintable();

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H
