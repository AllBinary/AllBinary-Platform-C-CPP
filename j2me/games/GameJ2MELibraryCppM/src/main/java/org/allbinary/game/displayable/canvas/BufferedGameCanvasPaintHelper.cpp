
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BufferedGameCanvasPaintHelper.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"


BufferedGameCanvasPaintHelper::BufferedGameCanvasPaintHelper(AllBinaryGameCanvas* gameCanvas) : gameCanvas(NullCanvas::NULL_CANVAS), offScreenImage(std::vector<Image*>(BufferedGameCanvasPaintHelper::MAX_IMAGES)), previousImage(NullImage::NULL_IMAGE), circularIndexUtil(CircularIndexUtil::createInstance(BufferedGameCanvasPaintHelper::MAX_IMAGES)), drawCircularIndexUtil(CircularIndexUtil::createInstanceAt(BufferedGameCanvasPaintHelper::MAX_IMAGES -1, BufferedGameCanvasPaintHelper::MAX_IMAGES)), anchor(Anchor::TOP_LEFT){



                            throw Exception("No Longer Used");
                    
}


    auto BufferedGameCanvasPaintHelper::process() -> void{

    MyCanvas* myCanvas = (dynamic_cast<MyCanvas*>(this->gameCanvas));;
    
myCanvas->draw(this->offScreenImage[this->circularIndexUtil->getIndex()]->getGraphics());
    
this->circularIndexUtil->next();
    
this->drawCircularIndexUtil->next();
    
}


    auto BufferedGameCanvasPaintHelper::paint(Graphics* graphics) -> void{
this->previousImage= this->offScreenImage[this->drawCircularIndexUtil->getIndex()];
    
graphics->drawImage(this->previousImage, 0, 0, this->anchor);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_CPP
