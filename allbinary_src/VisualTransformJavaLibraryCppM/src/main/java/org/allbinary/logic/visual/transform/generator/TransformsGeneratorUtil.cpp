
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
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

    private: static TransformsGeneratorUtil instance() { return TransformsGeneratorUtil(); }

    public: static TransformsGeneratorUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformsGeneratorUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformsGeneratorUtil(){
}


                //@Throws(Exception.constructor)
            
    public: std::string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoInterface, std::string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Started Group: " +group, this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                

    TransformInfoObjectConfigInterface transformInfoObjectConfigInterface = transformInfoInterface.getObjectConfigInterface();;
    

    std::string result = this->generateComponentsFromObjectConfig(abeClientInformation, transformInfoObjectConfigInterface, transformInfoInterface, group);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("End Group: " +group, this, "generateComponentsFromObjectConfig(2)");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string generateComponentsFromObjectConfig(Object abeClientInformation, Object transformInfoObjectConfigInterface, Object transformInfoInterface, std::string group){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Started Group: " +group, this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    BasicArrayList transformInfoObjectConfigComponentVector = transformInfoObjectConfigInterface.getTransformsGroup(group);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Processing ");
    
stringBuffer.appendint(transformInfoObjectConfigComponentVector.size());
    
stringBuffer.append(" Components Group: ");
    
stringBuffer.append(group);
    
this->logUtil.putF(stringBuffer.toString(), this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

                        if(transformInfoObjectConfigComponentVector.size() < 1)
                        
                                    {
                                    


                            throw Exception("No Pages Generated For Template.");
                    

                                    }
                                

    int32_t size = transformInfoObjectConfigComponentVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    TransformInfoDomNode transformInfoObjectConfigComponent = transformInfoObjectConfigComponentVector.get(index) as TransformInfoDomNode;;
    
TransformGeneratorUtil::getInstance().generate(abeClientInformation, transformInfoObjectConfigComponent, transformInfoInterface);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Done Group: " +group, this, "generateComponentsFromObjectConfig()");
    

                                    }
                                

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("<!-- Generated all template views successfully for View: ");
    
stringBuffer.append(transformInfoInterface.getName());
    
stringBuffer.append("-->");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

