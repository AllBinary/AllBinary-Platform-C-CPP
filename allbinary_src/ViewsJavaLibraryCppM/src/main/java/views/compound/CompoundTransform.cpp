
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
        
class CompoundTransform: public AbTransformer {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbeClientInformationInterface abeClientInformation = ServiceClientInformationInterfaceFactory::getInstance();

public: CompoundTransform(TransformInfoInterface transformInfoInterface) : AbTransformer(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setURIResolver(StoreUriResolver(this->getTransformInfoInterface(), this->getURIResolver()));
    

    CompoundContextTransformInfoObjectConfig objectConfig = CompoundContextTransformInfoObjectConfig(this->abeClientInformation, this->getTransformInfoInterface(), this->getTransformInfoInterface().getObjectConfigInterface().toXmlDoc());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("\nObjectConfig: \n" +objectConfig.toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

    InputStream templateInputStream = objectConfig.createInputStream();;
    
this->setInputStream(templateInputStream);
    
}


};

            

