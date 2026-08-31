
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
        



            #include "../../../../../java/lang/Exception.h"
        
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
        #include "RTSFormInput.h"
#include "WaypointRTSFormInput.h"
#include "UnitRTSFormInput.h"

class CompositeRTSFormInput: public RTSFormInput {
        

    private: const rtsFormInputArray: std::vector<RTSFormInput>;

    private: const itemIndex: std::vector<int32_t>;

    private: const isPrimaryWaypointCreator: bool;

public constructor (std::vector<Group> groupInterface, bool isPrimaryWaypointCreator, std::vector<int32_t> itemIndex){
            super(groupInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.itemIndex= itemIndex;
    
this.isPrimaryWaypointCreator= isPrimaryWaypointCreator;
    
this.rtsFormInputArray= new Array(2);
    
this.rtsFormInputArray[0]= new WaypointRTSFormInput(this.groupInterfaceArray, isPrimaryWaypointCreator);
    
this.rtsFormInputArray[1]= new UnitRTSFormInput(this.groupInterfaceArray);
    
}


                //@Throws(Exception.constructor)
            
    public setAllBinaryGameLayerManager(AllBinaryGameLayerManager allBinaryGameLayerManager){
super.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    

    geographicMapCompositeInterface: GeographicMapCompositeInterface = allBinaryGameLayerManager as GeographicMapCompositeInterface;;
    

    geographicMapInterface: BasicGeographicMap = geographicMapCompositeInterface!.getGeographicMapInterface()[0]!;;
    

    size: int32_t = this.rtsFormInputArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.rtsFormInputArray[index]!.setAllBinaryGameLayerManager(allBinaryGameLayerManager);
    
}

}


                //@Throws(Exception.constructor)
            
    public processAtPoint(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){

    scrollSelectionForm: ScrollSelectionForm = rtsPlayerLayerInterface!.getCurrentScrollSelectionForm()!;;
    

    index: int32_t = scrollSelectionForm!.getSelectedIndexForPoint(point)!;;
    

                        if(this.isStickyItemSelected() && associatedRtsLayer == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    
                        if(this.getSelectedStickyItemIndex() <= this.itemIndex[0])
                        
                                    {
                                    this.rtsFormInputArray[0]!.processAtPoint(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
    

                                    }
                                

                                    }
                                
                             else 
                        if(index > this.itemIndex[0])
                        
                                    {
                                    this.rtsFormInputArray[1]!.processAtPoint(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public processGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF(CommonLabels.getInstance()!.INDEX_LABEL +index +" > " +this.itemIndex[0], this, commonStrings!.PROCESS);
    

                        if(this.isStickyItemSelected() && associatedRtsLayer == CollidableDestroyableDamageableLayer.getNullInstance())
                        
                                    {
                                    
                        if(this.getSelectedStickyItemIndex() <= this.itemIndex[0])
                        
                                    {
                                    this.rtsFormInputArray[0]!.processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    

                                    }
                                

                                    }
                                
                             else 
                        if(index > this.itemIndex[0])
                        
                                    {
                                    this.rtsFormInputArray[1]!.processGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public bool processSticky(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, GPoint point){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsFormInputArray[0]!.processSticky(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, point);;
    
}


                //@Throws(Exception.constructor)
            
    public processStickyGameSpecific(CollidableDestroyableDamageableLayer associatedRtsLayer, RTSPlayerLayerInterface rtsPlayerLayerInterface, AllBinaryLayerManager layerManager, ABCustomItem item, int32_t index){
this.rtsFormInputArray[0]!.processStickyGameSpecific(associatedRtsLayer, rtsPlayerLayerInterface, layerManager, item, index);
    
}


    public int32_t getSelectedStickyItemIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsFormInputArray[0]!.getSelectedStickyItemIndex();;
    
}


    public bool isStickyItemSelected(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsFormInputArray[0]!.isStickyItemSelected();;
    
}


    public setStickyItemSelected(bool stickyItemSelected){
this.rtsFormInputArray[0]!.setStickyItemSelected(stickyItemSelected);
    
}


    public ABCustomItem getSelectedStickyItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.rtsFormInputArray[0]!.getSelectedStickyItem();;
    
}


    public setSelectedStickyItem(ABCustomItem selectedStickyItem){
this.rtsFormInputArray[0]!.setSelectedStickyItem(selectedStickyItem);
    
}


};

            

