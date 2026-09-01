
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
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/generator/TransformGeneratorUtil.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomizerUtil.h"

class StoreCustomizerComponentUtil
            : public Object
         {

    private: static StoreCustomizerComponentUtil instance() { return StoreCustomizerComponentUtil(); }

    public: static StoreCustomizerComponentUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreCustomizerComponentUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: StoreCustomizerComponentUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::string generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Generating Modified Views For: " +transformInfoInterface.getName(), this, "generateModifiedViews()");
    

                                    }
                                

    CustomizerUtil customizerUtil = CustomizerUtil::getInstance();;
    

    Vector allCustomizedViews = customizerUtil.getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface);;
    

    int32_t size = allCustomizedViews.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo nextTransformInfoInterface = allCustomizedViews.get(index) as TransformInfo;;
    

    Vector allViewsToBeModified = customizerUtil.getTransformInfoObjectConfigComponentNodesToCustomize(transformInfoInterface, nextTransformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View or component that was modified by a Customizer: " +nextTransformInfoInterface.getName(), this, "generateModifiedViews()");
    

                                    }
                                
this->generate(abeClientInformation, transformInfoInterface, allViewsToBeModified);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    private: void generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Vector allViewsToBeModifiedVector){

    CustomizerUtil customizerUtil = CustomizerUtil::getInstance();;
    

    int32_t size = allViewsToBeModifiedVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfo nextTransformInfoInterface = allViewsToBeModifiedVector.get(index) as TransformInfo;;
    

    TransformInfoInterface specifiedTransformInfoInterface = customizerUtil.getTransformInfoInterfaceToCustomize(transformInfoInterface, nextTransformInfoInterface);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Retrieved: " +specifiedTransformInfoInterface.getName(), this, "generateModifiedViews()");
    

                                    }
                                
TransformGeneratorUtil::getInstance().generate(abeClientInformation, nextTransformInfoInterface, specifiedTransformInfoInterface);
    
}

}


};

            

