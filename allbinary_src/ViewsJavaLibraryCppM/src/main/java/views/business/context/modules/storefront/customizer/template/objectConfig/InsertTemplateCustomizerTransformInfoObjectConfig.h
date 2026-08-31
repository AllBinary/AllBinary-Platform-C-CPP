
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_H

            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNodeView.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NoTemplateTransformInfoObjectConfig.h"

class InsertTemplateCustomizerTransformInfoObjectConfig: public NoTemplateTransformInfoObjectConfig {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (Object transformInfoInterface);

public constructor (Object transformInfoInterface, Object document);

public constructor (Object transformInfoInterface, string name, string type);

                //@Throws(Exception.constructor)
            
    public set(string aParentViewName);

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_CUSTOMIZER_TEMPLATE_OBJECTCONFIG_INSERTTEMPLATECUSTOMIZERTRANSFORMINFOOBJECTCONFIG_H
