
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        
            #include "../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/layer/RTSGameStrings.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSLayerInfoPaintable.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/capital/Capital.h>

      
#include <org/allbinary/media/audio/DowngradeSound.h>

      
#include <org/allbinary/media/audio/UpgradeSound.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEvent.h>

      
#include <org/allbinary/game/layer/hud/event/GameNotificationEventHandler.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/media/audio/ErrorSound.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerGameInput.h"
#include "InputFactory.h"
#include "GameInputProcessor.h"
#include "SelectRTSLayerVisitorFactoryInterface.h"
#include "RTSPlayerGameInput.h"
#include "SelectedRTSLayersPlayerUpgradeGameInputProcessor.h"
#include "SelectedRTSLayersPlayerDowngradeGameInputProcessor.h"
#include "GameInputProcessorUtil.h"

class SelectedRTSLayersPlayerGameInput: public PlayerGameInput {

    protected: const std::vector<GameInputProcessor> inputProcessorArray = new Array(InputFactory::getInstance().MAX);

    private: BasicArrayList list;

    protected: const bool isSingleKeyProcessing = Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_REPEAT_PRESS) || Features::getInstance().isFeature(InputFeatureFactory::getInstance().SINGLE_KEY_PRESS);

    private: BasicArrayList selectedRTSLayersList = BasicArrayListD();

    private: BasicArrayList preSelectedRTSLayersList = BasicArrayListD();

    private: BasicArrayList paintSelectedRTSLayersList = BasicArrayListUtil::getInstance().getImmutableInstance();

    private: RTSPlayerLayerInterface rtsPlayerLayerInterface;

    private: Visitor selectRTSLayerVisitorInterface;

    private: GameNotificationEvent upgradeGameNotificationEvent;

    private: GameNotificationEvent noMoneyGameNotificationEvent;

    private: GameNotificationEvent downgradeGameNotificationEvent;

