
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Displayable.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/LastDisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/os/GenericOperatingSystem.h>

      
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BaseScalable.h"
#include "ScalableListener.h"

class DisplayInfoSingleton
            : public Object
         {
        

    private: static const SINGLETON: DisplayInfoSingleton = new DisplayInfoSingleton();

    public static DisplayInfoSingleton getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonLabels: CommonLabels = CommonLabels.getInstance()!;

    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    public const ORIENTATION: string = "ORIENTATION";

    public const ADJUSTING_FOR_SCALING_IN_PORTRAIT: string = "Adjusting for Scaling in portrait display ratio: ";

    public const ADJUSTING_FOR_SCALING_IN_LANDSCAPE: string = "Adjusting for Scaling in landscape display ratio: ";

    private: last: std::vector<int32_t> = new Array(4);

    private: lastHalf: std::vector<int32_t> = new Array(4);

    private: full: std::vector<int32_t> = new Array(4);

    private: top: int32_t= 0;

    private: left: int32_t= 0;

    private: xOffset: int32_t= 0;

    private: yOffset: int32_t= 0;

    private: scaleLargestTo: float= 0.0;

    public const WIDTH: int32_t = 0;

    public const HEIGHT: int32_t = 1;

    public const CUSTOM_WIDTH: int32_t = 2;

    public const CUSTOM_HEIGHT: int32_t = 3;

    private: scalableListener: BaseScalable = new BaseScalable();

    private: displayRatio: float= 0.0;

    private: ratio: float = 1.0;

private constructor ();

    public std::vector<int32_t> getLastHalf();

    public std::vector<int32_t> getLast();

    public std::vector<int32_t> getFull();

    public float getScaleLargestTo();

    public setScaleLargestTo(int32_t scaleLargestTo);

    private: const SET_LAST_SIZE_METHOD_NAME: string = "setLastSize";

    private: const FULL_WIDTH: string = " FullWidth: ";

    private: const FULL_HEIGHT: string = " FullHeight: ";

    private: const LAST_WIDTH: string = "LastWidth: ";

    private: const LAST_HEIGHT: string = " LastHeight: ";

    private: const PORTRAIT: string = "Portrait";

    private: const LANDSCAPE: string = "Landscape";

    public setLastSize(int32_t aLastWidth, int32_t aLastHeight, string reason);

    setLastSizeForce(int32_t aLastWidth, int32_t aLastHeight, string reason);

    public bool isPortraitWH(int32_t lastWidth, int32_t lastHeight);

    public bool isPortrait();

    public const displayChangeEvent: DisplayChangeEvent = new DisplayChangeEvent(this);

    private: const FIRE_METHOD_NAME: string = "fire";

    private: const REASON: string = "reason: ";

    private: const UPDATE_FROM_ORIENTATION_CHANGE: string = "Updating from Orientation Change ";

    private: const list: BasicArrayList = new BasicArrayListD();

    public add(string reason);

    public process();

    public processForced();

    public update(Displayable displayable, string reason);

    private: const DISPLAY_INFO: string = "Display Info: ";

    private: const FULL: string = "full";

    private: const LAST: string = "last";

    private: const LAST_HALF: string = "lastHalf";

    public string toString();

    public string toStringAppend(StringMaker stringBuffer);

    public int32_t getTop();

    public int32_t getLeft();

    public int32_t getLastWidth();

    public int32_t getLastHeight();

    public int32_t getLastHalfWidth();

    public int32_t getLastHalfHeight();

    public int32_t getCustomLastWidth();

    public int32_t getCustomLastHeight();

    public int32_t getRawLastWidth();

    public int32_t getRawLastHeight();

    public setCustom(int32_t width, int32_t height);

    public setScalableListener(BaseScalable scalableListener);

    public ScalableListener getScalableListener();

    public float getRatio();

    public float getDisplayRatio();

    public setOffset(int32_t left, int32_t top);

    public int32_t getxOffset();

    public int32_t getyOffset();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
