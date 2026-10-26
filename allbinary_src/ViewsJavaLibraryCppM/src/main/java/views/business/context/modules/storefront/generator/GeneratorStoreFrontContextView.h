
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformsGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GeneratorStoreFrontContextView: public HttpStoreComponentView {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: GeneratorStoreFrontContextView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    protected: std::string view(std::string group);

                //@Throws(Exception.constructor)
            
    public: std::string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_H
