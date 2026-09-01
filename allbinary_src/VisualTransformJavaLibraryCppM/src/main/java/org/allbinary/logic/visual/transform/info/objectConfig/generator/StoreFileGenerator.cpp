
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
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/InputStream.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransformInfoObjectConfigGenerator.h"

class StoreFileGenerator: public TransformInfoObjectConfigGenerator {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string output;

    private: AbPath fileAbPath;

    private: AbFile file;

public: StoreFileGenerator(TransformInfoInterface transformInfoInterface){

    TransformInfoHttpInterface httpTransformInfoInterface = transformInfoInterface as TransformInfoHttpInterface;;
    

    WeblisketSession weblisketSession = WeblisketSession(httpTransformInfoInterface.getPropertiesHashMap(), httpTransformInfoInterface.getPageContext());;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(URLGLOBALS::getWebappPath());
    
stringBuffer.append(weblisketSession.getStoreName());
    
stringBuffer.append(AbPathData::getInstance().SEPARATOR);
    

    AbPath abPath = AbPath(stringBuffer.toString(), StringUtil::getInstance().EMPTY_STRING);;
    

    std::string fileName = httpTransformInfoInterface.getPropertiesHashMap().get(InputOutputTypeData::getInstance().FILE) as string;;
    

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil.isEmpty(fileName))
                        
                                    {
                                    
    TransformInfoHttpStoreInterface transformInfoHttpStoreInterface = transformInfoInterface as TransformInfoHttpStoreInterface;;
    
fileName= transformInfoInterface.getName().substring(transformInfoHttpStoreInterface.getStoreName().length() +1);
    

    HashMap<any, any> outputMappingHashMap = HashMap<any, any>();;
    
outputMappingHashMap.put(TransformInfosData::getInstance().PREVIEW, "Preview");
    
outputMappingHashMap.put(TransformInfosData::getInstance().SMALL_PREVIEW, "SmallPreview");
    
outputMappingHashMap.put(CommonSeps::getInstance().SPACE, StringUtil::getInstance().EMPTY_STRING);
    

    Replace replace = Replace(outputMappingHashMap);;
    
fileName= replace.all(fileName);
    

                                    }
                                

                        if(stringValidationUtil.isEmpty(fileName))
                        
                                    {
                                    


                            throw Exception("TransformInfoObjectConfigGenerator FileName Not Specified");
                    

                                    }
                                

    std::string tempOutput = httpTransformInfoInterface.getPropertiesHashMap().get(InputOutputTypeData::getInstance().NAME) as string;;
    

                        if(stringValidationUtil.isEmpty(tempOutput))
                        
                                    {
                                    tempOutput= InputOutputTypeData::getInstance().DEFAULT;
    

                                    }
                                
this->output= tempOutput;
    

                        if(stringValidationUtil.isEmpty(this->output))
                        
                                    {
                                    


                            throw Exception("TransformInfoObjectConfigGenerator Output=extension Not Specified");
                    

                                    }
                                
stringBuffer= StringMaker();
    
stringBuffer.append(fileName);
    
stringBuffer.append(AbPathData::getInstance().EXTENSION_SEP);
    
stringBuffer.append(this->output);
    
abPath= AbPath(abPath.toString(), stringBuffer.toString());
    
this->fileAbPath= abPath;
    
this->file= AbFile::createAbFileFromAbPath(this->fileAbPath);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("File: " +this->fileAbPath.toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: std::string process(std::string input){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Processing", this, this->commonStrings.PROCESS);
    

                                    }
                                

                        if(!this->file.exists())
                        
                                    {
                                    this->file.createNewFile();
    

                                    }
                                

                        if(this->file.exists())
                        
                                    {
                                    
    InputStream inputStream = ByteArrayInputStream(input.getBytes());;
    
FileUtil::getInstance().write(inputStream, this->file);
    

                                    }
                                
                        else {
                            


                            throw Exception("Could Not Create: " +this->fileAbPath.toString());
                    

                        }
                            

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("Processed", this, this->commonStrings.PROCESS);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


};

            

