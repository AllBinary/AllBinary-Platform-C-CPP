
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
        



        #ifndef VIEWS_COMPOUND_COMPOUNDTRANSFORM_CPP
        #define VIEWS_COMPOUND_COMPOUNDTRANSFORM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "views/compound/CompoundTransform.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>

      
#include <org/allbinary/data/tree/dom/StoreUriResolver.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h>

      
#include <org/allbinary/logic/visual/transform/AbTransformer.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <views/compound/objectConfig/CompoundContextTransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

CompoundTransform::CompoundTransform(TransformInfoInterface* transformInfoInterface) : AbTransformer(transformInfoInterface), logUtil(LogUtil::getInstance()), abeClientInformation(ServiceClientInformationInterfaceFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setURIResolver(dynamic_cast<URIResolver*>(new StoreUriResolver(this->getTransformInfoInterface(), dynamic_cast<BasicUriResolver*>(this->getURIResolver()))));
    

    CompoundContextTransformInfoObjectConfig* objectConfig = new CompoundContextTransformInfoObjectConfig(this->abeClientInformation, this->getTransformInfoInterface(), this->getTransformInfoInterface()->getObjectConfigInterface()->toXmlDoc());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("\nObjectConfig: \n") +JavaString::valueOf(objectConfig->toString()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    InputStream* templateInputStream = objectConfig->createInputStream();;
    
this->setInputStream(templateInputStream);
    
}




        #endif //VIEWS_COMPOUND_COMPOUNDTRANSFORM_CPP