public: SelectedRTSLayersPlayerGameInput(RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, BasicArrayList list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface){
            super(list, BasicArrayListD(), playerInputId);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initInputProcessors();
    
this->rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this->list= list;
    
this->selectRTSLayerVisitorInterface= selectRTSLayerVisitorFactoryInterface.create(this);
    

    SmallIntegerSingletonFactory smallIntegerSingletonFactory = SmallIntegerSingletonFactory::getInstance();;
    

    BasicColorFactory basicColorFactory = BasicColorFactory::getInstance();;
    
this->upgradeGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().UPGRADE, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->noMoneyGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().NO_MONEY, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
this->downgradeGameNotificationEvent= GameNotificationEvent(this, RTSGameStrings::getInstance().DOWNGRADE, smallIntegerSingletonFactory.getAt(2), basicColorFactory.PINK, BooleanFactory::getInstance().FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){

    GeographicMapCompositeInterface geographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    BasicGeographicMap geographicMapInterface = geographicMapCompositeInterface.getGeographicMapInterface()[0];;
    
this->upgradeGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->noMoneyGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
this->downgradeGameNotificationEvent.setBasicColorP(geographicMapInterface.getForegroundBasicColor());
    
}


    public: bool isSelected(RTSLayer rtsLayer){

                        if(this->selectedRTSLayersList.contains(rtsLayer))
                        
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
            
    protected: void upgrade(){

    bool anyChanged = false;;
    




                        for (
    int32_t index = this->selectedRTSLayersList.size() -1;index >= 0; index--)
        {

    RTSLayer rtsLayer = this->selectedRTSLayersList.get(index) as RTSLayer;;
    

                        if(rtsLayer.isUpgradeable())
                        
                                    {
                                    
    Capital capital = this->rtsPlayerLayerInterface.getCapital();;
    

    int32_t upgradeCost = rtsLayer.getUpgradeCost();;
    

                        if(upgradeCost <= capital.getTotalMoney())
                        
                                    {
                                    anyChanged= true;
    
this->rtsPlayerLayerInterface.add(UpgradeSound::getInstance());
    
rtsLayer.upgrade();
    
capital.removeMoney(upgradeCost);
    

                        if(!this->rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->upgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            this->rtsPlayerLayerInterface.add(ErrorSound::getInstance());
    

                        if(!this->rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    RTSPlayerGameInput rtsPlayerGameInput = (this->rtsPlayerLayerInterface.getPlayerGameInput() as RTSPlayerGameInput);;
    
rtsPlayerGameInput.updatePaintable();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void downgrade(){

    bool anyChanged = false;;
    




                        for (
    int32_t index = this->selectedRTSLayersList.size();--index >= 0; )
        {

    RTSLayer rtsLayer = this->selectedRTSLayersList.get(index) as RTSLayer;;
    

                        if(rtsLayer.isDowngradeable())
                        
                                    {
                                    anyChanged= true;
    
this->rtsPlayerLayerInterface.add(DowngradeSound::getInstance());
    

    int32_t downgradeCost = rtsLayer.getDowngradeCost();;
    
rtsLayer.downgrade();
    

    Capital capital = this->rtsPlayerLayerInterface.getCapital();;
    
capital.addMoney(downgradeCost);
    

                        if(!this->rtsPlayerLayerInterface.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler::getInstance().fireEvent(this->downgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    RTSPlayerGameInput rtsPlayerGameInput = (this->rtsPlayerLayerInterface.getPlayerGameInput() as RTSPlayerGameInput);;
    
rtsPlayerGameInput.updatePaintable();
    

                                    }
                                
}


    public: void initInputProcessors(){
this->inputProcessorArray[Canvas::KEY_NUM1]= SelectedRTSLayersPlayerUpgradeGameInputProcessor(this);
    
this->inputProcessorArray[Canvas::KEY_NUM3]= SelectedRTSLayersPlayerDowngradeGameInputProcessor(this);
    
GameInputProcessorUtil::init(this->inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public: void processInputKey(int32_t key){

                        if(this->selectedRTSLayersList != 
                                    nullptr
                                )
                        
                                    {
                                    this->inputProcessorArray[key]!.processEvent(AllBinaryGameLayerManager::getNullInstance(), GameKeyEvent::NONE);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processInput(AllBinaryLayerManager layerManager){

        try {
            
    int32_t size = this->list.size();;
    

    int32_t key = 0;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GameKeyEvent gameKeyEvent = this->list.get(index) as GameKeyEvent;;
    
key= gameKeyEvent.getKey();
    
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
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.PROCESS_INPUT, e);
    
}

}


    public: BasicArrayList getSelectedBasicArrayList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRTSLayersList;
    
}


    public: void addSelectedRTSLayer(RTSLayer selectedLayer){
this->paintSelectedRTSLayersList= BasicArrayListUtil::getInstance().getImmutableInstance();
    

                        if(selectedLayer == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->deselectAll();
    
this->selectedRTSLayersList.clear();
    

                                    }
                                
                        else {
                            
                        if(!this->selectedRTSLayersList.contains(selectedLayer))
                        
                                    {
                                    this->selectedRTSLayersList.add(selectedLayer);
    

                                    }
                                

                        }
                            
this->paintSelectedRTSLayersList= this->selectedRTSLayersList;
    
}


    public: void setSelectedRTSLayer(CollidableDestroyableDamageableLayer selectedLayer){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Selected Layer: ");
    

                        if(selectedLayer != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(selectedLayer.getName());
    

                                    }
                                
this->logUtil.putF(stringBuffer.toString(), this, "setSelectedRTSLayer");
    
this->paintSelectedRTSLayersList= BasicArrayListUtil::getInstance().getImmutableInstance();
    
this->selectRTSLayerVisitorInterface.visit(selectedLayer);
    
this->deselectAll();
    

                        if(this->selectedRTSLayersList.size() > 0)
                        
                                    {
                                    this->getPreSelectedRTSLayersList().clear();
    

    BasicArrayList tempList = this->getPreSelectedRTSLayersList();;
    
this->preSelectedRTSLayersList= this->selectedRTSLayersList;
    
this->selectedRTSLayersList= tempList;
    
this->logUtil.putF(StringMaker().append("Preselected: ").append(this->preSelectedRTSLayersList.toString()).toString(), this, "setSelectedRTSLayer");
    

                                    }
                                

                        if(selectedLayer != CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    this->selectedRTSLayersList.add(selectedLayer);
    

                                    }
                                
this->paintSelectedRTSLayersList= this->selectedRTSLayersList;
    
}


    public: CollidableDestroyableDamageableLayer getLastSelectedRtsLayer(){

                        if(this->isAnyRTSLayerSelected())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedRTSLayersList.get(this->selectedRTSLayersList.size() -1) as CollidableDestroyableDamageableLayer;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer::getNullInstance();;
    

                        }
                            
}


    public: void selectAllPreselected(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Select all Preselected: ");
    
stringBuffer.append(this->preSelectedRTSLayersList.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "selectAllPreselected");
    




                        for (
    int32_t index = this->preSelectedRTSLayersList.size() -1;index >= 0; index--)
        {

    RTSLayer rtsLayer = this->preSelectedRTSLayersList.get(index) as RTSLayer;;
    
rtsLayer.select();
    
}

}


    public: void deselectAllPreselected(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Deselect all Preselected: ");
    
stringBuffer.append(this->preSelectedRTSLayersList.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, "deselectAllPreselected");
    




                        for (
    int32_t index = this->preSelectedRTSLayersList.size() -1;index >= 0; index--)
        {

    RTSLayer rtsLayer = this->preSelectedRTSLayersList.get(index) as RTSLayer;;
    
rtsLayer.deselect();
    
}

this->preSelectedRTSLayersList.clear();
    
}


    public: void deselectAll(){




                        for (
    int32_t index = this->selectedRTSLayersList.size() -1;index >= 0; index--)
        {

    RTSLayer rtsLayer = this->selectedRTSLayersList.get(index) as RTSLayer;;
    
rtsLayer.deselect();
    
}

}


    public: bool isAnyRTSLayerSelected(){

                        if(this->selectedRTSLayersList.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: BasicArrayList getPaintSelectedRTSLayersList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paintSelectedRTSLayersList;
    
}


    public: BasicArrayList getPreSelectedRTSLayersList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->preSelectedRTSLayersList;
    
}


};

            

