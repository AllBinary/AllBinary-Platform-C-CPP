
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class BasicArrayList;
class BasicArrayListD;
class CommonStrings;
class LogUtil;
class BooleanFactory;
class Animation;
class AnimationBehavior;
class TextAnimation;
class AllBinaryTiledLayer;
class GPoint;
class BasicColorFactory;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class BasicDecimal;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GeographicMapCellPosition;
class BasicGeographicMap;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GeographicMapCellHistory
            : public virtual Object
        , public virtual UpdateMyFontInterface {

    public: static std::vector<GeographicMapCellHistory*> NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY;

    /*protected*/ public: LogUtil* logUtil;

    private: BooleanFactory* booleanFactory;

    private: BasicArrayList* list;

    private: BasicArrayList* visitedList;

    private: const std::string MISSED_INFO = "Missed";

    private: Animation* animation;

    private: MyFontProcessor* myFontProcessor;

    private: int32_t totalVisited= 0;

    private: int32_t halfWidth = 0;

    private: int32_t fontHeight = 0;

public: GeographicMapCellHistory();

    public: void updateMeasurement(Graphics* graphics);

    public: int32_t getTotalVisited();

    public: int32_t getTotalNotVisited();

    public: int32_t getSize();

    public: void trackAll(BasicArrayList* list);

    public: void track(GeographicMapCellPosition* geographicMapCellPosition);

    public: BasicArrayList* getTracked();

    public: BasicArrayList* getVisited();

    public: GeographicMapCellPosition* getAfterIfNotLast(GeographicMapCellPosition* geographicMapCellPosition);

    public: GeographicMapCellPosition* getFirstUnvisited();

    public: int32_t getFirstUnvisitedIndex();

    public: BasicArrayList* getInPathButNotTracked(BasicArrayList* pathList);

    public: bool isVisited(GeographicMapCellPosition* geographicMapCellPosition);

    public: bool visit(GeographicMapCellPosition* geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public: bool isAllVisited();

                //@Throws(Exception.constructor)
            
    public: bool isAllVisited2();

                //@Throws(Exception.constructor)
            
    public: bool isPortionVisited(BasicDecimal* basicDecimal);

                //@Throws(Exception.constructor)
            
    public: void reset();

    private: void paintNotVisitedRelativeToPoint(Graphics* graphics, AllBinaryTiledLayer* tiledLayer, GPoint* point);

    private: const int32_t RED;

    public: void paintNotVisited(Graphics* graphics, BasicGeographicMap* geographicMapInterface);

    public: void init();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/text/TextAnimation.h>)
#include <org/allbinary/animation/text/TextAnimation.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryTiledLayer.h>)
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h")
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#endif
#if __has_include("org/allbinary/media/graphics/geography/map/BasicGeographicMap.h")
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#endif

        #endif
    
