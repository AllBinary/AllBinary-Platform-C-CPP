
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

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/event/ScrollMapEvent.h>

      
#include <org/allbinary/layer/event/ScrollMapEventHandler.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/game/input/GameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapUpGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapDownGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapRightGameInputProcessor.h"
#include "org/allbinary/game/input/ScrollMapLeftGameInputProcessor.h"
#include "org/allbinary/game/input/GameInputProcessorUtil.h"

class ScrollMapPlayerGameInput: public PlayerGameInput {

    protected: const std::vector<GameInputProcessor*> inputProcessorArray = std::vector<GameInputProcessor*>(InputFactory::getInstance()->MAX);

    private: const int32_t border = 150;

    private: BasicArrayList* inputList;

    protected: const bool isSingleKeyProcessing = Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS) || Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_PRESS);

    private: BasicGeographicMap* geographicMapInterface;

    private: int32_t maxBottom= 0;

    private: int32_t maxRight= 0;

public: ScrollMapPlayerGameInput(BasicGeographicMap* geographicMapInterface, BasicArrayList* list, int32_t playerInputId) : PlayerGameInput(list, new BasicArrayListD(), playerInputId){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->geographicMapInterface= geographicMapInterface;
    
this->inputList= list;
    
this->init();
    
}


    private: ScrollMapEvent* scrollMapEvent = new ScrollMapEvent(this);

                //@Throws(Exception.constructor)
            
    private: void move(int32_t dx, int32_t dy){

    AllBinaryTiledLayer* terrainTiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    
terrainTiledLayer->moveDXY( -dx,  -dy);
    
this->scrollMapEvent->setDxDy( -dx,  -dy);
    
ScrollMapEventHandler::getInstance()->fireEvent(this->scrollMapEvent);
    
}


    public: void init(){
this->maxBottom= this->getSpecialHeight();
    
this->maxRight= this->getSpecialWidth();
    
}


                //@Throws(Exception.constructor)
            
    public: void scrollMiddleX(){

    AllBinaryTiledLayer* terrainTiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    
this->move( -terrainTiledLayer->getXP(), 0);
    

                        if(terrainTiledLayer->getWidth() < displayInfo->getLastWidth())
                        
                                    {
                                    
    int32_t diffX = ((displayInfo->getLastWidth() -terrainTiledLayer->getWidth())>>1);;
    
this->move( -diffX, 0);
    

                                    }
                                
                        else {
                            
    int32_t diffX = ((terrainTiledLayer->getWidth() -displayInfo->getLastWidth())>>1);;
    
this->move(diffX, 0);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void scrollY(int32_t anchor){

    AllBinaryTiledLayer* terrainTiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(anchor == Graphics::TOP)
                        
                                    {
                                    this->logUtil.putF("Top", this, "scrollY");
    

                                    }
                                
                             else 
                        if(anchor == Graphics::BOTTOM)
                        
                                    {
                                    this->logUtil.putF("Bottom", this, "scrollY");
    

    int32_t diffY = (terrainTiledLayer->getHeight() -displayInfo->getLastHeight());;
    
this->move(0, diffY);
    

                                    }
                                
                             else 
                        if(anchor == Graphics::VCENTER)
                        
                                    {
                                    this->logUtil.putF("Center", this, "scrollY");
    

    int32_t diffY = (terrainTiledLayer->getHeight() -displayInfo->getLastHeight()) /2;;
    
this->move(0, diffY);
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Such Anchor Supported");
                    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    protected: void up(){

    int32_t y = this->geographicMapInterface->getAllBinaryTiledLayer()->getYP() -10;;
    

                        if(this->keepOnMapMinY(y))
                        
                                    {
                                    this->move(0,  -10);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void down(){

    int32_t y =  -this->geographicMapInterface->getAllBinaryTiledLayer()->getYP() +10;;
    

                        if(this->keepOnMapMaxY(y))
                        
                                    {
                                    this->move(0, 10);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void right(){

    int32_t x = this->geographicMapInterface->getAllBinaryTiledLayer()->getYP() +10;;
    

                        if(this->keepOnMapMinX(x))
                        
                                    {
                                    this->move(10, 0);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void left(){

    int32_t x =  -this->geographicMapInterface->getAllBinaryTiledLayer()->getYP() -10;;
    

                        if(this->keepOnMapMaxX(x))
                        
                                    {
                                    this->move( -10, 0);
    

                                    }
                                
}


    public: void initInputProcessors(){
this->inputProcessorArray[Canvas::UP]= new ScrollMapUpGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::DOWN]= new ScrollMapDownGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM9]= new ScrollMapRightGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM7]= new ScrollMapLeftGameInputProcessor(this);
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public: void processInputKey(int32_t key){
this->inputProcessorArray[key].processEvent(AllBinaryGameLayerManager::getNullInstance(), GameKeyEvent::NONE);
    
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager* layerManager){

        try {
            
    int32_t size = this->inputList->size();;
    

    int32_t key = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameKeyEvent* gameKeyEvent = dynamic_cast<GameKeyEvent*>(this->inputList->get(index));;
    
key= gameKeyEvent->getKey();
    
this->processInputKey(key);
    
}


                        if(this->isSingleKeyProcessing)
                        
                                    {
                                    this->clear();
    

                                    }
                                
                        else {
                            this->update();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.PROCESS_INPUT, &e);
    
}

}


    private: int32_t getSpecialHeight(){

    AllBinaryTiledLayer* terrainTiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(terrainTiledLayer->getHeight() > displayInfo->getLastHeight())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return terrainTiledLayer->getHeight() -displayInfo->getLastHeight();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return displayInfo->getLastHeight() -terrainTiledLayer->getHeight() +terrainTiledLayer->getCellHeight();
    

                        }
                            
}


    private: int32_t getSpecialWidth(){

    AllBinaryTiledLayer* terrainTiledLayer = this->geographicMapInterface->getAllBinaryTiledLayer();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

                        if(terrainTiledLayer->getWidth() > displayInfo->getLastWidth())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return terrainTiledLayer->getWidth() -displayInfo->getLastWidth();
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return displayInfo->getLastWidth() -terrainTiledLayer->getWidth() +terrainTiledLayer->getCellWidth();
    

                        }
                            
}


    public: bool keepOnMapMaxY(int32_t newY){

    int32_t y = this->geographicMapInterface->getAllBinaryTiledLayer()->getYP();;
    

                        if(y > this->maxBottom +this->border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: bool keepOnMapMinY(int32_t newY){

    int32_t y = this->geographicMapInterface->getAllBinaryTiledLayer()->getYP();;
    

                        if(y <  -this->border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: bool keepOnMapMaxX(int32_t newX){

    int32_t x = this->geographicMapInterface->getAllBinaryTiledLayer()->getXP();;
    

                        if(x <  -this->maxRight -this->border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: bool keepOnMapMinX(int32_t newX){

    int32_t x = this->geographicMapInterface->getAllBinaryTiledLayer()->getXP();;
    

                        if(x > this->border)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


};

            

