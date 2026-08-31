
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H

            #include "../../../../../java/lang/Exception.h"
        
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
        #include "AllBinaryGameCanvas.h"

class BufferedGameCanvasPaintHelper: public ProcessPaintable {
        

    private: static const MAX_IMAGES: int32_t = 4;

    private: gameCanvas: Canvas = NullCanvas.NULL_CANVAS;

    private: const offScreenImage: std::vector<Image> = new Array(BufferedGameCanvasPaintHelper.MAX_IMAGES);

    private: previousImage: Image = NullImage.NULL_IMAGE;

    private: const circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(BufferedGameCanvasPaintHelper.MAX_IMAGES)!;

    private: const drawCircularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstanceAt(BufferedGameCanvasPaintHelper.MAX_IMAGES -1, BufferedGameCanvasPaintHelper.MAX_IMAGES)!;

public constructor (AllBinaryGameCanvas gameCanvas);

    public process();

    private: anchor: int32_t = Anchor.TOP_LEFT;

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H
