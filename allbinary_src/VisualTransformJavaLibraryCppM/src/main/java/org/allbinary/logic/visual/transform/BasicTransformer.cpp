
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/logic/visual/transform/AbTransformer.h"

class BasicTransformer: public AbTransformer {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: StreamUtil* streamUtil = StreamUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation;

public: BasicTransformer(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) : AbTransformer(transformInfoInterface){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setTemplateAsInputStream();
    
}


                //@Throws(Exception.constructor)
            
    private: void setEncryptedTemplateFileAsInputStream(AbFile* file){

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

    AbFileInputStream* inputStream = 
                null
            ;;
    

        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new AbFileInputStream(file);
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

    AbCrypt* abCrypt = new AbCrypt(KeySpecFactory::DESEDE, AbKeys::getInstance()->getKey(this->abeClientInformation, file->getAbsolutePath()));;
    

    std::vector<int8_t> decrypted = abCrypt->decrypt(outputStream->toByteArray());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF("Decrypted Template: \n" +
                                    //Otherwise - right - ObjectCreationExpr
, this, "setEncryptedTemplateFileAsInputStream(file)");
    

                                    }
                                
this->setInputStream(dynamic_cast<InputStream*>(new ByteArrayInputStream(decrypted)));
    
this->setURIResolver(dynamic_cast<URIResolver*>(new BasicUriResolver(TransformInfoTemplateData::getInstance()->ENCRYPTED_EXTENSION)));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Failed to get Encrypted File: ");
    
stringBuffer->append(file->getPath());
    
stringBuffer->append(" \nName:");
    
stringBuffer->append(file->getName());
    
this->logUtil->put(stringBuffer->toString(), this, "setEncryptedTemplateFileAsInputStream()", &e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    private: void setEncryptedTemplateAsInputStream(){

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

    ByteArrayInputStream* inputStream = 
                null
            ;;
    

        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new ByteArrayInputStream(this->getTransformInfoInterface()->getTemplate()->getBytes());
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

    AbCrypt* abCrypt = new AbCrypt(KeySpecFactory::DESEDE, AbKeys::getInstance()->getKey(this->abeClientInformation, this->getTransformInfoInterface()->getName()));;
    

    std::vector<int8_t> decrypted = abCrypt->decrypt(outputStream->toByteArray());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF("Decrypted Template: \n" +decrypted.toString(), this, "setEncryptedTemplateAsInputStream()");
    

                                    }
                                
this->setInputStream(dynamic_cast<InputStream*>(new ByteArrayInputStream(decrypted)));
    
this->setURIResolver(dynamic_cast<URIResolver*>(new BasicUriResolver(TransformInfoTemplateData::getInstance()->ENCRYPTED_EXTENSION)));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put("Failed to set with template: " +this->getTransformInfoInterface()->getTemplateFilePath(), this, "setEncryptedTemplateFileAsInputStream()", &e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

         }
        
}


                //@Throws(Exception.constructor)
            
    private: void setTemplateAsInputStream(){

    AbFileInputStream* inputStream = 
                null
            ;;
    

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

        try {
            
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

    TransformInfoTemplateData* transformInfoTemplateData = TransformInfoTemplateData::getInstance();;
    

    PathUtil* pathUtil = PathUtil::getInstance();;
    

                        if(this->getTransformInfoInterface()->getTemplateFilePath() != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string extension = pathUtil->getExtensionWithAbPath(this->getTransformInfoInterface()->getTemplateFilePath());;
    

    std::string filePath = pathUtil->getWithoutExtensionWithAbPath(this->getTransformInfoInterface()->getTemplateFilePath());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(extension.compare(transformInfoTemplateData->UNCRYPTED_EXTENSION) == 0)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(filePath);
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    
stringBuffer->append(transformInfoTemplateData->ENCRYPTED_EXTENSION);
    

    AbFile* encFile = AbFile::createAbFile(stringBuffer->toString());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    stringBuffer= new StringMaker();
    
stringBuffer->append("Encrypted Template File isFile=");
    
stringBuffer->appendboolean(encFile->isFile());
    
stringBuffer->append("\nEncTemplateFilePath: ");
    
stringBuffer->append(encFile->getPath());
    
this->logUtil->putF(stringBuffer->toString(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(encFile->isFile())
                        
                                    {
                                    this->setEncryptedTemplateFileAsInputStream(encFile);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
                        else {
                            
    AbFile* file = AbFile::createAbFileFromAbPath(this->getTransformInfoInterface()->getTemplateFilePath());;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF("Template File isFile=" +file->isFile(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(file->isFile())
                        
                                    {
                                    inputStream= new AbFileInputStream(file);
    
outputStream= new ByteArrayOutputStream();
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF("Template: " +outputStream->toString(), this, "getTemplateAsInputStream()");
    

                                    }
                                
this->setInputStream(dynamic_cast<InputStream*>(new ByteArrayInputStream(outputStream->toByteArray())));
    
this->setURIResolver(dynamic_cast<URIResolver*>(new BasicUriResolver(transformInfoTemplateData->UNCRYPTED_EXTENSION)));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        }
                            

                                    }
                                
                             else 
                        if(extension.compare(transformInfoTemplateData->ENCRYPTED_EXTENSION) == 0)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(filePath);
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    
stringBuffer->append(transformInfoTemplateData->ENCRYPTED_EXTENSION);
    

    AbFile* file = AbFile::createAbFile(stringBuffer->toString());;
    

                        if(file->isFile())
                        
                                    {
                                    this->setEncryptedTemplateFileAsInputStream(file);
    

                                    }
                                

                                    }
                                
                        else {
                            


                            throw new Exception("View Template File Type Is Not Recognized: " +this->getTransformInfoInterface()->getTemplateFilePath());
                    

                        }
                            

                                    }
                                
                        else {
                            this->setEncryptedTemplateAsInputStream();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put("Failed to get Template Data", this, "setTemplateAsInputStream()", &e);
    

                                    }
                                



                            throw e;
                    
}

         finally {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

         }
        



                            throw new Exception("Error setTemplateAsInputStream()");
                    
}


};

            

