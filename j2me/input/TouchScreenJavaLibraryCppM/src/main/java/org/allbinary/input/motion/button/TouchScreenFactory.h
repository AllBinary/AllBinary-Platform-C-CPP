
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchScreenTypesFactory.h"
#include "TouchScreenType.h"

class TouchScreenFactory
            : public Object
         {
        

    private: static const SINGLETON: TouchScreenFactory = new TouchScreenFactory();

    public static TouchScreenFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: touch: bool= false;

    private: multiTouch: bool= false;

    private: multiTouchDistinct: bool= false;

    private: touchScreenType: TouchScreenType = TouchScreenTypesFactory.getInstance()!.NOTOUCH;

private constructor ();

    public setMultiTouch(bool multiTouch);

    public bool isMultiTouch();

    public setTouch(bool touch);

    public bool isTouch();

    public setMultiTouchDistinct(bool multiTouchDistinct);

    public bool isMultiTouchDistinct();

    public setTouchScreenType(TouchScreenType touchScreenType);

    public TouchScreenType getTouchScreenType();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHSCREENFACTORY_H
