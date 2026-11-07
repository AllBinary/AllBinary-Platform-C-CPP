
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
        



        #ifndef ORG_ALLBINARY_LOG_LOGGING_CPP
        #define ORG_ALLBINARY_LOG_LOGGING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/log/LOGGING.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
BasicArrayList* LOGGING::logging = new BasicArrayListD();

LOGGING::LOGGING(std::string value){
this->name= value;
    
LOGGING::logging->add(value);
    
}


    auto LOGGING::contains(LOGGING* logType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return LOGGING::logging->contains(JavaString::valueOf(logType));;
    
}


    auto LOGGING::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}

auto LOGGING::GRAPHICSPAINT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Paint")); return value.get(); }
LOGGING* LOGGING::GRAPHICSPAINT = LOGGING::GRAPHICSPAINT_owner();
auto LOGGING::GRAPHICSCREATION_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Creation")); return value.get(); }
LOGGING* LOGGING::GRAPHICSCREATION = LOGGING::GRAPHICSCREATION_owner();
auto LOGGING::GRAPHICSDELETION_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Deletion")); return value.get(); }
LOGGING* LOGGING::GRAPHICSDELETION = LOGGING::GRAPHICSDELETION_owner();
auto LOGGING::LOADINGERROR_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Loading Error")); return value.get(); }
LOGGING* LOGGING::LOADINGERROR = LOGGING::LOADINGERROR_owner();
auto LOGGING::MENUEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Menu Action Event")); return value.get(); }
LOGGING* LOGGING::MENUEVENT = LOGGING::MENUEVENT_owner();
auto LOGGING::MOUSEEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Mouse Action Event")); return value.get(); }
LOGGING* LOGGING::MOUSEEVENT = LOGGING::MOUSEEVENT_owner();
auto LOGGING::KEYEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Keyboard Action Event")); return value.get(); }
LOGGING* LOGGING::KEYEVENT = LOGGING::KEYEVENT_owner();
auto LOGGING::ACTIONEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Action Event")); return value.get(); }
LOGGING* LOGGING::ACTIONEVENT = LOGGING::ACTIONEVENT_owner();
auto LOGGING::ADJUSTMENTEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Adjustment Action Event")); return value.get(); }
LOGGING* LOGGING::ADJUSTMENTEVENT = LOGGING::ADJUSTMENTEVENT_owner();
auto LOGGING::COMPONENTEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Component Action Event")); return value.get(); }
LOGGING* LOGGING::COMPONENTEVENT = LOGGING::COMPONENTEVENT_owner();
auto LOGGING::CONTAINEREVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Container Action Event")); return value.get(); }
LOGGING* LOGGING::CONTAINEREVENT = LOGGING::CONTAINEREVENT_owner();
auto LOGGING::FOCUSEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Focus Action Event")); return value.get(); }
LOGGING* LOGGING::FOCUSEVENT = LOGGING::FOCUSEVENT_owner();
auto LOGGING::HIERARCHYEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Hierarchy Action Event")); return value.get(); }
LOGGING* LOGGING::HIERARCHYEVENT = LOGGING::HIERARCHYEVENT_owner();
auto LOGGING::INPUTEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Input Action Event")); return value.get(); }
LOGGING* LOGGING::INPUTEVENT = LOGGING::INPUTEVENT_owner();
auto LOGGING::INVOCATIONEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Invocation Action Event")); return value.get(); }
LOGGING* LOGGING::INVOCATIONEVENT = LOGGING::INVOCATIONEVENT_owner();
auto LOGGING::ITEMEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Item Action Event")); return value.get(); }
LOGGING* LOGGING::ITEMEVENT = LOGGING::ITEMEVENT_owner();
auto LOGGING::PAINTEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Paint Action Event")); return value.get(); }
LOGGING* LOGGING::PAINTEVENT = LOGGING::PAINTEVENT_owner();
auto LOGGING::TEXTEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Text Action Event")); return value.get(); }
LOGGING* LOGGING::TEXTEVENT = LOGGING::TEXTEVENT_owner();
auto LOGGING::WINDOWEVENT_owner() -> LOGGING* { static std::unique_ptr<LOGGING> value(new LOGGING("Window Action Event")); return value.get(); }
LOGGING* LOGGING::WINDOWEVENT = LOGGING::WINDOWEVENT_owner();



        #endif //ORG_ALLBINARY_LOG_LOGGING_CPP
