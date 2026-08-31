
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "GeographicMapCellPosition.h"
#include "BasicGeographicMap.h"

class GeographicMapCellHistory
            : public Object
        : public UpdateMyFontInterface {
        

    public static const NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY: std::vector<GeographicMapCellHistory> = [];

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const booleanFactory: BooleanFactory = BooleanFactory.getInstance()!;

    private: const list: BasicArrayList;

    private: const visitedList: BasicArrayList;

    private: const MISSED_INFO: string = "Missed";

    private: const animation: Animation = new TextAnimation(this.MISSED_INFO, AnimationBehavior.getInstance());

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: totalVisited: int32_t= 0;

    private: halfWidth: int32_t = 0;

    private: fontHeight: int32_t = 0;

public constructor ();

    public updateMeasurement(Graphics graphics);

    public int32_t getTotalVisited();

    public int32_t getTotalNotVisited();

    public int32_t getSize();

    public trackAll(BasicArrayList list);

    public track(GeographicMapCellPosition geographicMapCellPosition);

    public BasicArrayList getTracked();

    public BasicArrayList getVisited();

    public GeographicMapCellPosition getAfterIfNotLast(GeographicMapCellPosition geographicMapCellPosition);

    public GeographicMapCellPosition getFirstUnvisited();

    public int32_t getFirstUnvisitedIndex();

    public BasicArrayList getInPathButNotTracked(BasicArrayList pathList);

    public bool isVisited(GeographicMapCellPosition geographicMapCellPosition);

    public bool visit(GeographicMapCellPosition geographicMapCellPosition);

                //@Throws(Exception.constructor)
            
    public bool isAllVisited();

                //@Throws(Exception.constructor)
            
    public bool isAllVisited2();

                //@Throws(Exception.constructor)
            
    public bool isPortionVisited(BasicDecimal basicDecimal);

                //@Throws(Exception.constructor)
            
    public reset();

    paintNotVisitedRelativeToPoint(Graphics graphics, AllBinaryTiledLayer tiledLayer, GPoint point);

    private: const RED: int32_t = BasicColorFactory.getInstance()!.RED.intValue()!;

    public paintNotVisited(Graphics graphics, BasicGeographicMap geographicMapInterface);

    public init();

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_H
