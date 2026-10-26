
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/ValidationInterface.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CategoryPropertiesView.h"
#include "CategoryPropertiesInterface.h"

class CategoryPropertiesValidationView: public CategoryPropertiesView, public ValidationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: CategoryPropertiesValidationView(CategoryPropertiesInterface categoryPropertiesInterface) : CategoryPropertiesView(categoryPropertiesInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    public: Boolean isValid(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->categoryPropertiesInterface.isValid();;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string validationInfo(){

        try {
            
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->categoryPropertiesInterface.validationInfo());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEWERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation info error", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Data";
    
}

}


                //@Throws(Exception.constructor)
            
    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

