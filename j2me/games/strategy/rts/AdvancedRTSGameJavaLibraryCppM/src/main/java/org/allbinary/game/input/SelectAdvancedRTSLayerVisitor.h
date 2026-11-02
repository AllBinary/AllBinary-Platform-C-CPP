
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class AssignWaypointsUtil;
class AdvancedRTSGameLayer;
class RTSLayer;
class BuildingLayer;
class CollidableDestroyableDamageableLayer;
class UnitLayer;
class NullUtil;
class BasicArrayList;
#include <org/allbinary/logic/util/visitor/Visitor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class SelectedRTSLayersPlayerGameInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectAdvancedRTSLayerVisitor: public Visitor {

    private: SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput;

public: SelectAdvancedRTSLayerVisitor(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput);

    public: Object* visit(Object* anyType);
    public: Object* visit(const std::string& anyType) { return visit(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* visit(BoxValue anyType) { return visit(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_SELECTADVANCEDRTSLAYERVISITOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/form/AssignWaypointsUtil.h>)
#include <org/allbinary/game/input/form/AssignWaypointsUtil.h>
#endif
#if __has_include(<org/allbinary/game/layer/AdvancedRTSGameLayer.h>)
#include <org/allbinary/game/layer/AdvancedRTSGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/RTSLayer.h>)
#include <org/allbinary/game/layer/RTSLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/building/BuildingLayer.h>)
#include <org/allbinary/game/layer/building/BuildingLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>)
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>
#endif
#if __has_include(<org/allbinary/game/layer/unit/UnitLayer.h>)
#include <org/allbinary/game/layer/unit/UnitLayer.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h")
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"
#endif

        #endif
    
