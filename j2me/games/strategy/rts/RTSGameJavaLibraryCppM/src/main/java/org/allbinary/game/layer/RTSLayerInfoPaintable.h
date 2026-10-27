
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>
class NullInitUpdatePaintable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SelectionHudPaintable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSLayerInfoPaintable: public InitUpdatePaintable {

    private: InitUpdatePaintable* initUpdatePaintable;

public: RTSLayerInfoPaintable();

    public: void update();

    public: void paint(Graphics* graphics);

    public: void updateRTSLayerInfoInit(InitUpdatePaintable* hudPaintable);

    public: void updateRTSLayerInfoSelection(SelectionHudPaintable* hudPaintable);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERINFOPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/InitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullInitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/NullInitUpdatePaintable.h>
#endif
#if __has_include("org/allbinary/game/layer/SelectionHudPaintable.h")
#include "org/allbinary/game/layer/SelectionHudPaintable.h"
#endif

        #endif
    
