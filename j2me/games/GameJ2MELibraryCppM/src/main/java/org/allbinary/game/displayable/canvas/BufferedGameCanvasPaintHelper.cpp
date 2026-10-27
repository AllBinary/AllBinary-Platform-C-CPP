
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

class BufferedGameCanvasPaintHelper: public ProcessPaintable {

    private: static inline const int32_t MAX_IMAGES = 4;

    private: Canvas* gameCanvas = NullCanvas::NULL_CANVAS;

    private: const std::vector<Image*> offScreenImage = std::vector<Image*>(BufferedGameCanvasPaintHelper::MAX_IMAGES);

    private: Image* previousImage = NullImage::NULL_IMAGE;

    private: CircularIndexUtil* circularIndexUtil = CircularIndexUtil::createInstance(BufferedGameCanvasPaintHelper::MAX_IMAGES);

    private: CircularIndexUtil* drawCircularIndexUtil = CircularIndexUtil::createInstanceAt(BufferedGameCanvasPaintHelper::MAX_IMAGES -1, BufferedGameCanvasPaintHelper::MAX_IMAGES);

public: BufferedGameCanvasPaintHelper(AllBinaryGameCanvas* gameCanvas){



                            throw new Exception("No Longer Used");
                    
}


    public: void process(){

    MyCanvas* myCanvas = (dynamic_cast<MyCanvas*>(this->gameCanvas));;
    
myCanvas->draw(this->offScreenImage[this->circularIndexUtil->getIndex()].getGraphics());
    
this->circularIndexUtil->next();
    
this->drawCircularIndexUtil->next();
    
}


    private: int32_t anchor = Anchor::TOP_LEFT;

    public: void paint(Graphics* graphics){
this->previousImage= this->offScreenImage[this->drawCircularIndexUtil->getIndex()];
    
graphics->drawImage(this->previousImage, 0, 0, this->anchor);
    
}


};

            

