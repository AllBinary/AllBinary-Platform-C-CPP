
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H

            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootContextView: public HttpStoreComponentView, public TransformTemplateInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: RootContextView(TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public: std::string view();

                //@Throws(Exception.constructor)
            
    public: std::string getName();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_H
