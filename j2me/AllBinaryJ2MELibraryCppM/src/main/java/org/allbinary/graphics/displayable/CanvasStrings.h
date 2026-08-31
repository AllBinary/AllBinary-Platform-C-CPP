
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CanvasStrings
            : public Object
         {
        

    private: static const instance: CanvasStrings = new CanvasStrings();

    public static CanvasStrings getInstance();

    public const CONSTRUCTOR: string = "MyCanvas::MyCanvas";

    public const PAUSE: string = "MyCanvas::pause";

    public const UN_PAUSE: string = "MyCanvas::unPause";

    public const SET_FULL_SCREEN_MODE: string = "setFullScreenMode";

    public const SIZE_CHANGED: string = "sizeChanged";

    public const SCALED_IMAGES: string = "scaledImages";

    public const PAINT: string = "paint";

    public const ON_DISPLAY_CHANGE_EVENT: string = "onDisplayChangeEvent";

    public const UPDATE_MEASUREMENT: string = "updateMeasurement";

    public const FD_WIDTH: string = " font/display width: ";

    public const FD_HEIGHT: string = " font/display height: ";

    public const EMPTY_CHILD_NAME_LIST: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    public const ABOUT: string = "About";

    public const OPTIONS: string = "Options";

    public const FONT_ATLAS: string = "/font.png";

    public const OBJ_MODEL: string = "_obj";

    public const MD2_MODEL: string = "_md2";

    public const _PNG: string = ".png";

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_CANVASSTRINGS_H
