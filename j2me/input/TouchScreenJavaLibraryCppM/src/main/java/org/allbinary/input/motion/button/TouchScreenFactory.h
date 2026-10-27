
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchScreenTypesFactory.h"
#include "org/allbinary/input/motion/button/TouchScreenType.h"

class TouchScreenFactory
            : public Object
         {

    private: static TouchScreenFactory* SINGLETON() { static std::unique_ptr<TouchScreenFactory> value(new TouchScreenFactory()); return value.get(); }

    public: static TouchScreenFactory* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: bool touch= false;

    private: bool multiTouch= false;

    private: bool multiTouchDistinct= false;

    private: TouchScreenType* touchScreenType = TouchScreenTypesFactory::getInstance()->NOTOUCH;

private: TouchScreenFactory();

    public: void setMultiTouch(bool multiTouch);

    public: bool isMultiTouch();

    public: void setTouch(bool touch);

    public: bool isTouch();

    public: void setMultiTouchDistinct(bool multiTouchDistinct);

    public: bool isMultiTouchDistinct();

    public: void setTouchScreenType(TouchScreenType* touchScreenType);

    public: TouchScreenType* getTouchScreenType();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
