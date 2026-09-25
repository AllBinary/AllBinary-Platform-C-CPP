
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
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/game/layer/item/LayerInterfaceFactoryImageItem.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerInterfaceFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RTSFormInput
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: const Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    protected: const std::vector<CollidableDestroyableDamageableLayer> newUnconstructedRTSLayerInterfaceArray = new Array(7);

    protected: std::vector<Group> groupInterfaceArray;

    private: GeographicMapCellPosition selectedGeographicCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;

    private: bool stickyItemSelected= false;

    private: int32_t selectedStickyItemIndex= 0;

    private: ABCustomItem selectedStickyItem = ABCustomItem::getNullInstance();

public: RTSFormInput(std::vector<Group> groupInterfaceArray){

    int32_t size = this->newUnconstructedRTSLayerInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->newUnconstructedRTSLayerInterfaceArray[index]= CollidableDestroyableDamageableLayer::getNullInstance();
    
}

this->groupInterfaceArray= groupInterfaceArray;
    
this->hashtable.put(DirectionFactory::getInstance().NAME, DirectionFactory::getInstance().DOWN);
    

                        if(groupInterfaceArray != 
                                    nullptr
                                )
                        
                                    {
                                    this->hashtable.put(this->groupCommonFactory.ID, groupInterfaceArray);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
}


                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){

    int32_t index = this->getIndexAt(rtsPlayerLayerInterface, point);;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    ScrollSelectionForm scrollSelectionForm = rtsPlayerLayerInterface.getCurrentScrollSelectionForm();;
    

    ABCustomItem item = scrollSelectionForm.get(index);;
    

                        if(item == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager layerManager){
this->setAllBinaryGameLayerManager(layerManager as AllBinaryGameLayerManager);
    
}


                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
}


                //@Throws(Exception.constructor)
            
    public: bool processSticky(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){

    int32_t index = this->getIndexAt(rtsPlayerLayerInterface, point);;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    ScrollSelectionForm scrollSelectionForm = rtsPlayerLayerInterface.getCurrentScrollSelectionForm();;
    

    ABCustomItem item = scrollSelectionForm.get(index);;
    

                        if(item == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
this->processStickyGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
}


                //@Throws(Exception.constructor)
            
    protected: ABCustomItem getItemAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point){
this->logUtil.putF(StringMaker().append("Point: ").append(StringUtil::getInstance().toString(point)).toString(), this, "getItemAt");
    

    ScrollSelectionForm scrollSelectionForm = rtsPlayerLayerInterface.getCurrentScrollSelectionForm();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm.getSelectedItem(point);;
    
}


                //@Throws(Exception.constructor)
            
    protected: int32_t getIndexAt(RTSPlayerLayerInterface rtsPlayerLayerInterface, GPoint point){
this->logUtil.putF(StringMaker().append("Point: ").append(StringUtil::getInstance().toString(point)).toString(), this, "getItemAt");
    

    ScrollSelectionForm scrollSelectionForm = rtsPlayerLayerInterface.getCurrentScrollSelectionForm();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm.getSelectedIndexForPoint(point);;
    
}


                //@Throws(Exception.constructor)
            
    protected: CollidableDestroyableDamageableLayer getInstance(AllBinaryLayerManager layerManager, ABCustomItem aItem, GeographicMapCellPosition geographicMapCellPosition){

    LayerInterfaceFactoryImageItem item = aItem as LayerInterfaceFactoryImageItem;;
    

    LayerInterfaceFactoryInterface layerInterfaceFactoryInterface = item.getLayerInterfaceFactoryInterface();;
    

    GPoint cellPoint = geographicMapCellPosition.getPoint();;
    

                        if(layerInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->hashtable.put(AllBinaryGameLayerManager::ID, layerManager);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return layerInterfaceFactoryInterface.getNextInstance(this->getHashtable(), cellPoint.getX(), cellPoint.getY(), cellPoint.getZ()) as RTSLayer;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer::getNullInstance();;
    
}


    public: GeographicMapCellPosition getSelectedGeographicCellPosition(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedGeographicCellPosition;
    
}


    public: void setSelectedGeographicCellPosition(GeographicMapCellPosition selectedGeographicCellPosition){
this->logUtil.putF(StringMaker().append("Selected GeographicMapCellPosition: ").append(selectedGeographicCellPosition.toString()).toString(), this, "setSelectedGeographicCellPosition");
    
this->selectedGeographicCellPosition= selectedGeographicCellPosition;
    
}


    public: bool isStickyItemSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stickyItemSelected;
    
}


    public: void setStickyItemSelected(bool stickyItemSelected){
this->stickyItemSelected= stickyItemSelected;
    
}


    public: ABCustomItem getSelectedStickyItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedStickyItem;
    
}


    public: void setSelectedStickyItem(ABCustomItem selectedStickyItem){
this->selectedStickyItem= selectedStickyItem;
    
}


    public: int32_t getSelectedStickyItemIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedStickyItemIndex;
    
}


    public: void setSelectedStickyItemIndex(int32_t selectedStickyItemIndex){
this->selectedStickyItemIndex= selectedStickyItemIndex;
    
}


    public: Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


};

            

