
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        
#include <org/allbinary/game/layer/RTSPlayerLayerInterface.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/form/RTSFormInput.h"
#include "org/allbinary/game/input/form/WaypointRTSFormInput.h"
#include "org/allbinary/game/input/form/UnitRTSFormInput.h"

class CompositeRTSFormInput: public RTSFormInput {

    private: std::vector<RTSFormInput*> rtsFormInputArray;

    private: std::vector<int32_t> itemIndex;

    private: bool isPrimaryWaypointCreator;

public: CompositeRTSFormInput(std::vector<Group*> groupInterface, bool isPrimaryWaypointCreator, std::vector<int32_t> itemIndex) : RTSFormInput(groupInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->itemIndex= itemIndex;
    
this->isPrimaryWaypointCreator= isPrimaryWaypointCreator;
    
this->rtsFormInputArray= std::vector<RTSFormInput*>(2);
    
this->rtsFormInputArray[0]= new WaypointRTSFormInput(this->groupInterfaceArray, isPrimaryWaypointCreator);
    
this->rtsFormInputArray[1]= new UnitRTSFormInput(this->groupInterfaceArray);
    
}


                //@Throws(Exception.constructor)
            
    public: void setAllBinaryGameLayerManager(AllBinaryGameLayerManager* allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    GeographicMapCompositeInterface* geographicMapCompositeInterface = dynamic_cast<GeographicMapCompositeInterface*>(allBinaryGameLayerManager);;
    

    BasicGeographicMap* geographicMapInterface = geographicMapCompositeInterface->getGeographicMapInterface()[0];;
    

    int32_t size = this->rtsFormInputArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->rtsFormInputArray[index].setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void processAtPoint(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point){

    ScrollSelectionForm* scrollSelectionForm = rtsPlayerLayerInterface->getCurrentScrollSelectionForm();;
    

    int32_t index = scrollSelectionForm->getSelectedIndexForPoint(point);;
    

                        if(this->isStickyItemSelected() && associatedRtsLayer == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
                        if(this->getSelectedStickyItemIndex() <= this->itemIndex[0])
                        
                                    {
                                    this->rtsFormInputArray[0].processAtPoint(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
    

                                    }
                                

                                    }
                                
                             else 
                        if(index > this->itemIndex[0])
                        
                                    {
                                    this->rtsFormInputArray[1].processAtPoint(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void processGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF(CommonLabels::getInstance()->INDEX_LABEL +index +" > " +this->itemIndex[0], this, commonStrings->PROCESS);
    

                        if(this->isStickyItemSelected() && associatedRtsLayer == CollidableDestroyableDamageableLayer::getNullInstance())
                        
                                    {
                                    
                        if(this->getSelectedStickyItemIndex() <= this->itemIndex[0])
                        
                                    {
                                    this->rtsFormInputArray[0].processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    

                                    }
                                

                                    }
                                
                             else 
                        if(index > this->itemIndex[0])
                        
                                    {
                                    this->rtsFormInputArray[1].processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: bool processSticky(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, GPoint* point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsFormInputArray[0].processSticky(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);;
    
}


                //@Throws(Exception.constructor)
            
    public: void processStickyGameSpecific(CollidableDestroyableDamageableLayer* associatedRtsLayer, RTSPlayerLayerInterface* rtsPlayerLayerInterface, AllBinaryLayerManager* layerManager, ABCustomItem* item, int32_t index){
this->rtsFormInputArray[0].processStickyGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    
}


    public: int32_t getSelectedStickyItemIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsFormInputArray[0].getSelectedStickyItemIndex();;
    
}


    public: bool isStickyItemSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsFormInputArray[0].isStickyItemSelected();;
    
}


    public: void setStickyItemSelected(bool stickyItemSelected){
this->rtsFormInputArray[0].setStickyItemSelected(stickyItemSelected);
    
}


    public: ABCustomItem* getSelectedStickyItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rtsFormInputArray[0].getSelectedStickyItem();;
    
}


    public: void setSelectedStickyItem(ABCustomItem* selectedStickyItem){
this->rtsFormInputArray[0].setSelectedStickyItem(selectedStickyItem);
    
}


};

            

