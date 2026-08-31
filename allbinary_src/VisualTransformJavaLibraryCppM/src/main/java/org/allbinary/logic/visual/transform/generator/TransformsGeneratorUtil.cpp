
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

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoDomNode.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformGeneratorUtil.h"

class TransformsGeneratorUtil
            : public Object
         {
        

    private: static const instance: TransformsGeneratorUtil = new TransformsGeneratorUtil();

    public static TransformsGeneratorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformsGeneratorUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoInterface, string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Started Group: " +group, this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                

    transformInfoObjectConfigInterface: TransformInfoObjectConfigInterface = transformInfoInterface!.getObjectConfigInterface()!;;
    

    result: string = this.generateComponentsFromObjectConfig(abeClientInformation, transformInfoObjectConfigInterface, transformInfoInterface, group)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("End Group: " +group, this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


                //@Throws(Exception.constructor)
            
    public string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoObjectConfigInterface, Object transformInfoInterface, string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Started Group: " +group, this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    transformInfoObjectConfigComponentVector: Vector = transformInfoObjectConfigInterface!.getTransformsGroup(group)!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Processing ");
    
stringBuffer!.appendint(transformInfoObjectConfigComponentVector!.length);
    
stringBuffer!.append(" Components Group: ");
    
stringBuffer!.append(group);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

                        if(transformInfoObjectConfigComponentVector!.length < 1)
                        
                                    {
                                    


                            throw new Exception("No Pages Generated For Template.");
                    

                                    }
                                

    size: int32_t = transformInfoObjectConfigComponentVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    transformInfoObjectConfigComponent: TransformInfoDomNode = transformInfoObjectConfigComponentVector!.get(index) as TransformInfoDomNode;;
    
TransformGeneratorUtil.getInstance()!.generate(abeClientInformation, transformInfoObjectConfigComponent, transformInfoInterface);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Done Group: " +group, this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("<!-- Generated all template views successfully for View: ");
    
stringBuffer!.append(transformInfoInterface!.getName());
    
stringBuffer!.append("-->");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

