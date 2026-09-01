
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Class.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/system/security/licensing/LicensingException.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoInterface.h"

class TransformInfoObjectFactory
            : public Object
         {

    private: static TransformInfoObjectFactory instance() { return TransformInfoObjectFactory(); }

    public: static TransformInfoObjectFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoObjectFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORY))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.putF("Creating View: " +transformInfoInterface.getName(), this, commonStrings.GET_INSTANCE);
    

                                    }
                                

    std::vector<Object*> params = new Array(1);;
    

    std::vector<Function> classes = new Array(1);;
    
classes[0]= 
                                    //Otherwise - expression - AssignExpr - value - ClassExpr
;
    
params[0]= transformInfoInterface;
    

    TransformInterface anyType = AbeFactory::getInstance().getInstance(abeClientInformation, transformInfoInterface.getObjectFile(), classes, params) as TransformInterface;;
    

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("\nNo Such View Name: ");
    
stringBuffer.append(transformInfoInterface.getName());
    
stringBuffer.append("\nNo Such View Object: ");
    
stringBuffer.append(transformInfoInterface.getObjectFile());
    



                            throw Exception(stringBuffer.toString());
                    

                                    }
                                
                        else {
                            


                            throw Exception("No Such View Object since transformInfo is null");
                    

                        }
                            

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return anyType;
    

                //: 
} catch(e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= error +transformInfoInterface.getName();
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(error, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

                //: 
/* catch(e) 
            {

    std::string error = "Failed To Get Instance: ";;
    

                        if(transformInfoInterface != 
                                    nullptr
                                )
                        
                                    {
                                    error= error +transformInfoInterface.getName();
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(error, this, commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}
*/
}


};

            

