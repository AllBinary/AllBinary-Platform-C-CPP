
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/InputStream.h>

      
#include <javax/xml/transform/URIResolver.h>

      
#include <org/allbinary/data/tree/dom/BasicUriResolver.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/control/crypt/jcehelper/AbCrypt.h>

      
#include <org/allbinary/logic/control/crypt/jcehelper/KeySpecFactory.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/AbKeys.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/template/TransformInfoTemplateData.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbTransformer.h"

class BasicTransformer: public AbTransformer {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const streamUtil: StreamUtil = StreamUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

public constructor (AbeClientInformationInterface abeClientInformation, TransformInfoInterface transformInfoInterface){
            super(transformInfoInterface);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.abeClientInformation= abeClientInformation;
    
this.setTemplateAsInputStream();
    
}


                //@Throws(Exception.constructor)
            
    setEncryptedTemplateFileAsInputStream(AbFile file){

    outputStream: ByteArrayOutputStream = 
                null
            ;;
    

    inputStream: AbFileInputStream = 
                null
            ;;
    

        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new AbFileInputStream(file);
    
outputStream= this.streamUtil!.get(inputStream, outputStream, new Array(16384)) as ByteArrayOutputStream;
    

    abCrypt: AbCrypt = new AbCrypt(KeySpecFactory.DESEDE, AbKeys.getInstance()!.getKey(this.abeClientInformation, file.getAbsolutePath()));;
    

    decrypted: std::vector<int8_t> = abCrypt!.decrypt(outputStream!.toByteArray())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF("Decrypted Template: \n" +
                                    //Otherwise - right - ObjectCreationExpr
, this, "setEncryptedTemplateFileAsInputStream(file)");
    

                                    }
                                
this.setInputStream(new ByteArrayInputStream(decrypted) as InputStream);
    
this.setURIResolver(new BasicUriResolver(TransformInfoTemplateData.getInstance()!.ENCRYPTED_EXTENSION) as URIResolver);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Failed to get Encrypted File: ");
    
stringBuffer!.append(file.getPath());
    
stringBuffer!.append(" \nName:");
    
stringBuffer!.append(file.getName());
    
this.logUtil!.put(stringBuffer!.toString(), this, "setEncryptedTemplateFileAsInputStream()", e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this.streamUtil!.close(outputStream);
    
this.streamUtil!.close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    setEncryptedTemplateAsInputStream(){

    outputStream: ByteArrayOutputStream = 
                null
            ;;
    

    inputStream: ByteArrayInputStream = 
                null
            ;;
    

        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new ByteArrayInputStream(this.getTransformInfoInterface()!.getTemplate()!.getBytes());
    
outputStream= this.streamUtil!.get(inputStream, outputStream, new Array(16384)) as ByteArrayOutputStream;
    

    abCrypt: AbCrypt = new AbCrypt(KeySpecFactory.DESEDE, AbKeys.getInstance()!.getKey(this.abeClientInformation, this.getTransformInfoInterface()!.getName()));;
    

    decrypted: std::vector<int8_t> = abCrypt!.decrypt(outputStream!.toByteArray())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF("Decrypted Template: \n" +decrypted.toString(), this, "setEncryptedTemplateAsInputStream()");
    

                                    }
                                
this.setInputStream(new ByteArrayInputStream(decrypted) as InputStream);
    
this.setURIResolver(new BasicUriResolver(TransformInfoTemplateData.getInstance()!.ENCRYPTED_EXTENSION) as URIResolver);
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORYERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to set with template: " +this.getTransformInfoInterface()!.getTemplateFilePath(), this, "setEncryptedTemplateFileAsInputStream()", e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this.streamUtil!.close(outputStream);
    
this.streamUtil!.close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    setTemplateAsInputStream(){

    inputStream: AbFileInputStream = 
                null
            ;;
    

    outputStream: ByteArrayOutputStream = 
                null
            ;;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF(this.getTransformInfoInterface()!.log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

    transformInfoTemplateData: TransformInfoTemplateData = TransformInfoTemplateData.getInstance()!;;
    

    pathUtil: PathUtil = PathUtil.getInstance()!;;
    

                        if(this.getTransformInfoInterface()!.getTemplateFilePath() != 
                                    null
                                )
                        
                                    {
                                    
    extension: string = pathUtil!.getExtensionWithAbPath(this.getTransformInfoInterface()!.getTemplateFilePath())!;;
    

    filePath: string = pathUtil!.getWithoutExtensionWithAbPath(this.getTransformInfoInterface()!.getTemplateFilePath())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF(this.getTransformInfoInterface()!.log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(extension.compareTo(transformInfoTemplateData!.UNCRYPTED_EXTENSION) == 0)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(filePath);
    
stringBuffer!.append(AbPathData.getInstance()!.EXTENSION_SEP);
    
stringBuffer!.append(transformInfoTemplateData!.ENCRYPTED_EXTENSION);
    

    encFile: AbFile = AbFile.createAbFile(stringBuffer!.toString())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF(this.getTransformInfoInterface()!.log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    stringBuffer= new StringMaker();
    
stringBuffer!.append("Encrypted Template File isFile=");
    
stringBuffer!.appendboolean(encFile!.isFile());
    
stringBuffer!.append("\nEncTemplateFilePath: ");
    
stringBuffer!.append(encFile!.getPath());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(encFile!.isFile())
                        
                                    {
                                    this.setEncryptedTemplateFileAsInputStream(encFile);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
    file: AbFile = AbFile.createAbFileFromAbPath(this.getTransformInfoInterface()!.getTemplateFilePath())!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF(this.getTransformInfoInterface()!.log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF("Template File isFile=" +file.isFile(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(file.isFile())
                        
                                    {
                                    inputStream= new AbFileInputStream(file);
    
outputStream= new ByteArrayOutputStream();
    
outputStream= this.streamUtil!.get(inputStream, outputStream, new Array(16384)) as ByteArrayOutputStream;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORY))
                        
                                    {
                                    this.logUtil!.putF("Template: " +outputStream!.toString(), this, "getTemplateAsInputStream()");
    

                                    }
                                
this.setInputStream(new ByteArrayInputStream(outputStream!.toByteArray()) as InputStream);
    
this.setURIResolver(new BasicUriResolver(transformInfoTemplateData!.UNCRYPTED_EXTENSION) as URIResolver);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(extension.compareTo(transformInfoTemplateData!.ENCRYPTED_EXTENSION) == 0)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(filePath);
    
stringBuffer!.append(AbPathData.getInstance()!.EXTENSION_SEP);
    
stringBuffer!.append(transformInfoTemplateData!.ENCRYPTED_EXTENSION);
    

    file: AbFile = AbFile.createAbFile(stringBuffer!.toString())!;;
    

                        if(file.isFile())
                        
                                    {
                                    this.setEncryptedTemplateFileAsInputStream(file);
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw new Exception("View Template File Type Is Not Recognized: " +this.getTransformInfoInterface()!.getTemplateFilePath());
                    

                        }
                            

                                    }
                                
                        else {
                            this.setEncryptedTemplateAsInputStream();
    

                        }
                            

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.TAGHELPERFACTORYERROR))
                        
                                    {
                                    this.logUtil!.put("Failed to get Template Data", this, "setTemplateAsInputStream()", e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this.streamUtil!.close(outputStream);
    
this.streamUtil!.close(inputStream);
    

         }
        



                            throw new Exception("Error setTemplateAsInputStream()");
                    
}


};

            

