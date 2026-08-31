
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
        



        #ifndef ORG_ALLBINARY_LOG_LOGGING_H
        #define ORG_ALLBINARY_LOG_LOGGING_H

            #include "../../../java/lang/Object.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LOGGING
            : public Object
         {
        

    private: static logging: Vector = new Vector();

    public static bool contains(LOGGING logType);

    public static const GRAPHICSPAINT: LOGGING = new LOGGING("Graphics Paint");

    public static const GRAPHICSCREATION: LOGGING = new LOGGING("Graphics Creation");

    public static const GRAPHICSDELETION: LOGGING = new LOGGING("Graphics Deletion");

    public static const LOADINGERROR: LOGGING = new LOGGING("Loading Error");

    public static const MENUEVENT: LOGGING = new LOGGING("Menu Action Event");

    public static const MOUSEEVENT: LOGGING = new LOGGING("Mouse Action Event");

    public static const KEYEVENT: LOGGING = new LOGGING("Keyboard Action Event");

    public static const ACTIONEVENT: LOGGING = new LOGGING("Action Event");

    public static const ADJUSTMENTEVENT: LOGGING = new LOGGING("Adjustment Action Event");

    public static const COMPONENTEVENT: LOGGING = new LOGGING("Component Action Event");

    public static const CONTAINEREVENT: LOGGING = new LOGGING("Container Action Event");

    public static const FOCUSEVENT: LOGGING = new LOGGING("Focus Action Event");

    public static const HIERARCHYEVENT: LOGGING = new LOGGING("Hierarchy Action Event");

    public static const INPUTEVENT: LOGGING = new LOGGING("Input Action Event");

    public static const INVOCATIONEVENT: LOGGING = new LOGGING("Invocation Action Event");

    public static const ITEMEVENT: LOGGING = new LOGGING("Item Action Event");

    public static const PAINTEVENT: LOGGING = new LOGGING("Paint Action Event");

    public static const TEXTEVENT: LOGGING = new LOGGING("Text Action Event");

    public static const WINDOWEVENT: LOGGING = new LOGGING("Window Action Event");

    private: name: string;

private constructor (string value);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_LOG_LOGGING_H
