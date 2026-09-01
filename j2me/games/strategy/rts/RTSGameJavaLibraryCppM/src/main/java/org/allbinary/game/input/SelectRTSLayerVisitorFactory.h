
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_H
        #define ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SelectRTSLayerVisitorFactoryInterface.h"
#include "SelectRTSLayerVisitor.h"
#include "SelectedRTSLayersPlayerGameInput.h"

class SelectRTSLayerVisitorFactory
            : public Object
        : public SelectRTSLayerVisitorFactoryInterface {

    private: static SelectRTSLayerVisitorFactory instance() { return SelectRTSLayerVisitorFactory(); }

    public: static SelectRTSLayerVisitorFactory getInstance();

private: SelectRTSLayerVisitorFactory();

    public: Visitor create(SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_SELECTRTSLAYERVISITORFACTORY_H
