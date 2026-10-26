
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
        



            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTopViewGeographicMapStrings
            : public Object
         {

    private: static BasicTopViewGeographicMapStrings instance() { return BasicTopViewGeographicMapStrings(); }

    public: static BasicTopViewGeographicMapStrings getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicTopViewGeographicMapStrings::instance();
    
}


    public: const std::string DEFAULT = "Default";

    public: const std::string OTHER = "Other";

    public: const std::string WALL = "Wall";

    public: const std::string OFF_MAP = "OffMap";

    public: const std::string FLOOR = "Floor";

    public: const std::string DOOR = "Door";

    public: const std::string STAIRS_UP = "StairsUp";

    public: const std::string STAIRS_DOWN = "StairsDown";

};

            

