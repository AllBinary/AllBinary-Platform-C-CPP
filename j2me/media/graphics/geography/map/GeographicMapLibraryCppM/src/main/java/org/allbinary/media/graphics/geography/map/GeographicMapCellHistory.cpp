
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_CPP
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
        

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

std::vector<GeographicMapCellHistory*> GeographicMapCellHistory::NULL_GEOGRPAHIC_MAP_HISTORY_ARRAY = {};

GeographicMapCellHistory::GeographicMapCellHistory() : logUtil(LogUtil::getInstance()), booleanFactory(BooleanFactory::getInstance()), animation(new TextAnimation(this->MISSED_INFO, AnimationBehavior::getInstance())), myFontProcessor(new UpdateMyFontProcessor(this)), RED(BasicColorFactory::getInstance()->RED){
this->list= new BasicArrayListD();
    
this->visitedList= new BasicArrayListD();
    
this->init();
    
}


    auto GeographicMapCellHistory::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto GeographicMapCellHistory::getTotalVisited() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->totalVisited;
    
}


    auto GeographicMapCellHistory::getTotalNotVisited() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getSize() -this->totalVisited;
    
}


    auto GeographicMapCellHistory::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list->size();;
    
}


    auto GeographicMapCellHistory::trackAll(BasicArrayList* list) -> void{

    int32_t size = list->size();;
    
this->list->ensureCapacity(size);
    
this->visitedList->ensureCapacity(size);
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(list->get(index));
    
this->track(geographicMapCellPosition);
    
}

}


    auto GeographicMapCellHistory::track(GeographicMapCellPosition* geographicMapCellPosition) -> void{

                        if(!this->list->contains(geographicMapCellPosition))
                        
                                    {
                                    this->list->add(geographicMapCellPosition);
    
this->visitedList->add(this->booleanFactory->FALSE);
    

                                    }
                                
}


    auto GeographicMapCellHistory::getTracked() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}


    auto GeographicMapCellHistory::getVisited() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->visitedList;
    
}


    auto GeographicMapCellHistory::getAfterIfNotLast(GeographicMapCellPosition* geographicMapCellPosition) -> GeographicMapCellPosition*{

    BasicArrayList* localList = this->list;;
    

    int32_t index = localList->indexOf(geographicMapCellPosition);;
    

                        if(localList->size() > index +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(localList->get(index +1));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return geographicMapCellPosition;
    
}


    auto GeographicMapCellHistory::getFirstUnvisited() -> GeographicMapCellPosition*{

    BasicArrayList* localList = this->list;;
    

    BasicArrayList* localVisitedList = this->visitedList;;
    

    int32_t size = localVisitedList->size();;
    

    bool value;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
value= JavaBoxes::unbox<bool>(this->visitedList->get(index));
    

                        if(value == this->booleanFactory->FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(localList->get(index));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GeographicMapCellPosition*>(localList->get(0));
    
}


    auto GeographicMapCellHistory::getFirstUnvisitedIndex() -> int32_t{

    BasicArrayList* localVisitedList = this->visitedList;;
    

    int32_t size = localVisitedList->size();;
    

    bool value;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
value= JavaBoxes::unbox<bool>(this->visitedList->get(index));
    

                        if(value == this->booleanFactory->FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto GeographicMapCellHistory::getInPathButNotTracked(BasicArrayList* pathList) -> BasicArrayList*{

    BasicArrayList* inPathButNotTrackedList = new BasicArrayListD();;
    

    BasicArrayList* localList = this->list;;
    

    int32_t size = pathList->size();;
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(pathList->get(index));
    

                        if(!localList->contains(geographicMapCellPosition))
                        
                                    {
                                    inPathButNotTrackedList->add(geographicMapCellPosition);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return inPathButNotTrackedList;
    
}


    auto GeographicMapCellHistory::isVisited(GeographicMapCellPosition* geographicMapCellPosition) -> bool{

    int32_t index = this->list->indexOf(geographicMapCellPosition);;
    

                        if(index !=  -1)
                        
                                    {
                                    
    bool value = JavaBoxes::unbox<bool>(this->visitedList->get(index));;
    

                        if(value == this->booleanFactory->TRUE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto GeographicMapCellHistory::visit(GeographicMapCellPosition* geographicMapCellPosition) -> bool{

    int32_t index = this->list->indexOf(geographicMapCellPosition);;
    

    bool value;;
    

                        if(index !=  -1)
                        
                                    {
                                    value= JavaBoxes::unbox<bool>(this->visitedList->get(index));
    

    bool TRUE = this->booleanFactory->TRUE;;
    

                        if(value != TRUE)
                        
                                    {
                                    this->visitedList->set(index, TRUE);
    
this->totalVisited++;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellHistory::isAllVisited() -> bool{

                        if(this->totalVisited == this->getSize() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellHistory::isAllVisited2() -> bool{

                        if(this->totalVisited == this->getSize())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellHistory::isPortionVisited(BasicDecimal* basicDecimal) -> bool{

    int32_t size = this->getSize();;
    

    int32_t numberRequired = (size<<basicDecimal->getScaledFactor()) /static_cast<int32_t>(basicDecimal->getUnscaled());;
    

    int32_t numberNotVisited = this->getSize() -1 -this->totalVisited;;
    

                        if(size -numberNotVisited > numberRequired)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapCellHistory::reset() -> void{

    BasicArrayList* localVisitedList = this->visitedList;;
    

    bool localFalseBoolean = this->booleanFactory->FALSE;;
    

    int32_t size = localVisitedList->size();;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
localVisitedList->set(index, localFalseBoolean);
    
}

this->totalVisited= 0;
    
}


    auto GeographicMapCellHistory::paintNotVisitedRelativeToPoint(Graphics* graphics, AllBinaryTiledLayer* tiledLayer, GPoint* point) -> void{

    int32_t x = point->getX() -tiledLayer->getXP();;
    

    int32_t y = point->getY() -tiledLayer->getYP();;
    

                        if(this->halfWidth == 0)
                        
                                    {
                                    this->halfWidth= (graphics->getFont()->stringWidth(this->MISSED_INFO)>>1);
    

                                    }
                                

    int32_t height = 2 *this->fontHeight;;
    
this->animation->paintXY(graphics, x +this->halfWidth, y +(height));
    
}


    auto GeographicMapCellHistory::paintNotVisited(Graphics* graphics, BasicGeographicMap* geographicMapInterface) -> void{

        try {
            this->myFontProcessor->process(graphics);
    
graphics->setColor(this->RED);
    

    BasicArrayList* localVisitedList = this->visitedList;;
    

    int32_t size = localVisitedList->size();;
    

    GeographicMapCellPosition* geographicMapCellPosition;;
    

    bool isCellVisitedBoolean;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
geographicMapCellPosition= dynamic_cast<GeographicMapCellPosition*>(this->list->get(index));
    
isCellVisitedBoolean= JavaBoxes::unbox<bool>(localVisitedList->get(index));
    

                        if(!isCellVisitedBoolean)
                        
                                    {
                                    this->paintNotVisitedRelativeToPoint(graphics, geographicMapInterface->getAllBinaryTiledLayer(), geographicMapCellPosition->getPoint());
    

                                    }
                                
}


                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, "paintNotVisited", &e);
    
}

}


    auto GeographicMapCellHistory::init() -> void{
this->list->clear();
    
this->visitedList->clear();
    
this->totalVisited= 0;
    
}




        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_MAP_GEOGRAPHICMAPCELLHISTORY_CPP
