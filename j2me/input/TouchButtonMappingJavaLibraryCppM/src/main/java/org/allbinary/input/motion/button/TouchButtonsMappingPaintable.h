
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class CellPositionFactory;
class BasicColor;
#include <org/allbinary/graphics/paint/Paintable.h>
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonLocationHelper;
class CommonButtons;
class TouchButton;
class BasicTouchInputFactory;
class TouchButtonBlankResource;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonsMappingPaintable: public Paintable {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: int32_t foregroundColor;

    private: std::vector<std::vector<Paintable*>> paintableTable;

    private: TouchButtonLocationHelper* touchButtonLocationHelper;

public: TouchButtonsMappingPaintable(BasicColor* basicColor);

    private: void init();

                //@Throws(Exception.constructor)
            
    private: std::vector<std::vector<Paintable*>> createPaintableTable();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/CellPositionFactory.h>)
#include <org/allbinary/graphics/CellPositionFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonLocationHelper.h")
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#endif
#if __has_include("org/allbinary/input/motion/button/CommonButtons.h")
#include "org/allbinary/input/motion/button/CommonButtons.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButton.h")
#include "org/allbinary/input/motion/button/TouchButton.h"
#endif
#if __has_include("org/allbinary/input/motion/button/BasicTouchInputFactory.h")
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonBlankResource.h")
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#endif

        #endif
    
