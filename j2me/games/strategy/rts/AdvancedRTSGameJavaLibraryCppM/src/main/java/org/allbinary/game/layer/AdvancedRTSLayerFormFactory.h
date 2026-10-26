
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/RTSLayerFormFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSScrollSelectionFormFactory.h"
#include "RTSLayer.h"

class AdvancedRTSLayerFormFactory: public RTSLayerFormFactory {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: ScrollSelectionForm scrollSelectionForm;

protected: AdvancedRTSLayerFormFactory(std::string label, ItemArraySingletonFactoryInterface itemArrayFactoryInterface);

    public: ScrollSelectionForm getInstance(RTSLayer rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H
