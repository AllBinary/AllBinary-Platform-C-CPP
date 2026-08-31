
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogoData.h"
#include "LogoImageFileUtil.h"

class LogoValidation: public Validation: public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: logoFileItem: FileItem;

    private: logoAbPath: AbPath;

    private: logoFile: string;

    private: isFile: bool;

public constructor (){

            super();
        this.isFile= false;
    
this.logoAbPath= 
                                        nullptr
                                    ;
    
this.logoFile= 
                                        nullptr
                                    ;
    
}


public constructor (Node node){

            super();
        this.isFile= false;
    
this.logoAbPath= new AbPath(DomSearchHelper.getNode(LogoData.getInstance()!.IMAGEPATH, node.getChildNodes())!.getNodeValue(), StringUtil.getInstance()!.EMPTY_STRING);
    
this.logoFile= DomSearchHelper.getNode(LogoData.getInstance()!.IMAGEFILENAME, node.getChildNodes())!.getNodeValue();
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.isFile= true;
    
this.getFormData(hashMap);
    
}


                //@Throws(Exception.constructor)
            
    public getFormData(HashMap<any, any> hashMap){
this.logoFileItem= hashMap!.get(LogoData.getInstance()!.IMAGE) as FileItem;
    
this.logoAbPath= new AbPath(hashMap!.get(LogoData.getInstance()!.IMAGEPATH) as string, StringUtil.getInstance()!.EMPTY_STRING);
    

                        if(this.logoFileItem != 
                                    null
                                )
                        
                                    {
                                    this.logoFile= HttpRequestUtil.getInstance()!.generateFileName(this.logoFileItem!.getName());
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("HashMap: ");
    
stringBuffer!.append(hashMap!.toString());
    
stringBuffer!.append("\nLogoFileName: ");
    
stringBuffer!.append(this.logoFile);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "getFormData()");
    

                                    }
                                
}


    public Boolean isValid(){

        try {
            
    valid: Boolean = Boolean.TRUE;;
    

    fileData: FileData = FileData.getInstance()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("LogoValidation", this, this.commonStrings!.IS_VALID);
    

                                    }
                                

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.logoAbPath!.toString(), 0, 512))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("logoPath is invalid: " +this.logoAbPath!.toString(), this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                        if(!StringValidationUtil.getInstance()!.isValidRequired(this.logoFile, fileData!.MINLEN, fileData!.MAXLEN))
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("logoFile is invalid: " +this.logoFile, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                        if(this.isFile)
                        
                                    {
                                    
                        if(this.logoFileItem == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                        if(this.logoFileItem!.getSize() > fileData!.MAXIMAGEFILESIZE || this.logoFileItem!.getSize() < fileData!.MINIMAGEFILESIZE)
                        
                                    {
                                    
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Image File Is Not The Right Size. " +fileData!.MINIMAGEFILESIZE +"< > " +fileData!.MAXIMAGEFILESIZE, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    this.logUtil!.putF("Logo Validation: " +valid, this, this.commonStrings!.IS_VALID);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valid;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to validate form", this, this.commonStrings!.IS_VALID, e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}

}


    public string validationInfo(){

        try {
            
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Logo is not valid.");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLTAGSERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to generate validation error info", this, "validationInfo()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error Validating Form";
    
}

}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public HashMap<any, any> toHashMap(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(LogoData.getInstance()!.IMAGE, stringUtil!.EMPTY_STRING);
    

                        if(this.logoFile != 
                                    null
                                )
                        
                                    {
                                    hashMap!.put(LogoData.getInstance()!.IMAGEPATH, this.logoAbPath!.toString());
    
hashMap!.put(LogoData.getInstance()!.IMAGEFILENAME, this.logoFile);
    

                                    }
                                
                        else {
                            hashMap!.put(LogoData.getInstance()!.IMAGEPATH, 
                            nullptr);
    
hashMap!.put(LogoData.getInstance()!.IMAGEFILENAME, this.logoFile);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.toHashMap()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ModDomHelper.createNameValueNodes(document, LogoData.getInstance()!.NAME, hashMap);;
    
}


                //@Throws(Exception.constructor)
            
    public processLogoFile(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Processing logoFile: ");
    
stringBuffer!.append(this.logoAbPath!.toString());
    
stringBuffer!.append(this.logoFile);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "processLogoFile()");
    

                                    }
                                
new LogoImageFileUtil(this.logoAbPath, this.logoFile).saveFiles(this.logoFileItem);
    
}


};

            

