
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/BasicTouchInputFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"

class TouchButtonsMappingPaintable: public Paintable {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: int32_t foregroundColor;

    private: std::vector<std::vector<Paintable*>> paintableTable = std::vector<std::vector<Paintable*>>(0, std::vector<Paintable*>(0));

    private: TouchButtonLocationHelper* touchButtonLocationHelper = new TouchButtonLocationHelper();

public: TouchButtonsMappingPaintable(BasicColor* basicColor);

    private: void init();

                //@Throws(Exception.constructor)
            
    private: std::vector<std::vector<Paintable*>> createPaintableTable();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
