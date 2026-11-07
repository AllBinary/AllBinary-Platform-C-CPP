
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
        



        #ifndef VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_CPP
        #define VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/business/context/OverrideObjectConfigRootContextView.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/GeneratorTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/RootTransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttp.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/w3c/dom/Document.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      

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
        

OverrideObjectConfigRootContextView::OverrideObjectConfigRootContextView(TransformInfoInterface* transformInfoInterface) : HttpStoreComponentView(transformInfoInterface), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "OverrideObjectRootContextView()");
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto OverrideObjectConfigRootContextView::view() -> std::string{

        try {
            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("View Name: ") +JavaString::valueOf(this->getTransformInfoInterface()->getName()), this, "view()");
    

                                    }
                                

    TransformInfoInterface* rootTransformInfoInterface = dynamic_cast<TransformInfoInterface*>(new TransformInfoHttp(dynamic_cast<TransformInfoHttp*>(this->getTransformInfoInterface())));;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->getTransformInfoInterface()->getStoreName());
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    

    std::string nameStart = JavaString::valueOf(stringBuffer);;
    

                        if(JavaString::indexOf(this->getTransformInfoInterface()->getName(), GeneratorTransformInfoData::NAME) > 0)
                        
                                    {
                                    rootTransformInfoInterface->setName(JavaString::valueOf(nameStart) +JavaString::valueOf(GeneratorTransformInfoData::NAME));
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(this->getTransformInfoInterface()->getName(), RootTransformInfoData::NAME) > 0)
                        
                                    {
                                    rootTransformInfoInterface->setName(JavaString::valueOf(nameStart) +JavaString::valueOf(RootTransformInfoData::NAME));
    

                                    }
                                
                        else {
                            


                            throw Exception("Override Currently Not Supported");
                    

                        }
                            

    Document* overrideObjectConfigDocument = this->getTransformInfoInterface()->getObjectConfigInterface()->toXmlDoc();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Retrieved OverrideObjectConfig: ") +JavaString::valueOf(XmlDocumentHelper::toString(overrideObjectConfigDocument)), this, "view()");
    

                                    }
                                

    TransformFactory* transformFactory = TransformFactory::getInstance();;
    

    TransformInterface* rootComponentInterface = transformFactory->getInstance(this->abeClientInformation, rootTransformInfoInterface->getName(), rootTransformInfoInterface);;
    

    TransformTemplateInterface* transformTemplateInterface = dynamic_cast<TransformTemplateInterface*>(rootComponentInterface);;
    

    TransformInterface* componentInterface = transformFactory->getInstance(this->abeClientInformation, transformTemplateInterface->getName(), rootComponentInterface->getTransformInfoInterface());;
    

    TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface = TransformInfoObjectConfigAndManipulatorFactory::getInstance()->getInstance(this->abeClientInformation, componentInterface->getTransformInfoInterface(), overrideObjectConfigDocument);;
    
componentInterface->getTransformInfoInterface()->setObjectConfigInterface(transformInfoObjectConfigInterface);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Set OverrideObjectConfig: ") +JavaString::valueOf(JavaString::valueOf(componentInterface->getTransformInfoInterface()->getObjectConfigInterface())), this, "view()");
    

                                    }
                                



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




        #endif //VIEWS_BUSINESS_CONTEXT_OVERRIDEOBJECTCONFIGROOTCONTEXTVIEW_CPP
