
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/TransformFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntity.h>

      
#include <org/allbinary/data/tables/transform/info/TransformInfoEntityBuilder.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpFactory.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/TransformInterface.h"

auto TransformFactory::instance_owner() -> TransformFactory* { static std::unique_ptr<TransformFactory> value(new TransformFactory()); return value.get(); }
TransformFactory* TransformFactory::instance = TransformFactory::instance_owner();

    auto TransformFactory::getInstance() -> TransformFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformFactory::instance;
    
}


TransformFactory::TransformFactory() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformFactory::getInstance(AbeClientInformationInterface* abeClientInformation, std::string viewName, TransformInfoInterface* ownerTransformInfoInterface) -> TransformInterface*{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating Transform: ") +JavaString::valueOf(viewName), this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    TransformInfoHttpInterface* ownerTransformInfoHttpInterface = dynamic_cast<TransformInfoHttpInterface*>(ownerTransformInfoInterface);;
    

    TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoInterface* transformInfoInterface = transformInfoEntity->get(viewName, ownerTransformInfoHttpInterface->getPropertiesHashMap(), ownerTransformInfoHttpInterface->getPageContext());;
    

                        if(transformInfoInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception(JavaString::valueOf("No Such View In DB: ") +JavaString::valueOf(viewName));
                    

                                    }
                                
transformInfoInterface->setChild();
    

    Object* anyType = JavaBoxes::toObject(TransformInfoObjectFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface));;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created Transform: ") +JavaString::valueOf(viewName), this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, this->commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto TransformFactory::getInstance(AbeClientInformationInterface* abeClientInformation, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) -> TransformInterface*{

        try {
            
    TransformInfoData* transformInfoData = TransformInfoData::getInstance();;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating Transform: ") +JavaString::valueOf(propertiesHashMap->get(transformInfoData->NAME)), this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                

    TransformInfoEntity* transformInfoEntity = TransformInfoEntityBuilder::getInstance();;
    

    TransformInfoInterface* transformInfoInterface = transformInfoEntity->get(JavaBoxes::unbox<std::string>(propertiesHashMap->get(transformInfoData->NAME)), propertiesHashMap, pageContext);;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    transformInfoInterface->override(propertiesHashMap);
    

                                    }
                                
                        else {
                            transformInfoInterface= dynamic_cast<TransformInfoInterface*>(TransformInfoHttpFactory::getInstance(propertiesHashMap, pageContext));
    

                        }
                            

    Object* anyType = JavaBoxes::toObject(TransformInfoObjectFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface));;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created Transform: ") +JavaString::valueOf(propertiesHashMap->get(transformInfoData->NAME)), this, this->commonStrings->GET_INSTANCE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failed To Get Instance: ");
    
stringBuffer->append(JavaBoxes::unbox<std::string>(propertiesHashMap->get(TransformInfoData::getInstance()->NAME)));
    
stringBuffer->append("->TransformFactory");
    
this->logUtil->put(stringBuffer->toString(), this, this->commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto TransformFactory::getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) -> TransformInterface*{

        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Creating Transform: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "getInstance(TransformInfoInterface)");
    

                                    }
                                

    Object* anyType = JavaBoxes::toObject(TransformInfoObjectFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface));;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Created Transform: ") +JavaString::valueOf(transformInfoInterface->getName()), this, "getInstance(TransformInfoInterface)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<TransformInterface*>(anyType);
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(commonStrings->EXCEPTION, this, "getInstance(TransformInfoInterface)", &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TRANSFORMFACTORY_CPP
