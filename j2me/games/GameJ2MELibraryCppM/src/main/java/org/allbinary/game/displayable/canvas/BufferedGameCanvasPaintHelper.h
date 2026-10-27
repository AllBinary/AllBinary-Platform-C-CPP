
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Canvas;
class Graphics;
class Image;
class NullCanvas;
class NullImage;
class Anchor;
class MyCanvas;
#include <org/allbinary/graphics/paint/ProcessPaintable.h>
class CircularIndexUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryGameCanvas;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BufferedGameCanvasPaintHelper: public ProcessPaintable {

    private: static inline const int32_t MAX_IMAGES = 4;

    private: Canvas* gameCanvas;

    private: std::vector<Image*> offScreenImage;

    private: Image* previousImage;

    private: CircularIndexUtil* circularIndexUtil;

    private: CircularIndexUtil* drawCircularIndexUtil;

public: BufferedGameCanvasPaintHelper(AllBinaryGameCanvas* gameCanvas);

    public: void process();

    private: int32_t anchor;

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BUFFEREDGAMECANVASPAINTHELPER_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/ProcessPaintable.h>)
#include <org/allbinary/graphics/paint/ProcessPaintable.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

        #endif
    
