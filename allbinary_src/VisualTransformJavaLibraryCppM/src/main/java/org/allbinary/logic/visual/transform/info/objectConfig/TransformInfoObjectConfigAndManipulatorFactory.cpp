
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
        



            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigAndManipulatorFactoryBase.h"
#include "TransformInfoObjectConfigData.h"
#include "TransformInfoObjectConfigInterface.h"
#include "TransformInfoObjectConfig.h"
#include "GenericStoreTransformInfoObjectConfig.h"

class TransformInfoObjectConfigAndManipulatorFactory: public TransformInfoObjectConfigAndManipulatorFactoryBase {

    private: static TransformInfoObjectConfigAndManipulatorFactory instance() { return TransformInfoObjectConfigAndManipulatorFactory(); }

    public: static TransformInfoObjectConfigAndManipulatorFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfigAndManipulatorFactory::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

private: TransformInfoObjectConfigAndManipulatorFactory(){
}


                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, AbPath objectConfigFileAbPath){

        try {
            
    std::string data = CryptFileReader(TransformInfoObjectConfigData::getInstance().UNCRYPTED_EXTENSION, TransformInfoObjectConfigData::getInstance().ENCRYPTED_EXTENSION).get(objectConfigFileAbPath);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(abeClientInformation, transformInfoInterface, DomDocumentHelper::create(data));;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Could Not Load Object Config", getInstance(), this->commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){

        try {
            
    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(transformInfoInterface != 
                                    nullptr
                                 && !stringValidationUtil.isEmpty(transformInfoInterface.getStoreName()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface) as TransformInfoObjectConfigInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfig(transformInfoInterface) as TransformInfoObjectConfigInterface;
    

                        }
                            

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
                                    this->logUtil.put(commonStrings.EXCEPTION, getInstance(), commonStrings.GET_INSTANCE, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: TransformInfoObjectConfigInterface getInstance(AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface, Document document){

        try {
            
    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(transformInfoInterface != 
                                    nullptr
                                 && !stringValidationUtil.isEmpty(transformInfoInterface.getStoreName()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GenericStoreTransformInfoObjectConfig(abeClientInformation, transformInfoInterface, document) as TransformInfoObjectConfigInterface;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TransformInfoObjectConfig(transformInfoInterface, document) as TransformInfoObjectConfigInterface;
    

                        }
                            

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
                                    this->logUtil.put(commonStrings.EXCEPTION, getInstance(), "getInstance(document)", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

