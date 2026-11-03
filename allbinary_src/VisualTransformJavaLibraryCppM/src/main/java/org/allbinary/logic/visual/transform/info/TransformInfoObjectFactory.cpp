
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOOBJECTFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOOBJECTFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoObjectFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"

auto TransformInfoObjectFactory::instance_owner() -> TransformInfoObjectFactory* { static std::unique_ptr<TransformInfoObjectFactory> value(new TransformInfoObjectFactory()); return value.get(); }
TransformInfoObjectFactory* TransformInfoObjectFactory::instance = TransformInfoObjectFactory::instance_owner();

    auto TransformInfoObjectFactory::getInstance() -> TransformInfoObjectFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return TransformInfoObjectFactory::instance;
    
}


TransformInfoObjectFactory::TransformInfoObjectFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoObjectFactory::getInstance(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) -> TransformInterface*{

        try {
            
                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(JavaString::valueOf("Creating View: ") +JavaString::valueOf(transformInfoInterface->getName()), this, commonStrings->GET_INSTANCE);
    

                                    }
                                

    std::vector<Object*> params = std::vector<Object*>(1);;
    

    std::vector<Class*> classes = std::vector<Class*>(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= transformInfoInterface;
    

    TransformInterface* anyType = dynamic_cast<TransformInterface*>(AbeFactory::getInstance()->getInstance(abeClientInformation, transformInfoInterface->getObjectFile(), classes, params));;
    

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("\nNo Such View Name: ");
    
stringBuffer->append(transformInfoInterface->getName());
    
stringBuffer->append("\nNo Such View Object: ");
    
stringBuffer->append(transformInfoInterface->getObjectFile());
    



                            throw Exception(stringBuffer->toString());
                    

                                    }
                                
                        else {
                            


                            throw Exception("No Such View Object since transformInfo is null");
                    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return anyType;
    

                //: 
} catch(LicensingException& e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= JavaString::valueOf(error) +JavaString::valueOf(transformInfoInterface->getName());
    

                                    }
                                

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(error, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
 catch(Exception& e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= JavaString::valueOf(error) +JavaString::valueOf(transformInfoInterface->getName());
    

                                    }
                                

                        if(LogConfigTypes::LOGGING::contains(LogConfigTypeFactory::getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(error, this, commonStrings->GET_INSTANCE, &e);
    

                                    }
                                



                            throw e;
                    
}

}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOOBJECTFACTORY_CPP
