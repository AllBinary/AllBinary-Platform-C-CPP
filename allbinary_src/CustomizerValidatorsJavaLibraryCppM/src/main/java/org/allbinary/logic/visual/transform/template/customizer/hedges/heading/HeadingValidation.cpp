
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoValidation.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleData.h>

      
#include <org/allbinary/logic/visual/transform/template/customizer/widgets/title/TitleValidation.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HeadingData.h"

class HeadingValidation: public Validation, public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: TitleValidation title;

    private: LogoValidation logo;

public: HeadingValidation(){
this->title= TitleValidation();
    
this->logo= LogoValidation();
    
}


public: HeadingValidation(Document document){

    NodeList headingNodeList = document.getElementsByTagName(HeadingData::NAME);;
    

    Node titleNode = DomSearchHelper::getNode(TitleData::getInstance().NAME, headingNodeList.item(0).getChildNodes());;
    

    Node logoNode = DomSearchHelper::getNode(LogoData::getInstance().NAME, headingNodeList.item(0).getChildNodes());;
    
this->title= TitleValidation(titleNode);
    
this->logo= LogoValidation(logoNode);
    
}


public: HeadingValidation(HashMap<Object*, Object*> hashMap){
this->getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    public: void getFormData(HashMap<Object*, Object*> hashMap){
this->title= TitleValidation(hashMap);
    
this->logo= LogoValidation(hashMap);
    
}


    public: Boolean isValid(){

        try {
            
    Boolean valid = Boolean::TRUE;;
    

    Boolean titleValid = Boolean::TRUE;;
    

    Boolean logoValid = Boolean::TRUE;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.IS_VALID);
    

                                    }
                                

                        if(!this->title.isValid().valueOf())
                        
                                    {
                                    titleValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->logo.isValid().valueOf())
                        
                                    {
                                    logoValid= Boolean::FALSE;
    

                                    }
                                
                        else {
                            this->logo.processLogoFile();
    

                        }
                            

                        if(!titleValid.valueOf() && !logoValid.valueOf())
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("HeadingValidation: " +valid, this, this->commonStrings.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to validate form", this, this->commonStrings.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    
}

}


    public: std::string validationInfo(){

        try {
            
    Boolean valid = Boolean::TRUE;;
    

    Boolean titleValid = Boolean::TRUE;;
    

    Boolean logoValid = Boolean::TRUE;;
    

    StringMaker stringBuffer = StringMaker();;
    

                        if(!this->title.isValid().valueOf())
                        
                                    {
                                    titleValid= Boolean::FALSE;
    

                                    }
                                

                        if(!this->logo.isValid().valueOf())
                        
                                    {
                                    logoValid= Boolean::FALSE;
    

                                    }
                                

                        if(!titleValid.valueOf() && !logoValid.valueOf())
                        
                                    {
                                    valid= Boolean::FALSE;
    

                                    }
                                

                        if(!valid.valueOf())
                        
                                    {
                                    stringBuffer.append("Include a title and/or logo for the header.");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().SQLTAGSERROR))
                        
                                    {
                                    this->logUtil.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public: Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(HeadingData::NAME);;
    
node.appendChild(this->logo.toXmlNode(document));
    
node.appendChild(this->title.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

