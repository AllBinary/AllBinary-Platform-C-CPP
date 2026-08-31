
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
        



#include <org/allbinary/game/input/form/AssignWaypointsUtil.h>

      
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>

      
#include <org/allbinary/game/layer/RTSLayer.h>

      
#include <org/allbinary/game/layer/building/BuildingLayer.h>

      
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/game/layer/unit/UnitLayer.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectedRTSLayersPlayerGameInput.h"

class SelectAdvancedRTSLayerVisitor: public Visitor {
        

    private: const selectedRTSLayersPlayerGameInput: SelectedRTSLayersPlayerGameInput;

public constructor (SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput){

            super();
        this.selectedRTSLayersPlayerGameInput= selectedRTSLayersPlayerGameInput;
    
}


    public any visit(any = {} anyType){

    selectedLayer: CollidableDestroyableDamageableLayer = anyType as CollidableDestroyableDamageableLayer;;
    

                        if(selectedLayer != CollidableDestroyableDamageableLayer.getNullInstance() && selectedLayer!.getType() == BuildingLayer.getStaticType())
                        
                                    {
                                    
    rtsGameLayer: AdvancedRTSGameLayer = selectedLayer as AdvancedRTSGameLayer;;
    

    assignWaypointsUtil: AssignWaypointsUtil = AssignWaypointsUtil.getInstance()!;;
    

    list: BasicArrayList = this.selectedRTSLayersPlayerGameInput!.getSelectedBasicArrayList()!;;
    

    currentRTSLayer: RTSLayer;;
    

    unitLayer: UnitLayer;;
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {
currentRTSLayer= list.get(index) as RTSLayer;
    

                        if(currentRTSLayer!.getType() == UnitLayer.getStaticType())
                        
                                    {
                                    unitLayer= currentRTSLayer as UnitLayer;
    
unitLayer!.setParentLayer(rtsGameLayer);
    
assignWaypointsUtil!.set(unitLayer, rtsGameLayer);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_OBJECT;
    
}


};

            

