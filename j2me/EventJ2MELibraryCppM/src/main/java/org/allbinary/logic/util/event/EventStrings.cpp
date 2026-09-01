
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EventStrings
            : public Object
         {

    private: static EventStrings instance() { return EventStrings(); }

    public: static EventStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return EventStrings::instance();
    
}


    public: const std::string PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";

    public: const std::string TOTAL_LISTENERS = "Total Listeners: ";

    public: const std::string LISTENER_LABEL = " Listener: ";

    public: const std::string FIRE_EVENT = "fireEvent";

};

            

