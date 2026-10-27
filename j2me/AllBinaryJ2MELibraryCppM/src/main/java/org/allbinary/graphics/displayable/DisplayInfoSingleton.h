
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/BaseScalable.h"
#include "org/allbinary/graphics/displayable/ScalableListener.h"

class DisplayInfoSingleton
            : public Object
         {

    private: static DisplayInfoSingleton* SINGLETON() { static std::unique_ptr<DisplayInfoSingleton> value(new DisplayInfoSingleton()); return value.get(); }

    public: static DisplayInfoSingleton* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonLabels* commonLabels = CommonLabels::getInstance();

    private: CommonSeps* commonSeps = CommonSeps::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    public: const std::string ORIENTATION = "ORIENTATION";

    public: const std::string ADJUSTING_FOR_SCALING_IN_PORTRAIT = "Adjusting for Scaling in portrait display ratio: ";

    public: const std::string ADJUSTING_FOR_SCALING_IN_LANDSCAPE = "Adjusting for Scaling in landscape display ratio: ";

    private: std::vector<int32_t> last = std::vector<int32_t>(4);

    private: std::vector<int32_t> lastHalf = std::vector<int32_t>(4);

    private: std::vector<int32_t> full = std::vector<int32_t>(4);

    private: int32_t top= 0;

    private: int32_t left= 0;

    private: int32_t xOffset= 0;

    private: int32_t yOffset= 0;

    private: float scaleLargestTo= 0.0;

    public: const int32_t WIDTH = 0;

    public: const int32_t HEIGHT = 1;

    public: const int32_t CUSTOM_WIDTH = 2;

    public: const int32_t CUSTOM_HEIGHT = 3;

    private: BaseScalable* scalableListener = new BaseScalable();

    private: float displayRatio= 0.0;

    private: float ratio = 1.0;

private: DisplayInfoSingleton();

    public: std::vector<int32_t> getLastHalf();

    public: std::vector<int32_t> getLast();

    public: std::vector<int32_t> getFull();

    public: float getScaleLargestTo();

    public: void setScaleLargestTo(int32_t scaleLargestTo);

    private: const std::string SET_LAST_SIZE_METHOD_NAME = "setLastSize";

    private: const std::string FULL_WIDTH = " FullWidth: ";

    private: const std::string FULL_HEIGHT = " FullHeight: ";

    private: const std::string LAST_WIDTH = "LastWidth: ";

    private: const std::string LAST_HEIGHT = " LastHeight: ";

    private: const std::string PORTRAIT = "Portrait";

    private: const std::string LANDSCAPE = "Landscape";

    public: void setLastSize(int32_t aLastWidth, int32_t aLastHeight, std::string reason);

    private: void setLastSizeForce(int32_t aLastWidth, int32_t aLastHeight, std::string reason);

    public: bool isPortraitWH(int32_t lastWidth, int32_t lastHeight);

    public: bool isPortrait();

    public: DisplayChangeEvent* displayChangeEvent = new DisplayChangeEvent(this);

    private: const std::string FIRE_METHOD_NAME = "fire";

    private: const std::string REASON = "reason: ";

    private: const std::string UPDATE_FROM_ORIENTATION_CHANGE = "Updating from Orientation Change ";

    private: BasicArrayList* list = new BasicArrayListD();

    public: void add(std::string reason);

    public: void process();

    public: void processForced();

    public: void update(Displayable* displayable, std::string reason);

    private: const std::string DISPLAY_INFO = "Display Info: ";

    private: const std::string FULL = "full";

    private: const std::string LAST = "last";

    private: const std::string LAST_HALF = "lastHalf";

    public: std::string toString();

    public: std::string toStringAppend(StringMaker* stringBuffer);

    public: int32_t getTop();

    public: int32_t getLeft();

    public: int32_t getLastWidth();

    public: int32_t getLastHeight();

    public: int32_t getLastHalfWidth();

    public: int32_t getLastHalfHeight();

    public: int32_t getCustomLastWidth();

    public: int32_t getCustomLastHeight();

    public: int32_t getRawLastWidth();

    public: int32_t getRawLastHeight();

    public: void setCustom(int32_t width, int32_t height);

    public: void setScalableListener(BaseScalable* scalableListener);

    public: ScalableListener* getScalableListener();

    public: float getRatio();

    public: float getDisplayRatio();

    public: void setOffset(int32_t left, int32_t top);

    public: int32_t getxOffset();

    public: int32_t getyOffset();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYINFOSINGLETON_H
