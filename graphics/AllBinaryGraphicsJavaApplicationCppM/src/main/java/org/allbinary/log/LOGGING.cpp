
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LOGGING
            : public Object
         {

    private: static BasicArrayList logging = BasicArrayListD();

    public: static bool contains(LOGGING logType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LOGGING::logging.contains(logType.toString());;
    
}


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

private: LOGGING(std::string value){
this->name= value;
    
LOGGING::logging.add(value);
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

