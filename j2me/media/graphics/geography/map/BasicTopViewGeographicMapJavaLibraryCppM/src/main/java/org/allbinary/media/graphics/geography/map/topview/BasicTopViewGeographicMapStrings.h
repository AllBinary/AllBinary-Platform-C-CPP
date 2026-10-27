
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPSTRINGS_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPSTRINGS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTopViewGeographicMapStrings
            : public Object
         {

    private: static BasicTopViewGeographicMapStrings* instance() { static std::unique_ptr<BasicTopViewGeographicMapStrings> value(new BasicTopViewGeographicMapStrings()); return value.get(); }

    public: static BasicTopViewGeographicMapStrings* getInstance();

    public: const std::string DEFAULT = "Default";

    public: const std::string OTHER = "Other";

    public: const std::string WALL = "Wall";

    public: const std::string OFF_MAP = "OffMap";

    public: const std::string FLOOR = "Floor";

    public: const std::string DOOR = "Door";

    public: const std::string STAIRS_UP = "StairsUp";

    public: const std::string STAIRS_DOWN = "StairsDown";

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPSTRINGS_H
