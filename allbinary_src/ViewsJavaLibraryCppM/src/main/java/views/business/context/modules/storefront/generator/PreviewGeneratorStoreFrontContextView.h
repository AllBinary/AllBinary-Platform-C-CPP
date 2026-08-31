
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_H
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeneratorStoreFrontContextView.h"

class PreviewGeneratorStoreFrontContextView: public GeneratorStoreFrontContextView {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (TransformInfoInterface transformInfoInterface);

                //@Throws(Exception.constructor)
            
    public string view();

};

            


        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_H
