
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOVALIDATION_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOVALIDATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoValidation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Boolean.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/HttpRequestUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/apache/commons/fileupload/FileItem.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoData.h"
#include "org/allbinary/logic/visual/transform/template/customizer/widgets/logo/LogoImageFileUtil.h"


LogoValidation::LogoValidation() : logUtil(LogUtil::getInstance()){
this->isFile= false;
    
this->logoAbPath= 
                                        nullptr
                                    ;
    
this->logoFile= 
                                        nullptr
                                    ;
    
}


LogoValidation::LogoValidation(Node* node) : logUtil(LogUtil::getInstance()){
this->isFile= false;
    
this->logoAbPath= new AbPath(DomSearchHelper::getNode(LogoData::getInstance()->IMAGEPATH, node->getChildNodes())->getNodeValue(), StringUtil::getInstance()->EMPTY_STRING);
    
this->logoFile= DomSearchHelper::getNode(LogoData::getInstance()->IMAGEFILENAME, node->getChildNodes())->getNodeValue();
    
}


LogoValidation::LogoValidation(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()){
this->isFile= true;
    
this->getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    auto LogoValidation::getFormData(HashMap<Object*, Object*>* hashMap) -> void{
this->logoFileItem= dynamic_cast<FileItem*>(hashMap->get(LogoData::getInstance()->IMAGE));
    
this->logoAbPath= new AbPath(JavaBoxes::unbox<std::string>(hashMap->get(LogoData::getInstance()->IMAGEPATH)), StringUtil::getInstance()->EMPTY_STRING);
    

                        if(this->logoFileItem != 
                                    nullptr
                                )
                        
                                    {
                                    this->logoFile= HttpRequestUtil::getInstance()->generateFileName(this->logoFileItem->getName());
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("HashMap: ");
    
stringBuffer->append(JavaString::valueOf(hashMap));
    
stringBuffer->append("\nLogoFileName: ");
    
stringBuffer->append(this->logoFile);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "getFormData()");
    

                                    }
                                
}


    auto LogoValidation::isValid() -> bool{

        try {
            
    bool valid = Boolean::TRUE;;
    

    FileData* fileData = FileData::getInstance();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("LogoValidation", this, this->commonStrings->IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(JavaString::valueOf(this->logoAbPath), 0, 512))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("logoPath is invalid: ") +JavaString::valueOf(JavaString::valueOf(this->logoAbPath)), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(!StringValidationUtil::getInstance()->isValidRequired(this->logoFile, fileData->MINLEN, fileData->MAXLEN))
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("logoFile is invalid: ") +JavaString::valueOf(this->logoFile), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->isFile)
                        
                                    {
                                    
                        if(this->logoFileItem == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->logoFileItem->getSize() > fileData->MAXIMAGEFILESIZE || this->logoFileItem->getSize() < fileData->MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("Image File Is Not The Right Size. ") +JavaString::valueOf(fileData->MINIMAGEFILESIZE)) +JavaString::valueOf("< > ")) +JavaString::valueOf(fileData->MAXIMAGEFILESIZE), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    

                                    }
                                

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Logo Validation: ") +JavaString::valueOf(valid), this, this->commonStrings->IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valid;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to validate form", this, this->commonStrings->IS_VALID, &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Boolean::FALSE;
    
}

}


    auto LogoValidation::validationInfo() -> std::string{

        try {
            
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Logo is not valid.");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->SQLTAGSERROR))
                        
                                    {
                                    this->logUtil->put("Failed to generate validation error info", this, "validationInfo()", &e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return "Error Validating Form";
    
}

}


    auto LogoValidation::toValidationInfoDoc() -> Document*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto LogoValidation::toValidationInfoNode(Document* document) -> Node*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return nullptr;
    
}


    auto LogoValidation::toHashMap() -> HashMap<Object*, Object*>*{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(LogoData::getInstance()->IMAGE, stringUtil->EMPTY_STRING);
    

                        if(true)
                        
                                    {
                                    hashMap->put(LogoData::getInstance()->IMAGEPATH, JavaString::valueOf(this->logoAbPath));
    
hashMap->put(LogoData::getInstance()->IMAGEFILENAME, this->logoFile);
    

                                    }
                                
                        else {
                            hashMap->put(LogoData::getInstance()->IMAGEPATH, 
                            nullptr);
    
hashMap->put(LogoData::getInstance()->IMAGEFILENAME, this->logoFile);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto LogoValidation::toXmlNode(Document* document) -> Node*{

    HashMap<Object*, Object*>* hashMap = this->toHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ModDomHelper::createNameValueNodes(document, LogoData::getInstance()->NAME, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    auto LogoValidation::processLogoFile() -> void{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Processing logoFile: ");
    
stringBuffer->append(JavaString::valueOf(this->logoAbPath));
    
stringBuffer->append(this->logoFile);
    
this->logUtil->putF(JavaString::valueOf(stringBuffer), this, "processLogoFile()");
    

                                    }
                                
(new LogoImageFileUtil(this->logoAbPath, this->logoFile))->saveFiles(this->logoFileItem);
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_TEMPLATE_CUSTOMIZER_WIDGETS_LOGO_LOGOVALIDATION_CPP
