
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H

#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CurrentlyPressedTouchButtonSingleton.h"
#include "TouchButtonInput.h"

class CurrentlyPressedTouchButtonSingletonDebug: public CurrentlyPressedTouchButtonSingleton {
        

    private: static const instanceC: CurrentlyPressedTouchButtonSingletonDebug = new CurrentlyPressedTouchButtonSingletonDebug();

    public static CurrentlyPressedTouchButtonSingleton getInstance();

    private: string: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: listString: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: append: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: const PRESSED_AND_FIRED: string = "pressed & fired";

    private: const PRESSED_AND_NOT_FIRED: string = "pressed in button but not fired";

    private: const ASSOCIATED_RELEASED_AND_FIRED: string = "assoc. rel & fired";

    private: const RELEASED_AND_FIRED: string = "rel & fired 1";

    private: const RELEASED_AND_FIRED_2: string = "rel & fired 2";

    private: const RELEASED_AND_NOT_FIRED: string = "rel & not fired";

    appendTouchButtonInput(string append, TouchButtonInput touchButtonInput);

    append(string append);

    public clearLog(int32_t x, int32_t y);

    public releaseAndNotFired();

    public releaseAndFired(TouchButtonInput touchButtonInput);

    public releaseAndFired2(TouchButtonInput touchButtonInput);

    public releaseAndFiredAssociated(TouchButtonInput touchButtonInput);

    public pressedAndFired(TouchButtonInput touchButtonInput);

    public pressedAndNotFired(TouchButtonInput touchButtonInput);

    public TouchButtonInput removeAt(int32_t index);

    public bool remove(TouchButtonInput touchButtonInput);

    public add(TouchButtonInput touchButtonInput);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_CURRENTLYPRESSEDTOUCHBUTTONSINGLETONDEBUG_H
