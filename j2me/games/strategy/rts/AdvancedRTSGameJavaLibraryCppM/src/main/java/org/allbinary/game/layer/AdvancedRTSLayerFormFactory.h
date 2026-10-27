
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/RTSLayerFormFactory.h>
class ABCustomItem;
class CommonStrings;
class LogUtil;
class ScrollSelectionForm;
class ItemArraySingletonFactoryInterface;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RTSScrollSelectionFormFactory;
class RTSLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AdvancedRTSLayerFormFactory: public RTSLayerFormFactory {

    /*protected*/ public: LogUtil* logUtil;

    private: ScrollSelectionForm* scrollSelectionForm;

/*protected*/ public: AdvancedRTSLayerFormFactory(std::string label, ItemArraySingletonFactoryInterface* itemArrayFactoryInterface);

    public: ScrollSelectionForm* getInstance(RTSLayer* rtsLayer);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_ADVANCEDRTSLAYERFORMFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/RTSLayerFormFactory.h>)
#include <org/allbinary/game/input/RTSLayerFormFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ABCustomItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomItem.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/form/ScrollSelectionForm.h>)
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>)
#include <org/allbinary/graphics/form/item/ItemArraySingletonFactoryInterface.h>
#endif
#if __has_include("org/allbinary/game/layer/RTSScrollSelectionFormFactory.h")
#include "org/allbinary/game/layer/RTSScrollSelectionFormFactory.h"
#endif
#if __has_include("org/allbinary/game/layer/RTSLayer.h")
#include "org/allbinary/game/layer/RTSLayer.h"
#endif

        #endif
    
