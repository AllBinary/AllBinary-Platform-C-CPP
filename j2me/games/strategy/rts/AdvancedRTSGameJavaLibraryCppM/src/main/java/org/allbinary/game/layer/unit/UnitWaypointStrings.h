
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

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UnitWaypointStrings
            : public Object
         {
        

    private: static const instance: UnitWaypointStrings = new UnitWaypointStrings();

    public static UnitWaypointStrings getInstance();

    public const WANDERING: string = "Order?";

    public const THINKING: string = "Thinking";

    public const THINKING_ABOUT_TARGET: string = "Hmmm";

    public const TARGET: string = "Target";

    public const KILL: string = "Kill!";

    public const STOP: string = "Stop";

    public const WAYPOINT_DESTROYED_SHORT: string = "Uh Oh";

    public const WAYPOINT_DESTROYED: string = "Waypoint Destroyed";

    public const ALL_VISITED_SHORT: string = "Arrived";

    public const ALL_VISITED: string = "All Visited";

    public const ALREADY_THERE_SHORT: string = "Again?";

    public const ALREADY_THERE: string = "Already There";

    public const NEXT_PATH_NODE: string = "Next Path Node";

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNITWAYPOINTSTRINGS_H
