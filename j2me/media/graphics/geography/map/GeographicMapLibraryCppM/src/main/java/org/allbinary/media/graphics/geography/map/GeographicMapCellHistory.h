
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/text/TextAnimation.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"

class GeographicMapCellHistory
            : public Object
        , public UpdateMyFontInterface {

    public: static inline const std::vector<GeographicMapCellHistory*> NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY = {};

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: BooleanFactory* booleanFactory = BooleanFactory::getInstance();

    private: BasicArrayList* list;

    private: BasicArrayList* visitedList;

    private: const std::string MISSED_INFO = "Missed";

    private: Animation* animation = new TextAnimation(this->MISSED_INFO, AnimationBehavior::getInstance());

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

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

    private: const int32_t RED = BasicColorFactory::getInstance()->RED.intValue();

    public: void paintNotVisited(Graphics* graphics, BasicGeographicMap* geographicMapInterface);

    public: void init();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H
