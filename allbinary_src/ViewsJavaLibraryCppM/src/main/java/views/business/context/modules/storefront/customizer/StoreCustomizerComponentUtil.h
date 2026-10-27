
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"

class StoreCustomizerComponentUtil
            : public Object
         {

    private: static StoreCustomizerComponentUtil* instance() { static std::unique_ptr<StoreCustomizerComponentUtil> value(new StoreCustomizerComponentUtil()); return value.get(); }

    public: static StoreCustomizerComponentUtil* getInstance();

    protected: LogUtil* logUtil = LogUtil::getInstance();

private: StoreCustomizerComponentUtil();

                //@Throws(Exception.constructor)
            
    public: std::string generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, BasicArrayList* allViewsToBeModifiedVector);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H
