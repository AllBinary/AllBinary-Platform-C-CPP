
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EventStrings
            : public Object
         {
        

    private: static const instance: EventStrings = new EventStrings();

    public static EventStrings getInstance();

    public const PERFORMANCE_MESSAGE: string = "Use Custom onEvent Methods for needed optimization";

    public const TOTAL_LISTENERS: string = "Total Listeners: ";

    public const LISTENER_LABEL: string = " Listener: ";

    public const FIRE_EVENT: string = "fireEvent";

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_EVENTSTRINGS_H
