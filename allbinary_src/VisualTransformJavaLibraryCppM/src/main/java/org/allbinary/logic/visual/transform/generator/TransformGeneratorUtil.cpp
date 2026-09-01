
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformGeneratorUtil
            : public Object
         {

    private: static TransformGeneratorUtil instance() { return TransformGeneratorUtil(); }

    public: static TransformGeneratorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformGeneratorUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformGeneratorUtil(){
}


                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, TransformInfoInterface ownerTransformInfoInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Generating View: " +transformInfoInterface.getName(), this, "generate()");
    

                                    }
                                

    TransformInterface componentInterface = TransformFactory::getInstance().getInstance(abeClientInformation, transformInfoInterface.getName(), ownerTransformInfoInterface);;
    

    std::string result = componentInterface.view();;
    

    TransformInfoHttpInterface httpTransformInfoInterface = componentInterface.getTransformInfoInterface() as TransformInfoHttpInterface;;
    

    InputOutputTypeData inputOutputTypeData = InputOutputTypeData::getInstance();;
    

                        if(result.indexOf("<HTML>") >= 0)
                        
                                    {
                                    httpTransformInfoInterface.getPropertiesHashMap().put(inputOutputTypeData.NAME, inputOutputTypeData.DEFAULT);
    

                                    }
                                
                        else {
                            httpTransformInfoInterface.getPropertiesHashMap().put(inputOutputTypeData.NAME, inputOutputTypeData.DEFAULT_FRAGMENT);
    

                        }
                            
StoreFileGenerator(componentInterface.getTransformInfoInterface()).process(result);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate a view", this, "generate()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoDomNode transformInfoDomNode, TransformInfoInterface ownerTransformInfoInterface){
this->generate(abeClientInformation, transformInfoDomNode.getTransformInfoInterface(), ownerTransformInfoInterface);
    
}


};

            

