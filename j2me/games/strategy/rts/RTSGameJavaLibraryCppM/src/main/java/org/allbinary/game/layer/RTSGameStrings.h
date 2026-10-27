
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSGAMESTRINGS_H
        #define ORG_ALLBINARY_GAME_LAYER_RTSGAMESTRINGS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RTSGameStrings
            : public virtual Object
         {

    private: static RTSGameStrings* instance_owner();
    private: static RTSGameStrings* instance;

    public: static RTSGameStrings* getInstance();


            
    public: RTSGameStrings();
        
    public: const std::string DRAG_TO_SPOT = "Please Drag";

    public: const std::string NOT_YOURS = "Not Yours";

    public: const std::string NEW_UNIT = "New Unit";

    public: const std::string NEW_WAYPOINT = "New Waypoint";

    public: const std::string BUILDING = "Building";

    public: const std::string UPGRADE = "Upgrading";

    public: const std::string DOWNGRADE = "Downgrading";

    public: const std::string NO_MONEY = "Not Enough Money";

    public: const std::string SPOT_TAKEN = "Spot Taken";

    public: const std::string BUILDING_COLLISION = "Building Collision";

    public: const std::string STRUCTURE_TO_CLOSE = "Building To Close";

    public: const std::string MAP_EDGE = "Map Edge";

    public: const std::string ROAD_COLLISION = "Road Collision";

    public: const std::string SELECT_BUILD_SPOT = "Select Build Spot";

    public: const std::string BUILD_ON_PATH = "Not On Path";

    public: const std::string DRAGGABLE = "Draggable";

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RTSGAMESTRINGS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RTSGAMESTRINGS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RTSGAMESTRINGS_H_COMPLETE
        
        #endif
    
