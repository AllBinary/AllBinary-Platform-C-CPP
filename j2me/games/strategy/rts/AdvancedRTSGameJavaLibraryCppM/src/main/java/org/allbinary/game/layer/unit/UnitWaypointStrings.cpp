
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitWaypointStrings
            : public Object
         {

    private: static UnitWaypointStrings instance() { return UnitWaypointStrings(); }

    public: static UnitWaypointStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UnitWaypointStrings::instance();
    
}


    public: const std::string WANDERING = "Order?";

    public: const std::string THINKING = "Thinking";

    public: const std::string THINKING_ABOUT_TARGET = "Hmmm";

    public: const std::string TARGET = "Target";

    public: const std::string KILL = "Kill!";

    public: const std::string STOP = "Stop";

    public: const std::string WAYPOINT_DESTROYED_SHORT = "Uh Oh";

    public: const std::string WAYPOINT_DESTROYED = "Waypoint Destroyed";

    public: const std::string ALL_VISITED_SHORT = "Arrived";

    public: const std::string ALL_VISITED = "All Visited";

    public: const std::string ALREADY_THERE_SHORT = "Again?";

    public: const std::string ALREADY_THERE = "Already There";

    public: const std::string NEXT_PATH_NODE = CommonLabels::getInstance().NEXT +" Path Node";

};

            

