
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

public: GeographicMapCellHistory(){
this->list= new BasicArrayListD();
    
this->visitedList= new BasicArrayListD();
    
this->init();
    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: int32_t getTotalVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->totalVisited;
    
}


    public: int32_t getTotalNotVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getSize() -this->totalVisited;
    
}


    public: int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list->size();;
    
}


    public: void trackAll(BasicArrayList* list){

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


    public: void track(GeographicMapCellPosition* geographicMapCellPosition){

                        if(!this->list->contains(geographicMapCellPosition))
                        
                                    {
                                    this->list->add(geographicMapCellPosition);
    
this->visitedList->add(this->booleanFactory->FALSE);
    

                                    }
                                
}


    public: BasicArrayList* getTracked(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    public: BasicArrayList* getVisited(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->visitedList;
    
}


    public: GeographicMapCellPosition* getAfterIfNotLast(GeographicMapCellPosition* geographicMapCellPosition){

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


    public: GeographicMapCellPosition* getFirstUnvisited(){

    BasicArrayList* localList = this->list;;
    

    BasicArrayList* localVisitedList = this->visitedList;;
    

    int32_t size = localVisitedList->size();;
    

    bool value;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
value= this->visitedList->get(index);
    

                        if(value == this->booleanFactory->FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GeographicMapCellPosition*>(localList->get(index));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GeographicMapCellPosition*>(localList->get(0));
    
}


    public: int32_t getFirstUnvisitedIndex(){

    BasicArrayList* localVisitedList = this->visitedList;;
    

    int32_t size = localVisitedList->size();;
    

    bool value;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
value= this->visitedList->get(index);
    

                        if(value == this->booleanFactory->FALSE)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return index;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: BasicArrayList* getInPathButNotTracked(BasicArrayList* pathList){

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


    public: bool isVisited(GeographicMapCellPosition* geographicMapCellPosition){

    int32_t index = this->list->indexOf(geographicMapCellPosition);;
    

                        if(index !=  -1)
                        
                                    {
                                    
    bool value = this->visitedList->get(index);;
    

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


    public: bool visit(GeographicMapCellPosition* geographicMapCellPosition){

    int32_t index = this->list->indexOf(geographicMapCellPosition);;
    

    bool value;;
    

                        if(index !=  -1)
                        
                                    {
                                    value= this->visitedList->get(index);
    

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
            
    public: bool isAllVisited(){

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
            
    public: bool isAllVisited2(){

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
            
    public: bool isPortionVisited(BasicDecimal* basicDecimal){

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
            
    public: void reset(){

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


    private: void paintNotVisitedRelativeToPoint(Graphics* graphics, AllBinaryTiledLayer* tiledLayer, GPoint* point){

    int32_t x = point->getX() -tiledLayer->getXP();;
    

    int32_t y = point->getY() -tiledLayer->getYP();;
    

                        if(this->halfWidth == 0)
                        
                                    {
                                    this->halfWidth= (graphics->getFont()->stringWidth(this->MISSED_INFO)>>1);
    

                                    }
                                

    int32_t height = 2 *this->fontHeight;;
    
this->animation->paintXY(graphics, x +this->halfWidth, y +(height));
    
}


    private: const int32_t RED = BasicColorFactory::getInstance()->RED.intValue();

    public: void paintNotVisited(Graphics* graphics, BasicGeographicMap* geographicMapInterface){

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
    
isCellVisitedBoolean= localVisitedList->get(index);
    

                        if(!isCellVisitedBoolean.valueOf())
                        
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


    public: void init(){
this->list->clear();
    
this->visitedList->clear();
    
this->totalVisited= 0;
    
}


};

            

