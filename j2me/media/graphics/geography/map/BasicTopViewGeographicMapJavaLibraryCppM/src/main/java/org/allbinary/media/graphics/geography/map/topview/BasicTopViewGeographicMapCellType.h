
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class LogUtil;
class StringMaker;
class GeographicMapCellType;
class GeographicMapCellTypeFactory;
class RaceTrackGeographicMapCellType;
class CommonSeps;
class BasicArrayList;
class BasicArrayListS;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicTopViewGeographicMapCellType
            : public virtual Object
         {

    public: static BasicTopViewGeographicMapCellType* createType(std::string name, int32_t type, int32_t cost);

    /*protected*/ public: LogUtil* logUtil;

    public: std::string name;

    public: int32_t cost;

    private: std::vector<int32_t> types;

public: BasicTopViewGeographicMapCellType(std::string name, BasicArrayList* types, int32_t cost);

    public: bool isType(GeographicMapCellType* type);

    public: bool hasType(int32_t type);

    public: std::vector<int32_t> getTypes();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_TOPVIEW_BASICTOPVIEWGEOGRAPHICMAPCELLTYPE_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListS.h>)
#include <org/allbinary/util/BasicArrayListS.h>
#endif

        #endif
    
