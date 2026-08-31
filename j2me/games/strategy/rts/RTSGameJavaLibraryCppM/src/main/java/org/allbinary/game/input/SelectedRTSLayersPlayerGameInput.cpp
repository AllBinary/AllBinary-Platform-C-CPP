
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
        

    const inputProcessorArray: std::vector<GameInputProcessor> = new Array(InputFactory.getInstance()!.MAX);

    private: const list: BasicArrayList;

    const isSingleKeyProcessing: bool = Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_REPEAT_PRESS) || Features.getInstance()!.isFeature(InputFeatureFactory.getInstance()!.SINGLE_KEY_PRESS);

    private: selectedRTSLayersList: BasicArrayList = new BasicArrayListD();

    private: preSelectedRTSLayersList: BasicArrayList = new BasicArrayListD();

    private: paintSelectedRTSLayersList: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: rtsPlayerLayerInterface: RTSPlayerLayerInterface;

    private: const selectRTSLayerVisitorInterface: Visitor;

    private: const upgradeGameNotificationEvent: GameNotificationEvent;

    private: const noMoneyGameNotificationEvent: GameNotificationEvent;

    private: const downgradeGameNotificationEvent: GameNotificationEvent;

public constructor (RTSLayerInfoPaintable towerInfoPaintable, RTSPlayerLayerInterface rtsPlayerLayerInterface, BasicArrayList list, int32_t playerInputId, SelectRTSLayerVisitorFactoryInterface selectRTSLayerVisitorFactoryInterface){
            super(list, new BasicArrayListD(), playerInputId);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initInputProcessors();
    
this.rtsPlayerLayerInterface= rtsPlayerLayerInterface;
    
this.list= list;
    
this.selectRTSLayerVisitorInterface= selectRTSLayerVisitorFactoryInterface!.create(this);
    

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;;
    
this.upgradeGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.UPGRADE, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.PINK, BooleanFactory.getInstance()!.FALSE);
    
this.noMoneyGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.NO_MONEY, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.PINK, BooleanFactory.getInstance()!.FALSE);
    
