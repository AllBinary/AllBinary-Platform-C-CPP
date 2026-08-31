
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_THEMECUSTOMIZERVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_THEMECUSTOMIZERVIEW_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThemeCustomizerView: public HttpStoreComponentView {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    validationInterface: ValidationInterface;

public constructor (TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public addDomNodeInterfaces();

                //@Throws(Exception.constructor)
            
    public string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_INCLUDES_STYLE_THEME_THEMECUSTOMIZERVIEW_H
