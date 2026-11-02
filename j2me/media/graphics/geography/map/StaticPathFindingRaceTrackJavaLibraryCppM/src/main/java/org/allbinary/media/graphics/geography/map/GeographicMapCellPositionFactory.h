
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class CommonStrings;
class AllBinaryTiledLayer;
class StdUtil;
class LogUtil;
class StringMaker;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
class BasicGeographicMapCellPositionFactory;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellPositionFactory: public GeographicMapCellPositionBaseFactory {

    private: static ABHashtable<Object*, Object*>* hashtable;

    public: static ABHashtable<Object*, Object*>* getHashtable();


            
    public: GeographicMapCellPositionFactory();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: BasicGeographicMapCellPositionFactory* getInstance(BasicGeographicMap* geographicMapInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLPOSITIONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionBaseFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
