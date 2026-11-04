
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/modules/storefront/generator/GeneratorStoreFrontContextView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformsGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GeneratorStoreFrontContextView::GeneratorStoreFrontContextView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto GeneratorStoreFrontContextView::view(std::string group) -> std::string{

    std::string result = TransformsGeneratorUtil::getInstance()->generateComponentsFromObjectConfig(this->abeClientInformation, this->getTransformInfoInterface(), group);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->JSPEXTRAOUTPUT))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeneratorStoreFrontContextView::view() -> std::string{

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->view(TransformInfosData::getInstance()->ALL);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->TAGHELPERERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "view()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_BUSINESS_CONTEXT_MODULES_STOREFRONT_GENERATOR_GENERATORSTOREFRONTCONTEXTVIEW_CPP
