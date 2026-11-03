
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/generator/PreviewGeneratorStoreFrontContextView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/generator/GeneratorStoreFrontContextView.h"


PreviewGeneratorStoreFrontContextView::PreviewGeneratorStoreFrontContextView(TransformInfoInterface* transformInfoInterface) : GeneratorStoreFrontContextView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto PreviewGeneratorStoreFrontContextView::view() -> std::string{

        try {
            
    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(this->getTransformInfoInterface());;
    
httpTransformInfoInterface->getPropertiesHashMap()->put(TransformInfoData::getInstance()->PARTIAL, CommonSeps::getInstance()->SPACE +TransformInfosData::getInstance()->PREVIEW);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->GeneratorStoreFrontContextView::view(TransformInfosData::getInstance()->PREVIEW);;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_PREVIEWGENERATORSTOREFRONTCONTEXTVIEW_CPP
