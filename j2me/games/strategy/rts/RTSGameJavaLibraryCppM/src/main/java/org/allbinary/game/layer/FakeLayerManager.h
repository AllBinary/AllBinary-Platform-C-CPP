
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *    Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H
        #define ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameInfo;
class BasicColorFactory;
class BasicGeographicMap;
class GeographicMapCellType;
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FakeLayerManager: public AllBinaryGameLayerManager, public GeographicMapCompositeInterface {

    private: std::vector<BasicGeographicMap*> geographicMapInterfaceArray;

    private: std::vector<GeographicMapCellType*> geographicMapCellTypeArray_;

public: FakeLayerManager(GameInfo* gameInfo);

    public: std::vector<BasicGeographicMap*> getGeographicMapInterface();

    public: void setGeographicMapInterface(std::vector<BasicGeographicMap*> geographicMapInterfaceArray);

    public: std::vector<GeographicMapCellType*> geographicMapCellTypeArray();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_FAKELAYERMANAGER_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>)
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>
#endif
#if __has_include(<org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>)
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/AllBinaryGameLayerManager.h")
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#endif

        #endif
    
