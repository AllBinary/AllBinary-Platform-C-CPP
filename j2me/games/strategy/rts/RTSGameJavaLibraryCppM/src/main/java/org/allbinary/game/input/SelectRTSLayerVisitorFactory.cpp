
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

    public: static SelectRTSLayerVisitorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectRTSLayerVisitorFactory::instance();
    
}


private: SelectRTSLayerVisitorFactory(){
}


    public: Visitor create(SelectedRTSLayersPlayerGameInput selectedRTSLayersPlayerGameInput){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SelectRTSLayerVisitor();
    
}


};

            

