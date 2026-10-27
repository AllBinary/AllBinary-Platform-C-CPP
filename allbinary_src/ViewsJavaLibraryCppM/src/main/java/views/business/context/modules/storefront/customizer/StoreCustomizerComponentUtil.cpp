
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "views/business/context/modules/storefront/customizer/CustomizerUtil.h"

class StoreCustomizerComponentUtil
            : public Object
         {

    private: static StoreCustomizerComponentUtil* instance() { static std::unique_ptr<StoreCustomizerComponentUtil> value(new StoreCustomizerComponentUtil()); return value.get(); }

    public: static StoreCustomizerComponentUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreCustomizerComponentUtil::instance();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

private: StoreCustomizerComponentUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::string generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Generating Modified Views For: " +transformInfoInterface->getName(), this, "generateModifiedViews()");
    

                                    }
                                

    CustomizerUtil* customizerUtil = CustomizerUtil::getInstance();;
    

    BasicArrayList* allCustomizedViews = customizerUtil->getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface);;
    

    int32_t size = allCustomizedViews->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* nextTransformInfoInterface = dynamic_cast<TransformInfo*>(allCustomizedViews->get(index));;
    

    BasicArrayList* allViewsToBeModified = customizerUtil->getTransformInfoObjectConfigComponentNodesToCustomize(transformInfoInterface, nextTransformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("View or component that was modified by a Customizer: " +nextTransformInfoInterface->getName(), this, "generateModifiedViews()");
    

                                    }
                                
this->generate(abeClientInformation, transformInfoInterface, allViewsToBeModified);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    private: void generate(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface, BasicArrayList* allViewsToBeModifiedVector){

    CustomizerUtil* customizerUtil = CustomizerUtil::getInstance();;
    

    int32_t size = allViewsToBeModifiedVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo* nextTransformInfoInterface = dynamic_cast<TransformInfo*>(allViewsToBeModifiedVector->get(index));;
    

    TransformInfoInterface* specifiedTransformInfoInterface = customizerUtil->getTransformInfoInterfaceToCustomize(transformInfoInterface, nextTransformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Retrieved: " +specifiedTransformInfoInterface->getName(), this, "generateModifiedViews()");
    

                                    }
                                
TransformGeneratorUtil::getInstance()->generate(abeClientInformation, nextTransformInfoInterface, specifiedTransformInfoInterface);
    
}

}


};

            

