
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/BasicTransformer.h"
        

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


BasicTransformer::BasicTransformer(AbeClientInformationInterface* abeClientInformation, TransformInfoInterface* transformInfoInterface) : AbTransformer(transformInfoInterface), logUtil(LogUtil::getInstance()), streamUtil(StreamUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->abeClientInformation= abeClientInformation;
    
this->setTemplateAsInputStream();
    
}


                //@Throws(Exception.constructor)
            
    auto BasicTransformer::setEncryptedTemplateFileAsInputStream(AbFile* file) -> void{

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

    AbFileInputStream* inputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N66538 = [&]() {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

        };
        
        struct FinallyGuard_N66538 { decltype(finallyFunction_N66538)& function; ~FinallyGuard_N66538() { function(); } } finallyGuard_N66538{finallyFunction_N66538};
        
        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new AbFileInputStream(file);
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

    AbCrypt* abCrypt = new AbCrypt(KeySpecFactory::DESEDE, AbKeys::getInstance()->getKey(this->abeClientInformation, file->getAbsolutePath()));;
    

    std::vector<int8_t> decrypted = abCrypt->decrypt(outputStream->toByteArray());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Decrypted Template: \n") +JavaString::valueOf(
                                    //Otherwise - right - ObjectCreationExpr
), this, "setEncryptedTemplateFileAsInputStream(file)");
    

                                    }
                                
this->setInputStream(dynamic_cast<InputStream*>(new ByteArrayInputStream(decrypted)));
    
this->setURIResolver(dynamic_cast<URIResolver*>(new BasicUriResolver(TransformInfoTemplateData::getInstance()->ENCRYPTED_EXTENSION)));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
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

        }

}


                //@Throws(Exception.constructor)
            
    auto BasicTransformer::setEncryptedTemplateAsInputStream() -> void{

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

    ByteArrayInputStream* inputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N67901 = [&]() {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

        };
        
        struct FinallyGuard_N67901 { decltype(finallyFunction_N67901)& function; ~FinallyGuard_N67901() { function(); } } finallyGuard_N67901{finallyFunction_N67901};
        
        try {
            outputStream= new ByteArrayOutputStream();
    
inputStream= new ByteArrayInputStream(this->getTransformInfoInterface()->getTemplate()->getBytes());
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

    AbCrypt* abCrypt = new AbCrypt(KeySpecFactory::DESEDE, AbKeys::getInstance()->getKey(this->abeClientInformation, this->getTransformInfoInterface()->getName()));;
    

    std::vector<int8_t> decrypted = abCrypt->decrypt(outputStream->toByteArray());;
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Decrypted Template: \n") +JavaString::valueOf(decrypted.toString()), this, "setEncryptedTemplateAsInputStream()");
    

                                    }
                                
this->setInputStream(dynamic_cast<InputStream*>(new ByteArrayInputStream(decrypted)));
    
this->setURIResolver(dynamic_cast<URIResolver*>(new BasicUriResolver(TransformInfoTemplateData::getInstance()->ENCRYPTED_EXTENSION)));
    

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Failed to set with template: ") +JavaString::valueOf(this->getTransformInfoInterface()->getTemplateFilePath()), this, "setEncryptedTemplateFileAsInputStream()", &e);
    

                                    }
                                



                            throw e;
                    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto BasicTransformer::setTemplateAsInputStream() -> void{

    AbFileInputStream* inputStream = 
                null
            ;;
    

    ByteArrayOutputStream* outputStream = 
                null
            ;;
    

        {
        
        auto finallyFunction_N69089 = [&]() {
            this->streamUtil->close(outputStream);
    
this->streamUtil->close(inputStream);
    

        };
        
        struct FinallyGuard_N69089 { decltype(finallyFunction_N69089)& function; ~FinallyGuard_N69089() { function(); } } finallyGuard_N69089{finallyFunction_N69089};
        
        try {
            
                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
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
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
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
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
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
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(this->getTransformInfoInterface()->log(), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Template File isFile=") +JavaString::valueOf(file->isFile()), this, "setTemplateAsInputStream()");
    

                                    }
                                

                        if(file->isFile())
                        
                                    {
                                    inputStream= new AbFileInputStream(file);
    
outputStream= new ByteArrayOutputStream();
    
outputStream= dynamic_cast<ByteArrayOutputStream*>(this->streamUtil->get(inputStream, outputStream, std::vector<int8_t>(16384)));
    

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORY))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Template: ") +JavaString::valueOf(outputStream->toString()), this, "getTemplateAsInputStream()");
    

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
                            


                            throw Exception(JavaString::valueOf("View Template File Type Is Not Recognized: ") +JavaString::valueOf(this->getTransformInfoInterface()->getTemplateFilePath()));
                    

                        }
                            

                                    }
                                
                        else {
                            this->setEncryptedTemplateAsInputStream();
    

                        }
                            

                //: 
} catch(Exception& e) 
            {

                        if(org.allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->TAGHELPERFACTORYERROR))
                        
                                    {
                                    this->logUtil->put("Failed to get Template Data", this, "setTemplateAsInputStream()", &e);
    

                                    }
                                



                            throw e;
                    
}

        }




                            throw Exception("Error setTemplateAsInputStream()");
                    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_BASICTRANSFORMER_CPP
