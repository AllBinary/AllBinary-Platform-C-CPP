
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class LogUtil;
class AllBinaryTiledLayer;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicGeographicMap;
class GeographicMapCellPositionFactoryInterface;
class GeographicMapCellPosition;
class GeographicMapCellPositionFactoryInitVisitorInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicGeographicMapCellPositionFactory
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: std::vector<std::vector<GeographicMapCellPosition*>> geographicMapCellPositionArray;

    /*protected*/ public: BasicGeographicMap* geographicMapInterface;

    /*protected*/ public: GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface;

    private: int32_t columns;

    private: int32_t rows;

    private: AllBinaryTiledLayer* tiledLayer;

public: BasicGeographicMapCellPositionFactory(BasicGeographicMap* geographicMapInterface);

                //@Throws(Exception.constructor)
            
    private: void init();

                //@Throws(Exception.constructor)
            
    public: void visit(GeographicMapCellPositionFactoryInitVisitorInterface* geographicMapCelPositionFactoryInitVisitorInterface);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getAt(int32_t i_column, int32_t i_row);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* getInstance(GeographicMapCellPosition* anotherMapGeographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition* createInstance(int32_t i_column, int32_t i_row, int32_t width, int32_t height);

    public: int32_t getColumns();

    public: int32_t getRows();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_BASICGEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInitVisitorInterface.h"
#endif

        #endif
    
