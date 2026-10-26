
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OverrideObjectConfigRootContextView: public HttpStoreComponentView {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: OverrideObjectConfigRootContextView(Object transformInfoInterface) : HttpStoreComponentView(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "OverrideObjectRootContextView()");
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +this->getTransformInfoInterface().getName(), this, "view()");
    

                                    }
                                

    TransformInfoInterface rootTransformInfoInterface = TransformInfoHttp(this->getTransformInfoInterface());;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->getTransformInfoInterface().getStoreName());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    

    std::string nameStart = stringBuffer.toString();;
    

                        if(this->getTransformInfoInterface().getName().indexOf(GeneratorTransformInfoData::NAME) > 0)
                        
                                    {
                                    rootTransformInfoInterface.setName(nameStart +GeneratorTransformInfoData::NAME);
    

                                    }
                                
                             else 
                        if(this->getTransformInfoInterface().getName().indexOf(RootTransformInfoData::NAME) > 0)
                        
                                    {
                                    rootTransformInfoInterface.setName(nameStart +RootTransformInfoData::NAME);
    

                                    }
                                
                        else {
                            


                            throw Exception("Override Currently Not Supported");
                    

                        }
                            

    Document overrideObjectConfigDocument = this->getTransformInfoInterface().getObjectConfigInterface().toXmlDoc();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Retrieved OverrideObjectConfig: " +XmlDocumentHelper::toString(overrideObjectConfigDocument), this, "view()");
    

                                    }
                                

    TransformFactory transformFactory = TransformFactory::getInstance();;
    

    TransformInterface rootComponentInterface = transformFactory.getInstance(this->abeClientInformation, rootTransformInfoInterface.getName(), rootTransformInfoInterface);;
    

    TransformTemplateInterface transformTemplateInterface = rootComponentInterface;;
    

    TransformInterface componentInterface = transformFactory.getInstance(this->abeClientInformation, transformTemplateInterface.getName(), rootComponentInterface.getTransformInfoInterface());;
    

    TransformInfoObjectConfigInterface transformInfoObjectConfigInterface = TransformInfoObjectConfigAndManipulatorFactory::getInstance().getInstance(this->abeClientInformation, componentInterface.getTransformInfoInterface(), overrideObjectConfigDocument);;
    
componentInterface.getTransformInfoInterface().setObjectConfigInterface(transformInfoObjectConfigInterface);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Set OverrideObjectConfig: " +componentInterface.getTransformInfoInterface().getObjectConfigInterface().toString(), this, "view()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return componentInterface.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

