
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSVALIDATIONVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSVALIDATIONVIEW_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationComponentInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/includes/style/css/template/retail/EditCssStyleValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <views/business/context/modules/storefront/customizer/CustomizerUtil.h>

      
#include <views/business/context/modules/storefront/customizer/includes/style/css/CssCustomizerView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EditCssValidationView: public CssCustomizerView, public ValidationComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: EditCssValidationView(TransformInfoInterface transformInfoInterface);

    public: Boolean isValid();

    public: std::string validationInfo();

    public: Document toValidationInfoDoc();

    public: Node toValidationInfoNode(Document document);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_CSS_TEMPLATE_RETAIL_EDITCSSVALIDATIONVIEW_H
