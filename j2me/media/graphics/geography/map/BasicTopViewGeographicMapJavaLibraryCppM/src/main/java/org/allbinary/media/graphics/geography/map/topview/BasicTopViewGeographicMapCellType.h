
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H

            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListS.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicTopViewGeographicMapCellType
            : public Object
         {

    public: static BasicTopViewGeographicMapCellType createType(std::string name, int32_t type, int32_t cost);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: std::string name;

    public: int32_t cost;

    private: std::vector<int32_t> types;

public: BasicTopViewGeographicMapCellType(std::string name, BasicArrayList types, int32_t cost);

    public: bool isType(GeographicMapCellType type);

    public: bool hasType(int32_t type);

    public: std::vector<int32_t> getTypes();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H
