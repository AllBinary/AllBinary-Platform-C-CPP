
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/form/RTSFormInput.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RTSFormInput::RTSFormInput(std::vector<Group*> groupInterfaceArray) : logUtil(LogUtil::getInstance()), groupCommonFactory(GroupCommonFactory::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()), newUnconstructedRTSLayerInterfaceArray(std::vector<CollidableDestroyableDamageableLayer*>(7)), selectedGeographicCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION), selectedStickyItem(ABCustomItem::getNullInstance()){

    int32_t size = this->newUnconstructedRTSLayerInterfaceArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->newUnconstructedRTSLayerInterfaceArray[index]= CollidableDestroyableDamageableLayer::getNullInstance();
    
}

this->groupInterfaceArray= groupInterfaceArray;
    
this->hashtable->put(DirectionFactory::getInstance()->NAME, DirectionFactory::getInstance()->DOWN);
    

                        if(!groupInterfaceArray.empty())
                        
                                    {
                                    this->hashtable->put(this->groupCommonFactory->ID, groupInterfaceArray);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::processAtPoint(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) -> void{

    int32_t index = this->getIndexAt(rtsPlayerLayerInterface, point);;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    ScrollSelectionForm* scrollSelectionForm = rtsPlayerLayerInterface->getCurrentScrollSelectionForm();;
    

    ABCustomItem* item = scrollSelectionForm->get(index);;
    

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
            
    auto RTSFormInput::process(AllBinaryLayerManager* layerManager) -> void{
this->setAllBinaryGameLayerManager(dynamic_cast<AllBinaryGameLayerManager*>(layerManager));
    
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::processSticky(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point) -> bool{

    int32_t index = this->getIndexAt(rtsPlayerLayerInterface, point);;
    

                        if(index < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

    ScrollSelectionForm* scrollSelectionForm = rtsPlayerLayerInterface->getCurrentScrollSelectionForm();;
    

    ABCustomItem* item = scrollSelectionForm->get(index);;
    

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
            
    auto RTSFormInput::processStickyGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index) -> void{
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::getItemAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point) -> ABCustomItem*{
this->logUtil->putF((new StringMaker())->append("Point: ")->append(StringUtil::getInstance()->toString(point))->toString(), this, "getItemAt");
    

    ScrollSelectionForm* scrollSelectionForm = rtsPlayerLayerInterface->getCurrentScrollSelectionForm();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm->getSelectedItem(point);;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::getIndexAt(RTSPlayerLayerInterface* rtsPlayerLayerInterface, GPoint* point) -> int32_t{
this->logUtil->putF((new StringMaker())->append("Point: ")->append(StringUtil::getInstance()->toString(point))->toString(), this, "getItemAt");
    

    ScrollSelectionForm* scrollSelectionForm = rtsPlayerLayerInterface->getCurrentScrollSelectionForm();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return scrollSelectionForm->getSelectedIndexForPoint(point);;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSFormInput::getInstance(AllBinaryLayerManager* layerManager, ABCustomItem* aItem, GeographicMapCellPosition* geographicMapCellPosition) -> CollidableDestroyableDamageableLayer*{

    LayerInterfaceFactoryImageItem* item = dynamic_cast<LayerInterfaceFactoryImageItem*>(aItem);;
    

    LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = item->getLayerInterfaceFactoryInterface();;
    

    GPoint* cellPoint = geographicMapCellPosition->getPoint();;
    

                        if(layerInterfaceFactoryInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->hashtable->put(AllBinaryGameLayerManager::ID, layerManager);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<RTSLayer*>(layerInterfaceFactoryInterface->getNextInstance(this->getHashtable(), cellPoint->getX(), cellPoint->getY(), cellPoint->getZ()));
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CollidableDestroyableDamageableLayer::getNullInstance();;
    
}


    auto RTSFormInput::getSelectedGeographicCellPosition() -> GeographicMapCellPosition*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedGeographicCellPosition;
    
}


    auto RTSFormInput::setSelectedGeographicCellPosition(GeographicMapCellPosition* selectedGeographicCellPosition) -> void{
this->logUtil->putF((new StringMaker())->append("Selected GeographicMapCellPosition: ")->append(selectedGeographicCellPosition->toString())->toString(), this, "setSelectedGeographicCellPosition");
    
this->selectedGeographicCellPosition= selectedGeographicCellPosition;
    
}


    auto RTSFormInput::isStickyItemSelected() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->stickyItemSelected;
    
}


    auto RTSFormInput::setStickyItemSelected(bool stickyItemSelected) -> void{
this->stickyItemSelected= stickyItemSelected;
    
}


    auto RTSFormInput::getSelectedStickyItem() -> ABCustomItem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedStickyItem;
    
}


    auto RTSFormInput::setSelectedStickyItem(ABCustomItem* selectedStickyItem) -> void{
this->selectedStickyItem= selectedStickyItem;
    
}


    auto RTSFormInput::getSelectedStickyItemIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedStickyItemIndex;
    
}


    auto RTSFormInput::setSelectedStickyItemIndex(int32_t selectedStickyItemIndex) -> void{
this->selectedStickyItemIndex= selectedStickyItemIndex;
    
}


    auto RTSFormInput::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_FORM_RTSFORMINPUT_CPP
