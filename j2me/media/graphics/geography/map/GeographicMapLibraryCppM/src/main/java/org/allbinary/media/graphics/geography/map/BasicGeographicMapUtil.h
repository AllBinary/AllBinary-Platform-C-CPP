
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Layer;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPosition;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGeographicMapUtil
            : public virtual Object
         {

    private: static BasicGeographicMapUtil* instance_owner();
    private: static BasicGeographicMapUtil* instance;

    public: static BasicGeographicMapUtil* getInstance();


            
    public: BasicGeographicMapUtil();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: int32_t getBorderingRow(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: int32_t getBorderingColumn(int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: bool isSameCellPosition(GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

    public: std::vector<Layer*> createAllBinaryTiledLayerArray(std::vector<BasicGeographicMap*> geographicMapInterfaceArray);

    public: std::vector<Layer*> getAllBinaryTiledLayerArray(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<Layer*> tiledLayerArray, int32_t startIndex);

    public: void move(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t dx, int32_t dy);

    public: void setPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/layer/Layer.h>)
#include <org/allbinary/layer/Layer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
