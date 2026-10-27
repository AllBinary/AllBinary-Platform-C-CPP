
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"


BasicPaintablesCanvas::BasicPaintablesCanvas(CommandListener* cmdListener, std::string name, AllBinaryGameLayerManager* allBinaryGameLayerManager, std::vector<Paintable*> paintableArray) : GameCommandCanvas(cmdListener, name, allBinaryGameLayerManager->getBackgroundBasicColor(), allBinaryGameLayerManager->getForegroundBasicColor()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->paintableArray= paintableArray;
    
this->colorFillPaintable= ColorFillPaintableFactory::getInstance()->getInstance(allBinaryGameLayerManager->getBackgroundBasicColor(), false);
    
}


    auto BasicPaintablesCanvas::paint(Graphics* graphics) -> void{
this->colorFillPaintable->paint(graphics);
    
graphics->setColor(this->foregroundColor);
    




                        for (
    int32_t index = this->paintableArray.size() -1;index >= 0; index--)
        {
this->paintableArray[index]->paint(graphics);
    
}

GameCommandCanvas::paint(graphics);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPAINTABLESCANVAS_CPP
