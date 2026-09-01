
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H

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

    private: SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput;

public: SelectAdvancedRTSLayerVisitor(SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput);

    public: Object* visit(Object* anyType);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H
