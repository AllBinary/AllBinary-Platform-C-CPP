
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LOGGING
            : public Object
         {

    private: static inline BasicArrayList* logging = new BasicArrayListD();

    public: static bool contains(LOGGING* logType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LOGGING::logging->contains(logType->toString());;
    
}


    public: static LOGGING* GRAPHICSPAINT() { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Paint")); return value.get(); }

    public: static LOGGING* GRAPHICSCREATION() { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Creation")); return value.get(); }

    public: static LOGGING* GRAPHICSDELETION() { static std::unique_ptr<LOGGING> value(new LOGGING("Graphics Deletion")); return value.get(); }

    public: static LOGGING* LOADINGERROR() { static std::unique_ptr<LOGGING> value(new LOGGING("Loading Error")); return value.get(); }

    public: static LOGGING* MENUEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Menu Action Event")); return value.get(); }

    public: static LOGGING* MOUSEEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Mouse Action Event")); return value.get(); }

    public: static LOGGING* KEYEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Keyboard Action Event")); return value.get(); }

    public: static LOGGING* ACTIONEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Action Event")); return value.get(); }

    public: static LOGGING* ADJUSTMENTEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Adjustment Action Event")); return value.get(); }

    public: static LOGGING* COMPONENTEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Component Action Event")); return value.get(); }

    public: static LOGGING* CONTAINEREVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Container Action Event")); return value.get(); }

    public: static LOGGING* FOCUSEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Focus Action Event")); return value.get(); }

    public: static LOGGING* HIERARCHYEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Hierarchy Action Event")); return value.get(); }

    public: static LOGGING* INPUTEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Input Action Event")); return value.get(); }

    public: static LOGGING* INVOCATIONEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Invocation Action Event")); return value.get(); }

    public: static LOGGING* ITEMEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Item Action Event")); return value.get(); }

    public: static LOGGING* PAINTEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Paint Action Event")); return value.get(); }

    public: static LOGGING* TEXTEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Text Action Event")); return value.get(); }

    public: static LOGGING* WINDOWEVENT() { static std::unique_ptr<LOGGING> value(new LOGGING("Window Action Event")); return value.get(); }

    private: std::string name;

private: LOGGING(std::string value){
this->name= value;
    
LOGGING::logging->add(value);
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

