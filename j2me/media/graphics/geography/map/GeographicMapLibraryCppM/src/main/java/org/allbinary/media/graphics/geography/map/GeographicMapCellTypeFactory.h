
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellTypeFactory
            : public virtual Object
         {

    private: static GeographicMapCellTypeFactory* instance_owner();
    private: static GeographicMapCellTypeFactory* instance;

    public: static GeographicMapCellTypeFactory* getInstance();


            
    public: GeographicMapCellTypeFactory();
        
    /*protected*/ public: LogUtil* logUtil;

    private: std::vector<GeographicMapCellType*> geographicMapCellTypeArray;

    public: GeographicMapCellType* get(int32_t type);

    public: std::vector<GeographicMapCellType*> getGeographicMapCellTypeArray();

    public: int32_t getStartType();

    public: int32_t getEndType();

    public: int32_t getEmptyType();

    public: bool isPath(GeographicMapCellType* cellType);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLTYPEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellType.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#endif

        #endif
    
