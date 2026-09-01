
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
        



            #include "../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/visual/transform/TransformFactory.h>

      
#include <org/allbinary/logic/visual/transform/TransformInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfo.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/template/TransformTemplateInterface.h>

      
#include <views/business/context/modules/storefront/HttpStoreComponentView.h>

      
#include <views/business/context/modules/storefront/customizer/template/objectConfig/NoTemplateTransformInfoObjectConfig.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RootContextView: public HttpStoreComponentView, public TransformTemplateInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: RootContextView(TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +transformInfoInterface.getName(), this, "RootContextView()");
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: std::string view(){

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("View Name: " +this->getTransformInfoInterface().getName(), this, "view()");
    

                                    }
                                

    std::string viewName = this->getName();;
    

    TransformInterface componentInterface = TransformFactory::getInstance().getInstance(this->abeClientInformation, viewName, this->getTransformInfoInterface());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return componentInterface.view();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().TAGHELPERERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "view()", e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    public: std::string getName(){

        try {
            
    NoTemplateTransformInfoObjectConfig objectConfig = NoTemplateTransformInfoObjectConfig(this->getTransformInfoInterface(), this->getTransformInfoInterface().getObjectConfigInterface().toXmlDoc());;
    

    Vector componentsVector = objectConfig.getTransforms();;
    

                        if(componentsVector.length == 0)
                        
                                    {
                                    


                            throw Exception("Template View Not Set - No Components");
                    

                                    }
                                

                        if(componentsVector.length > 1)
                        
                                    {
                                    


                            throw Exception("To Many Root Template Views: " +componentsVector.length);
                    

                                    }
                                

    TransformInfo transformInfoInterface = componentsVector.get(0) as TransformInfo;;
    

    std::string viewName = transformInfoInterface.getName();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Root Template With View Name: " +viewName, this, "getName()");
    

                                    }
                                

                        if(StringValidationUtil::getInstance().isEmpty(viewName))
                        
                                    {
                                    


                            throw Exception("Template View Not Set - No View Name");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return viewName;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put(this->commonStrings.EXCEPTION, this, "getName()", e);
    

                                    }
                                



                            throw e;
                    
}

}


};

            

