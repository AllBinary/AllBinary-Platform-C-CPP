
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/SelectRTSLayerVisitorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/SelectRTSLayerVisitorFactoryInterface.h"
#include "org/allbinary/game/input/SelectRTSLayerVisitor.h"
#include "org/allbinary/game/input/SelectedRTSLayersPlayerGameInput.h"

auto SelectRTSLayerVisitorFactory::instance_owner() -> SelectRTSLayerVisitorFactory* { static std::unique_ptr<SelectRTSLayerVisitorFactory> value(new SelectRTSLayerVisitorFactory()); return value.get(); }
SelectRTSLayerVisitorFactory* SelectRTSLayerVisitorFactory::instance = SelectRTSLayerVisitorFactory::instance_owner();

    auto SelectRTSLayerVisitorFactory::getInstance() -> SelectRTSLayerVisitorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectRTSLayerVisitorFactory::instance;
    
}


SelectRTSLayerVisitorFactory::SelectRTSLayerVisitorFactory(){
}


    auto SelectRTSLayerVisitorFactory::create(SelectedRTSLayersPlayerGameInput* selectedRTSLayersPlayerGameInput) -> Visitor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new SelectRTSLayerVisitor();
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_CPP
