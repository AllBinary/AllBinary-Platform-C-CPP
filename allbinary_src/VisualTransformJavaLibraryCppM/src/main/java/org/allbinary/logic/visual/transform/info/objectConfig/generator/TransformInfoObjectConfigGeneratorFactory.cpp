
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigGeneratorFactoryInterface.h"
#include "StoreFileGenerator.h"
#include "BasicGenerator.h"
#include "TransformInfoObjectConfigGenerator.h"

class TransformInfoObjectConfigGeneratorFactory
            : public Object
        : public TransformInfoObjectConfigGeneratorFactoryInterface {
        

    private: static const instance: TransformInfoObjectConfigGeneratorFactory = new TransformInfoObjectConfigGeneratorFactory();

    public static TransformInfoObjectConfigGeneratorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfigGeneratorFactory.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public TransformInfoObjectConfigGenerator getInstance(TransformInfoInterface transformInfoInterface){

    type: string = transformInfoInterface!.getObjectConfigInterface()!.getOutputTypeName() as string;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.putF("Generating Instance for type: " +type, this, commonStrings!.GET_INSTANCE);
    

                                    }
                                

                        if(type == 
                                    null
                                 || type.compareTo(InputOutputTypeData.getInstance()!.RESPONSE) == 0 || transformInfoInterface!.isChild())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicGenerator();
    

                                    }
                                
                             else 
                        if(type.compareTo(InputOutputTypeData.getInstance()!.FILE) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new StoreFileGenerator(transformInfoInterface);
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Such TransformInfoObjectConfigGenerator Type");
                    

                        }
                            
}


};

            

