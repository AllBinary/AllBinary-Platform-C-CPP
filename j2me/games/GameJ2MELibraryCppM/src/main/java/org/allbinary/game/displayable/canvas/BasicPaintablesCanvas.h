
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameCommandCanvas.h"

class BasicPaintablesCanvas: public GameCommandCanvas {

    private: std::vector<Paintable> paintableArray;

    private: ColorFillBasePaintable colorFillPaintable;

public: BasicPaintablesCanvas(CommandListener cmdListener, std::string name, AllBinaryGameLayerManager allBinaryGameLayerManager, std::vector<Paintable> paintableArray);

    public: void paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_H
