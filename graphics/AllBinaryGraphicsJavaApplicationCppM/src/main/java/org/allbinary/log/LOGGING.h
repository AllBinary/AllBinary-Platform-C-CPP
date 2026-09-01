
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

    private: static Vector logging = Vector();

    public: static bool contains(LOGGING logType);

    public: static const LOGGING GRAPHICSPAINT = LOGGING("Graphics Paint");

    public: static const LOGGING GRAPHICSCREATION = LOGGING("Graphics Creation");

    public: static const LOGGING GRAPHICSDELETION = LOGGING("Graphics Deletion");

    public: static const LOGGING LOADINGERROR = LOGGING("Loading Error");

    public: static const LOGGING MENUEVENT = LOGGING("Menu Action Event");

    public: static const LOGGING MOUSEEVENT = LOGGING("Mouse Action Event");

    public: static const LOGGING KEYEVENT = LOGGING("Keyboard Action Event");

    public: static const LOGGING ACTIONEVENT = LOGGING("Action Event");

    public: static const LOGGING ADJUSTMENTEVENT = LOGGING("Adjustment Action Event");

    public: static const LOGGING COMPONENTEVENT = LOGGING("Component Action Event");

    public: static const LOGGING CONTAINEREVENT = LOGGING("Container Action Event");

    public: static const LOGGING FOCUSEVENT = LOGGING("Focus Action Event");

    public: static const LOGGING HIERARCHYEVENT = LOGGING("Hierarchy Action Event");

    public: static const LOGGING INPUTEVENT = LOGGING("Input Action Event");

    public: static const LOGGING INVOCATIONEVENT = LOGGING("Invocation Action Event");

    public: static const LOGGING ITEMEVENT = LOGGING("Item Action Event");

    public: static const LOGGING PAINTEVENT = LOGGING("Paint Action Event");

    public: static const LOGGING TEXTEVENT = LOGGING("Text Action Event");

    public: static const LOGGING WINDOWEVENT = LOGGING("Window Action Event");

    private: std::string name;

private: LOGGING(std::string value);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOG_LOGGING_H
