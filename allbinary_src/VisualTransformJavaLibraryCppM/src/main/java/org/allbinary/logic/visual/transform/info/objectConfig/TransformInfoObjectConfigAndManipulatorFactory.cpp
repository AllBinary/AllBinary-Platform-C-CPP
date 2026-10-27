
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigAndManipulatorFactoryBase.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigData.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfig.h"
#include "org/allbinary/logic/visual/transform/info/objectConfig/GenericStoreTransformInfoObjectConfig.h"

auto TransformInfoObjectConfigAndManipulatorFactory::instance_owner() -> TransformInfoObjectConfigAndManipulatorFactory* { static std::unique_ptr<TransformInfoObjectConfigAndManipulatorFactory> value(new TransformInfoObjectConfigAndManipulatorFactory()); return value.get(); }
TransformInfoObjectConfigAndManipulatorFactory* TransformInfoObjectConfigAndManipulatorFactory::instance = TransformInfoObjectConfigAndManipulatorFactory::instance_owner();

    auto TransformInfoObjectConfigAndManipulatorFactory::getInstance() -> TransformInfoObjectConfigAndManipulatorFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfigAndManipulatorFactory::instance;
    
}


TransformInfoObjectConfigAndManipulatorFactory::TransformInfoObjectConfigAndManipulatorFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfigAndManipulatorFactory::getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, AbPath* objectConfigFileAbPath) -> TransformInfoObjectConfigInterface*{

        try {
            
    std::string data = (new CryptFileReader(TransformInfoObjectConfigData::getInstance()->UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance()->ENCRYPTED_EXTENSION))->get(objectConfigFileAbPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(abeClientInformation, transformInfoInterface, DomDocumentHelper::create(data));;
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEWERROR))
                        
                                    {
                                    this->logUtil->put("Could Not Load Object Config", getInstance(), this->commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfigAndManipulatorFactory::getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) -> TransformInfoObjectConfigInterface*{

        try {
            
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(transformInfoInterface != 
                                    nullptr
                                 && !stringValidationUtil->isEmpty(transformInfoInterface->getStoreName()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInfoObjectConfigInterface*>(new GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInfoObjectConfigInterface*>(new TransformInfoObjectConfig(transformInfoInterface));
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= JavaString::valueOf(error) +JavaString::valueOf(transformInfoInterface->getName());
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings.EXCEPTION, getInstance(), commonStrings.GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectConfigAndManipulatorFactory::getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, Document* document) -> TransformInfoObjectConfigInterface*{

        try {
            
    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(transformInfoInterface != 
                                    nullptr
                                 && !stringValidationUtil->isEmpty(transformInfoInterface->getStoreName()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInfoObjectConfigInterface*>(new GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, document));
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInfoObjectConfigInterface*>(new TransformInfoObjectConfig(transformInfoInterface, document));
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= JavaString::valueOf(error) +JavaString::valueOf(transformInfoInterface->getName());
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings.EXCEPTION, getInstance(), "getInstance(document)", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_TRANSFORMINFOOBJECTCONFIGANDMANIPULATORFACTORY_CPP