this.downgradeGameNotificationEvent= new GameNotificationEvent(this, RTSGameStrings.getInstance()!.DOWNGRADE, smallIntegerSingletonFactory!.getAt(2), basicColorFactory!.PINK, BooleanFactory.getInstance()!.FALSE);
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){

    geographicMapCompositeInterface: GeographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    
this.upgradeGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.noMoneyGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
this.downgradeGameNotificationEvent!.setBasicColorP(geographicMapInterface!.getForegroundBasicColor());
    
}


    public bool isSelected(RTSLayer rtsLayer){

                        if(this.selectedRTSLayersList!.contains(rtsLayer))
                        
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
            
    upgrade(){

    anyChanged: bool = false;;
    




                        for (
    index: int32_t = this.selectedRTSLayersList!.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = this.selectedRTSLayersList!.get(index) as RTSLayer;;
    

                        if(rtsLayer!.isUpgradeable())
                        
                                    {
                                    
    capital: Capital = this.rtsPlayerLayerInterface!.getCapital()!;;
    

    upgradeCost: int32_t = rtsLayer!.getUpgradeCost()!;;
    

                        if(upgradeCost <= capital.getTotalMoney())
                        
                                    {
                                    anyChanged= true;
    
this.rtsPlayerLayerInterface!.add(UpgradeSound.getInstance());
    
rtsLayer!.upgrade();
    
capital.removeMoney(upgradeCost);
    

                        if(!this.rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.upgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
                        else {
                            this.rtsPlayerLayerInterface!.add(ErrorSound.getInstance());
    

                        if(!this.rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.noMoneyGameNotificationEvent);
    

                                    }
                                

                        }
                            

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    rtsPlayerGameInput: RTSPlayerGameInput = (this.rtsPlayerLayerInterface!.getPlayerGameInput() as RTSPlayerGameInput);;
    
rtsPlayerGameInput!.updatePaintable();
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    downgrade(){

    anyChanged: bool = false;;
    




                        for (
    index: int32_t = this.selectedRTSLayersList!.size()!;--index >= 0; )
        {

    rtsLayer: RTSLayer = this.selectedRTSLayersList!.get(index) as RTSLayer;;
    

                        if(rtsLayer!.isDowngradeable())
                        
                                    {
                                    anyChanged= true;
    
this.rtsPlayerLayerInterface!.add(DowngradeSound.getInstance());
    

    downgradeCost: int32_t = rtsLayer!.getDowngradeCost()!;;
    
rtsLayer!.downgrade();
    

    capital: Capital = this.rtsPlayerLayerInterface!.getCapital()!;;
    
capital.addMoney(downgradeCost);
    

                        if(!this.rtsPlayerLayerInterface!.implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    GameNotificationEventHandler.getInstance()!.fireEvent(this.downgradeGameNotificationEvent);
    

                                    }
                                

                                    }
                                
}


                        if(anyChanged)
                        
                                    {
                                    
    rtsPlayerGameInput: RTSPlayerGameInput = (this.rtsPlayerLayerInterface!.getPlayerGameInput() as RTSPlayerGameInput);;
    
rtsPlayerGameInput!.updatePaintable();
    

                                    }
                                
}


    public initInputProcessors(){
this.inputProcessorArray[Canvas.KEY_NUM1]= new SelectedRTSLayersPlayerUpgradeGameInputProcessor(this);
    
this.inputProcessorArray[Canvas.KEY_NUM3]= new SelectedRTSLayersPlayerDowngradeGameInputProcessor(this);
    
GameInputProcessorUtil.init(this.inputProcessorArray);
    
}


                //@Throws(Exception.constructor)
            
    public processInputKey(int32_t key){

                        if(this.selectedRTSLayersList != 
                                    null
                                )
                        
                                    {
                                    this.inputProcessorArray[key]!.processEvent(AllBinaryGameLayerManager.getNullInstance(), GameKeyEvent.NONE);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processInput(AllBinaryLayerManager layerManager){

        try {
            
    size: int32_t = this.list.size()!;;
    

    key: int32_t = 0;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    gameKeyEvent: GameKeyEvent = this.list.get(index) as GameKeyEvent;;
    
key= gameKeyEvent!.getKey();
    
this.processInputKey(key);
    
}


                        if(this.isSingleKeyProcessing)
                        
                                    {
                                    this.clear();
    

                                    }
                                
                        else {
                            this.update();
    

                        }
                            

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.gameInputStrings!.PROCESS_INPUT, e);
    
}

}


    public BasicArrayList getSelectedBasicArrayList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedRTSLayersList;
    
}


    public addSelectedRTSLayer(RTSLayer selectedLayer){
this.paintSelectedRTSLayersList= BasicArrayListUtil.getInstance()!.getImmutableInstance();
    

                        if(selectedLayer == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    this.deselectAll();
    
this.selectedRTSLayersList!.clear();
    

                                    }
                                
                        else {
                            
                        if(!this.selectedRTSLayersList!.contains(selectedLayer))
                        
                                    {
                                    this.selectedRTSLayersList!.add(selectedLayer);
    

                                    }
                                

                        }
                            
this.paintSelectedRTSLayersList= this.selectedRTSLayersList;
    
}


    public setSelectedRTSLayer(CollidableDestroyableDamageableLayer selectedLayer){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Selected Layer: ");
    

                        if(selectedLayer != 
                                    null
                                )
                        
                                    {
                                    stringBuffer!.append(selectedLayer!.getName());
    

                                    }
                                
this.logUtil!.putF(stringBuffer!.toString(), this, "setSelectedRTSLayer");
    
this.paintSelectedRTSLayersList= BasicArrayListUtil.getInstance()!.getImmutableInstance();
    
this.selectRTSLayerVisitorInterface!.visit(selectedLayer);
    
this.deselectAll();
    

                        if(this.selectedRTSLayersList!.size() > 0)
                        
                                    {
                                    this.getPreSelectedRTSLayersList()!.clear();
    

    tempList: BasicArrayList = this.getPreSelectedRTSLayersList()!;;
    
this.preSelectedRTSLayersList= this.selectedRTSLayersList;
    
this.selectedRTSLayersList= tempList;
    
this.logUtil!.putF(new StringMaker().append("Preselected: ")!.append(this.preSelectedRTSLayersList!.toString())!.toString(), this, "setSelectedRTSLayer");
    

                                    }
                                

                        if(selectedLayer != CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    this.selectedRTSLayersList!.add(selectedLayer);
    

                                    }
                                
this.paintSelectedRTSLayersList= this.selectedRTSLayersList;
    
}


    public CollidableDestroyableDamageableLayer getLastSelectedRtsLayer(){

                        if(this.isAnyRTSLayerSelected())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.selectedRTSLayersList!.get(this.selectedRTSLayersList!.size() -1) as CollidableDestroyableDamageableLayer;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer.getNullInstance();;
    

                        }
                            
}


    public selectAllPreselected(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Select all Preselected: ");
    
stringBuffer!.append(this.preSelectedRTSLayersList!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "selectAllPreselected");
    




                        for (
    index: int32_t = this.preSelectedRTSLayersList!.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = this.preSelectedRTSLayersList!.get(index) as RTSLayer;;
    
rtsLayer!.select();
    
}

}


    public deselectAllPreselected(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Deselect all Preselected: ");
    
stringBuffer!.append(this.preSelectedRTSLayersList!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "deselectAllPreselected");
    




                        for (
    index: int32_t = this.preSelectedRTSLayersList!.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = this.preSelectedRTSLayersList!.get(index) as RTSLayer;;
    
rtsLayer!.deselect();
    
}

this.preSelectedRTSLayersList!.clear();
    
}


    public deselectAll(){




                        for (
    index: int32_t = this.selectedRTSLayersList!.size() -1;index >= 0; index--)
        {

    rtsLayer: RTSLayer = this.selectedRTSLayersList!.get(index) as RTSLayer;;
    
rtsLayer!.deselect();
    
}

}


    public bool isAnyRTSLayerSelected(){

                        if(this.selectedRTSLayersList!.size() == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public BasicArrayList getPaintSelectedRTSLayersList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paintSelectedRTSLayersList;
    
}


    public BasicArrayList getPreSelectedRTSLayersList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.preSelectedRTSLayersList;
    
}


};

            

