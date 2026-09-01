
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomizerUtil.h"

class StoreCustomizerComponentUtil
            : public Object
         {

    private: static StoreCustomizerComponentUtil instance() { return StoreCustomizerComponentUtil(); }

    public: static StoreCustomizerComponentUtil getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

private: StoreCustomizerComponentUtil();

                //@Throws(Exception.constructor)
            
    public: std::string generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    private: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Vector allViewsToBeModifiedVector);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_STORECUSTOMIZERCOMPONENTUTIL_H
