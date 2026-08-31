
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

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/CellPositionFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchButtonLocationHelper.h"
#include "CommonButtons.h"
#include "TouchButton.h"
#include "BasicTouchInputFactory.h"
#include "TouchButtonBlankResource.h"

class TouchButtonsMappingPaintable: public Paintable {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    foregroundColor: int32_t;

    private: paintableTable: std::vector<std::vector<Paintable>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: touchButtonLocationHelper: TouchButtonLocationHelper = new TouchButtonLocationHelper();

public constructor (BasicColor basicColor);

    init();

                //@Throws(Exception.constructor)
            
    std::vector<std::vector<Paintable>> createPaintableTable();

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONSMAPPINGPAINTABLE_H
