
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"

class SelectAdvancedRTSLayerVisitor: public Visitor {

    private: SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput;

public: SelectAdvancedRTSLayerVisitor(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput){
this->selectedRTSLayersPlayerGameInput= selectedRTSLayersPlayerGameInput;
    
}


    public: Object* visit(Object* anyType){

    CollidableDestroyableDamageableLayer* selectedLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(anyType);;
    

                        if(selectedLayer != CollidableDestroyableDamageableLayer::getNullInstance() && selectedLayer->getType() == BuildingLayer::getStaticType())
                        
                                    {
                                    
    AdvancedRTSGameLayer* rtsGameLayer = dynamic_cast<AdvancedRTSGameLayer*>(selectedLayer);;
    

    AssignWaypointsUtil* assignWaypointsUtil = AssignWaypointsUtil::getInstance();;
    

    BasicArrayList* list = this->selectedRTSLayersPlayerGameInput->getSelectedBasicArrayList();;
    

    RTSLayer* currentRTSLayer;;
    

    UnitLayer* unitLayer;;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
currentRTSLayer= dynamic_cast<RTSLayer*>(list->get(index));
    

                        if(currentRTSLayer->getType() == UnitLayer::getStaticType())
                        
                                    {
                                    unitLayer= dynamic_cast<UnitLayer*>(currentRTSLayer);
    
unitLayer->setParentLayer(rtsGameLayer);
    
assignWaypointsUtil->set(unitLayer, rtsGameLayer);
    

                                    }
                                
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil::getInstance()->NULL_OBJECT;
    
}


};

            

