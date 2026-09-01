
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/animation/vector/CircleFilledAnimation.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEvent.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventHandler.h>

      
#include <org/allbinary/media/graphics/geography/map/event/GeographicMapCellPositionEventListenerInterface.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MiniMapLayer: public AllBinaryLayer, public GeographicMapCellPositionEventListenerInterface {

    protected: AllBinaryTiledLayer allBinaryTiledLayer;

    private: BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory;

    private: BasicArrayList list;

    private: BasicArrayList basicColorList;

    private: BasicArrayList positionList;

    private: CircleFilledAnimation animationInterface;

public: MiniMapLayer(BasicGeographicMap geographicMapInterface, ViewPositionBase viewPosition){
            super(StringUtil::getInstance().EMPTY_STRING, Rectangle(PointFactory::getInstance().createXY(0, viewPosition.getY()), geographicMapInterface.getAllBinaryTiledLayer().getWidth(), geographicMapInterface.getAllBinaryTiledLayer().getHeight()), viewPosition);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->allBinaryTiledLayer= geographicMapInterface.getAllBinaryTiledLayer();
    
this->geographicMapCellPositionFactory= geographicMapInterface.getGeographicMapCellPositionFactory();
    
this->animationInterface= CircleFilledAnimation(this->allBinaryTiledLayer.getCellWidth(), this->allBinaryTiledLayer.getCellHeight(), BasicColorFactory::getInstance().WHITE);
    
this->list= BasicArrayListD();
    
this->basicColorList= BasicArrayListD();
    
this->positionList= BasicArrayListD();
    
GeographicMapCellPositionEventHandler::getInstance().addListener(this);
    
this->init();
    
}


                //@Throws(Exception.constructor)
            
    protected: void init(){
this->allBinaryTiledLayer.setPosition(this->x, this->y, this->z);
    
}


    public: void onEvent(AllBinaryEventObject eventObject){
ForcedLogUtil::log(EventStrings::getInstance().PERFORMANCE_MESSAGE, this);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onRemoveGeographicMapCellPositionEvent(GeographicMapCellPositionEvent geographicMapCellPositionEvent){

    ColorCompositeInterface colorCompositeInterface = geographicMapCellPositionEvent.getSource() as ColorCompositeInterface;;
    

    int32_t index = this->list.indexOf(colorCompositeInterface);;
    

                        if(index >= 0)
                        
                                    {
                                    this->list.removeAt(index);
    
this->basicColorList.removeAt(index);
    
this->positionList.removeAt(index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onGeographicMapCellPositionEvent(GeographicMapCellPositionEvent geographicMapCellPositionEvent){

    ColorCompositeInterface colorCompositeInterface = geographicMapCellPositionEvent.getSource() as ColorCompositeInterface;;
    

    int32_t layerIndex =  -1;;
    

    int32_t size = this->list.size();;
    

    ColorCompositeInterface nextColorCompositeInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
nextColorCompositeInterface= this->list.get(index) as ColorCompositeInterface;
    

                        if(nextColorCompositeInterface == colorCompositeInterface)
                        
                                    {
                                    layerIndex= index;
    
break;

                    

                                    }
                                
}


    GeographicMapCellPosition geographicMapCellPosition = this->geographicMapCellPositionFactory.getInstance(geographicMapCellPositionEvent.getGeographicMapCellPosition());;
    

    GPoint point = geographicMapCellPosition.getPoint();;
    

                        if(layerIndex ==  -1)
                        
                                    {
                                    this->list.add(colorCompositeInterface);
    

    BasicColor basicColor = colorCompositeInterface.getBasicColorP();;
    
this->basicColorList.add(basicColor);
    
this->positionList.add(point);
    
layerIndex= this->basicColorList.size() -1;
    

                                    }
                                
                        else {
                            this->positionList.set(layerIndex, point);
    

                        }
                            
}


    public: void paintDots(Graphics graphics){

    BasicArrayList localPositionList = this->positionList;;
    

    BasicArrayList localBasicColorList = this->basicColorList;;
    

    int32_t length = localPositionList.size();;
    

    GPoint point;;
    

    BasicColor basicColor;;
    




                        for (
    int32_t index = length;--index >= 0; )
        {
point= localPositionList.get(index) as GPoint;
    
basicColor= localBasicColorList.get(index) as BasicColor;
    
graphics.setColor(basicColor.intValue());
    
this->animationInterface.setBasicColorP(basicColor);
    
this->animationInterface.paintXY(graphics, point.getX() +this->x, point.getY() +this->y);
    
}

}


    public: void paint(Graphics graphics){
this->allBinaryTiledLayer.paint(graphics);
    
this->paintDots(graphics);
    
}


};

            

