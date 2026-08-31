
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
        

    private: static const instance: StoreCustomizerComponentUtil = new StoreCustomizerComponentUtil();

    public static StoreCustomizerComponentUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StoreCustomizerComponentUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public string generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Generating Modified Views For: " +transformInfoInterface!.getName(), this, "generateModifiedViews()");
    

                                    }
                                

    customizerUtil: CustomizerUtil = CustomizerUtil.getInstance()!;;
    

    allCustomizedViews: Vector = customizerUtil!.getTransformInfoObjectConfigGroupComponentNodes(transformInfoInterface)!;;
    

    size: int32_t = allCustomizedViews!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextTransformInfoInterface: TransformInfo = allCustomizedViews!.get(index) as TransformInfo;;
    

    allViewsToBeModified: Vector = customizerUtil!.getTransformInfoObjectConfigComponentNodesToCustomize(transformInfoInterface, nextTransformInfoInterface)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("View or component that was modified by a Customizer: " +nextTransformInfoInterface!.getName(), this, "generateModifiedViews()");
    

                                    }
                                
this.generate(abeClientInformation, transformInfoInterface, allViewsToBeModified);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}


                //@Throws(Exception.constructor)
            
    generate(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Vector allViewsToBeModifiedVector){

    customizerUtil: CustomizerUtil = CustomizerUtil.getInstance()!;;
    

    size: int32_t = allViewsToBeModifiedVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextTransformInfoInterface: TransformInfo = allViewsToBeModifiedVector!.get(index) as TransformInfo;;
    

    specifiedTransformInfoInterface: TransformInfoInterface = customizerUtil!.getTransformInfoInterfaceToCustomize(transformInfoInterface, nextTransformInfoInterface)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Retrieved: " +specifiedTransformInfoInterface!.getName(), this, "generateModifiedViews()");
    

                                    }
                                
TransformGeneratorUtil.getInstance()!.generate(abeClientInformation, nextTransformInfoInterface, specifiedTransformInfoInterface);
    
}

}


};

            

