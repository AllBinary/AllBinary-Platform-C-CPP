
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/RootContextView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

RootContextView::RootContextView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "RootContextView()");
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto RootContextView::view() -> std::string{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(this->getTransformInfoInterface()->getName()), this, "view()");
    

                                    }
                                

    std::string viewName = this->getName();;
    

    TransformInterface* componentInterface = TransformFactory::getInstance()->getInstance(this->abeClientInformation, viewName, this->getTransformInfoInterface());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return componentInterface->view();;
    

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


                //@Throws(Exception.constructor)
            
    auto RootContextView::getName() -> std::string{

        try {
            
    NoTemplateTransformInfoObjectConfig* objectConfig = new NoTemplateTransformInfoObjectConfig(this->getTransformInfoInterface(), this->getTransformInfoInterface()->getObjectConfigInterface()->toXmlDoc());;
    

    BasicArrayList* componentsVector = objectConfig->getTransforms();;
    

                        if(componentsVector->size() == 0)
                        
                                    {
                                    


                            throw Exception("Template View Not Set - No Components");
                    

                                    }
                                

                        if(componentsVector->size() > 1)
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("To Many Root Template Views: ") +JavaString::valueOf(componentsVector->size()));
                    

                                    }
                                

    TransformInfo* transformInfoInterface = dynamic_cast<TransformInfo*>(componentsVector->get(0));;
    

    std::string viewName = transformInfoInterface->getName();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Root Template With View Name: ") +JavaString::valueOf(viewName), this, "getName()");
    

                                    }
                                

                        if(StringValidationUtil::getInstance()->isEmpty(viewName))
                        
                                    {
                                    


                            throw Exception("Template View Not Set - No View Name");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return viewName;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put(this->commonStrings->EXCEPTION, this, "getName()", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //VIEWS_BUSINESS_CONTEXT_ROOTCONTEXTVIEW_CPP
