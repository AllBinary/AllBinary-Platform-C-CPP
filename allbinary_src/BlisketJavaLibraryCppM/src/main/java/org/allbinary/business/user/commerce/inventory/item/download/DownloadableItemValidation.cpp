
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/sql/AbSqlData.h>

      
#include <org/allbinary/logic/control/validate/Validation.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadableItem.h"

class DownloadableItemValidation: public Validation {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: DownloadableItem downloadableItem;

public: DownloadableItemValidation(DownloadableItem downloadableItem){
this->downloadableItem= downloadableItem;
    
}


    public: Boolean isValid(){

        try {
            
                        if(this->downloadableItem.getId() == 
                                    nullptr
                                 || this->downloadableItem.getId().length() < 1 || this->downloadableItem.getId().length() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getId() != 
                                    nullptr
                                 && !StringValidationUtil::getInstance().isNumber(this->downloadableItem.getId()))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getSystem() == 
                                    nullptr
                                 || this->downloadableItem.getSystem().length() < 1 || this->downloadableItem.getSystem().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getPlatform() == 
                                    nullptr
                                 || this->downloadableItem.getPlatform().length() < 1 || this->downloadableItem.getPlatform().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getSpecialName() == 
                                    nullptr
                                 || this->downloadableItem.getSpecialName().length() < 0 || this->downloadableItem.getSpecialName().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getVersion() == 
                                    nullptr
                                 || this->downloadableItem.getVersion().length() < 1 || this->downloadableItem.getVersion().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getChanges() == 
                                    nullptr
                                 || this->downloadableItem.getChanges().length() < 1 || this->downloadableItem.getChanges().length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        if(this->downloadableItem.getSize() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getSize().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem.getValidTime() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getValidTime().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem.getRetries() == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getRetries().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::FALSE;
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean::TRUE;
    

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
            
    StringMaker stringBuffer = StringMaker();;
    

                        if(this->downloadableItem.getId() == 
                                    nullptr
                                 || this->downloadableItem.getId().length() < 1 || this->downloadableItem.getId().length() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer.append("Id is invalid. Must be number < ");
    
stringBuffer.appendint(AbSqlData::MAXNUM);
    
stringBuffer.append(" and > 0 digits.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getId() != 
                                    nullptr
                                 && !StringValidationUtil::getInstance().isNumber(this->downloadableItem.getId()))
                        
                                    {
                                    stringBuffer.append("Id is invalid. Must be > 0.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getSystem() == 
                                    nullptr
                                 || this->downloadableItem.getSystem().length() < 1 || this->downloadableItem.getSystem().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer.append("System value is invalid. Must be < ");
    
stringBuffer.appendint(AbSqlData::MAXSTRING);
    
stringBuffer.append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getPlatform() == 
                                    nullptr
                                 || this->downloadableItem.getPlatform().length() < 1 || this->downloadableItem.getPlatform().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer.append("Platform value is invalid. Must be < ");
    
stringBuffer.appendint(AbSqlData::MAXSTRING);
    
stringBuffer.append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getSpecialName() == 
                                    nullptr
                                 || this->downloadableItem.getSpecialName().length() < 0 || this->downloadableItem.getSpecialName().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer.append("Special Name value is invalid. Must be < ");
    
stringBuffer.appendint(AbSqlData::MAXSTRING);
    
stringBuffer.append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getVersion() == 
                                    nullptr
                                 || this->downloadableItem.getVersion().length() < 1 || this->downloadableItem.getVersion().length() > AbSqlData::MAXSTRING)
                        
                                    {
                                    stringBuffer.append("Version value is invalid. Must be < ");
    
stringBuffer.appendint(AbSqlData::MAXSTRING);
    
stringBuffer.append(" and > 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getChanges() == 
                                    nullptr
                                 || this->downloadableItem.getChanges().length() < 0 || this->downloadableItem.getChanges().length() > AbSqlData::MAXBLOB)
                        
                                    {
                                    stringBuffer.append("Changes value is invalid. Must be < ");
    
stringBuffer.appendint(AbSqlData::MAXBLOB);
    
stringBuffer.append(" and >= 0 characters long.<br/>");
    

                                    }
                                

                        if(this->downloadableItem.getSize() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("File Size is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getSize().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer.append("File Size is invalid. Must be number < ");
    
stringBuffer.appendint(AbSqlData::MAXNUM);
    
stringBuffer.append(" and > 0 digits.<br/>");
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem.getValidTime() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Valid Time is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getValidTime().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer.append("Valid Time is invalid. Must be number < ");
    
stringBuffer.appendint(AbSqlData::MAXNUM);
    
stringBuffer.append(" and > 0 digits.<br/>");
    

                                    }
                                

                        }
                            

                        if(this->downloadableItem.getRetries() == 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append("Retries is null");
    

                                    }
                                
                        else {
                            
    std::string size = this->downloadableItem.getRetries().toString();;
    

                        if(size.size() < 1 || size.size() > AbSqlData::MAXNUM)
                        
                                    {
                                    stringBuffer.append("Retries is invalid. Must be number < ");
    
stringBuffer.appendint(AbSqlData::MAXNUM);
    
stringBuffer.append(" and > 0 digits.<br/>");
    

                                    }
                                

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


};

            

