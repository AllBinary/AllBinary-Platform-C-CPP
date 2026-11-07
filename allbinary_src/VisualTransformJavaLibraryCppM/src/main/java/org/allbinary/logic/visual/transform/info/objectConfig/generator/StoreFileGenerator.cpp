
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_STOREFILEGENERATOR_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_STOREFILEGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/StoreFileGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/http/request/session/WeblisketSession.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileUtil.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoHttpStoreInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfosData.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/objectConfig/generator/TransformInfoObjectConfigGenerator.h"


StoreFileGenerator::StoreFileGenerator(TransformInfoInterface* transformInfoInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

    TransformInfoHttpInterface* httpTransformInfoInterface = dynamic_cast<TransformInfoHttpInterface*>(transformInfoInterface);;
    

    WeblisketSession* weblisketSession = new WeblisketSession(httpTransformInfoInterface->getPropertiesHashMap(), httpTransformInfoInterface->getPageContext());;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getWebappPath());
    
stringBuffer->append(weblisketSession->getStoreName());
    
stringBuffer->append(AbPathData::getInstance()->SEPARATOR);
    

    AbPath* abPath = new AbPath(JavaString::valueOf(stringBuffer), StringUtil::getInstance()->EMPTY_STRING);;
    

    std::string fileName = JavaBoxes::unbox<std::string>(httpTransformInfoInterface->getPropertiesHashMap()->get(InputOutputTypeData::getInstance()->FILE));;
    

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(fileName))
                        
                                    {
                                    
    TransformInfoHttpStoreInterface* transformInfoHttpStoreInterface = dynamic_cast<TransformInfoHttpStoreInterface*>(transformInfoInterface);;
    
fileName= JavaString::substring(transformInfoInterface->getName(), transformInfoHttpStoreInterface->getStoreName()->length() +1);
    

    HashMap<Object*, Object*>* outputMappingHashMap = StdUtil::getInstance()->createHashMap();;
    
outputMappingHashMap->put(TransformInfosData::getInstance()->PREVIEW, "Preview");
    
outputMappingHashMap->put(TransformInfosData::getInstance()->SMALL_PREVIEW, "SmallPreview");
    
outputMappingHashMap->put(CommonSeps::getInstance()->SPACE, StringUtil::getInstance()->EMPTY_STRING);
    

    Replace* replace = new Replace(outputMappingHashMap);;
    
fileName= replace->all(fileName);
    

                                    }
                                

                        if(stringValidationUtil->isEmpty(fileName))
                        
                                    {
                                    


                            throw Exception("TransformInfoObjectConfigGenerator FileName Not Specified");
                    

                                    }
                                

    std::string tempOutput = JavaBoxes::unbox<std::string>(httpTransformInfoInterface->getPropertiesHashMap()->get(InputOutputTypeData::getInstance()->NAME));;
    

                        if(stringValidationUtil->isEmpty(tempOutput))
                        
                                    {
                                    tempOutput= InputOutputTypeData::getInstance()->DEFAULT;
    

                                    }
                                
this->output= tempOutput;
    

                        if(stringValidationUtil->isEmpty(this->output))
                        
                                    {
                                    


                            throw Exception("TransformInfoObjectConfigGenerator Output=extension Not Specified");
                    

                                    }
                                
stringBuffer= new StringMaker();
    
stringBuffer->append(fileName);
    
stringBuffer->append(AbPathData::getInstance()->EXTENSION_SEP);
    
stringBuffer->append(this->output);
    
abPath= new AbPath(JavaString::valueOf(abPath), JavaString::valueOf(stringBuffer));
    
this->fileAbPath= abPath;
    
this->file= AbFile::createAbFileFromAbPath(this->fileAbPath);
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("File: ") +JavaString::valueOf(JavaString::valueOf(this->fileAbPath)), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto StoreFileGenerator::process(std::string input) -> std::string{

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Processing", this, this->commonStrings->PROCESS);
    

                                    }
                                

                        if(!this->file->exists())
                        
                                    {
                                    this->file->createNewFile();
    

                                    }
                                

                        if(this->file->exists())
                        
                                    {
                                    
    InputStream* inputStream = new ByteArrayInputStream(JavaString::getBytes(input));;
    
FileUtil::getInstance()->write(inputStream, this->file);
    

                                    }
                                
                        else {
                            


                            throw Exception(JavaString::valueOf("Could Not Create: ") +JavaString::valueOf(JavaString::valueOf(this->fileAbPath)));
                    

                        }
                            

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF("Processed", this, this->commonStrings->PROCESS);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_OBJECTCONFIG_GENERATOR_STOREFILEGENERATOR_CPP
