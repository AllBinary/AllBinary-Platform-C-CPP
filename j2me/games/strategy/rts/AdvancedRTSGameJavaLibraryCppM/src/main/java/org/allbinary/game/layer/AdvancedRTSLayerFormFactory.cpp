
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_CPP
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/AdvancedRTSLayerFormFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/RTSLayerFormFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSScrollSelectionFormFactory.h"
#include "org/allbinary/game/layer/RTSLayer.h"


AdvancedRTSLayerFormFactory::AdvancedRTSLayerFormFactory(std::string label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface) : logUtil(LogUtil::getInstance()){

    ScrollSelectionForm* scrollSelectionForm = ScrollSelectionForm::getNullScrollSelectionForm();;
    

        try {
            
    std::vector<ABCustomItem*> items = itemArrayFactoryInterface->getItems();;
    
scrollSelectionForm= RTSScrollSelectionFormFactory::getInstance(label, items);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

this->scrollSelectionForm= scrollSelectionForm;
    
}


    auto AdvancedRTSLayerFormFactory::getInstance(RTSLayer* rtsLayer) -> ScrollSelectionForm*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scrollSelectionForm;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_CPP
