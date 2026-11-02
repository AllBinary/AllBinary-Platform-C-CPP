
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UnitWaypointStrings
            : public virtual Object
         {

    private: static UnitWaypointStrings* instance_owner();
    private: static UnitWaypointStrings* instance;

    public: static UnitWaypointStrings* getInstance();


            
    public: UnitWaypointStrings();
        
    public: const std::string PATHING = "Pathing";

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

    public: const std::string NEXT_PATH_NODE;

    public: const std::string _ALL_VISITED_SHORT = " Arrived";

    public: const std::string _ALREADY_THERE_SHORT = " Again?";

    public: const std::string VISITED_MOST_OF_THE_PATH = " visited most of the path";

    public: const std::string RETURNING_AS_WAYPOINT_PATH_LIST = " returning as waypointPathsList was runningWaypointPathList";

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
