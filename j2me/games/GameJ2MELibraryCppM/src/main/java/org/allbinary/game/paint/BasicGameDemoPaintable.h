
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class NullPaintable;
class Paintable;
#include <org/allbinary/graphics/paint/StatePaintable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGameDemoPaintable: public StatePaintable {

    private: Paintable* mainDemoStatePaintable;

    private: Paintable* ownershipPaintable;

    private: Paintable* helpPaintableInterface;

    private: Paintable* currentStatePaintable;

public: BasicGameDemoPaintable(Paintable* mainDemoStatePaintable, Paintable* ownershipPaintable, Paintable* helpPaintableInterface);

    public: void setState(int32_t state);

    public: void paint(Graphics* graphics);

    public: Paintable* getHelpPaintableInterface();

    /*protected*/ public: void setCurrentStatePaintable(Paintable* currentStatePaintable);

    /*protected*/ public: Paintable* getCurrentStatePaintable();

    /*protected*/ public: Paintable* getMainDemoStatePaintable();

};

            


        #endif //ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PAINT_BASICGAMEDEMOPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/StatePaintable.h>)
#include <org/allbinary/graphics/paint/StatePaintable.h>
#endif

        #endif
    
