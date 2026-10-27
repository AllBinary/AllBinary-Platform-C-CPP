
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_CPP
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/path/AbPath.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/FilePathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/PathUtil.h"


    auto AbPath::createAbPath() -> AbPath*{

        try {
            
    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AbPath(EMPTY_STRING, EMPTY_STRING);
    

                //: 
} catch(Exception& ex) 
            {



                            throw RuntimeException();
                    
}

}


AbPath::AbPath(std::string aPath, std::string name) : commonSeps(CommonSeps::getInstance()), abPathData(AbPathData::getInstance()), abPathUtil(PathUtil::getInstance()), EMPTY_STRING(StringUtil::getInstance()->EMPTY_STRING), schema(this->EMPTY_STRING), path(this->EMPTY_STRING), nameP(this->EMPTY_STRING){

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil->isEmpty(aPath))
                        
                                    {
                                    this->schema= this->getSchema(aPath);
    
this->nameP= name;
    
this->path= this->abPathUtil->adjustEnd(this->abPathUtil->adjust(this->getPathFromPath(aPath)));
    

                                    }
                                
                        else {
                            this->init();
    

                        if(!stringValidationUtil->isEmpty(name))
                        
                                    {
                                    this->nameP= name;
    

                                    }
                                

                        }
                            
}


    auto AbPath::init() -> void{
this->schema= this->EMPTY_STRING;
    
this->setPath(this->abPathData->SEPARATOR);
    
this->nameP= this->EMPTY_STRING;
    
}


    auto AbPath::getSchema(std::string aPath) -> std::string{

    int32_t beginIndex = JavaString::indexOf(aPath, this->commonSeps->COLON);;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    this->hasSchemaP= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaString::substring(aPath, 0, beginIndex);;
    

                                    }
                                
this->hasSchemaP= false;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    
}


    auto AbPath::hasSchema() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hasSchemaP;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPath::getPathFromPath(std::string aPath) -> std::string{

    FilePathData* filePathData = FilePathData::getInstance();;
    

    std::string tempPath = aPath;;
    

                        if(!this->hasSchema())
                        
                                    {
                                    tempPath= this->abPathUtil->adjustStart(tempPath);
    

                                    }
                                
                        else {
                            
    int32_t beginIndex = JavaString::indexOf(tempPath, this->commonSeps->COLON);;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    beginIndex++;
    

        while(tempPath[beginIndex] == this->abPathData->SEPARATORCHAR || tempPath[beginIndex] == filePathData->SEPARATORCHAR)
        {
beginIndex++;
    
this->numberOfSeps++;
    

                        if(this->numberOfSeps > 2)
                        
                                    {
                                    


                            throw Exception("Should Not Have More Than Two Seps");
                    

                                    }
                                
}

tempPath= JavaString::substring(tempPath, beginIndex, tempPath.size());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tempPath;
    
}


    auto AbPath::setName(std::string name) -> void{
this->nameP= name;
    
}


    auto AbPath::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nameP;
    
}


    auto AbPath::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

                        if(this->hasSchema())
                        
                                    {
                                    stringBuffer->append(this->schema);
    
stringBuffer->append(AbPath::NETWORK_SEP);
    

                                    }
                                
stringBuffer->append(this->getPath());
    
stringBuffer->append(this->nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto AbPath::toFileSystemString() -> std::string{

                        if(this->hasSchema())
                        
                                    {
                                    
    FilePathData* filePathData = FilePathData::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->schema);
    
stringBuffer->append(this->commonSeps->COLON);
    
stringBuffer->append(filePathData->PATH_START);
    
stringBuffer->append(FilePathUtil::adjust(this->getPath()));
    
stringBuffer->append(this->nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FilePathUtil::adjust(this->getPath()) +this->nameP;
    

                        }
                            
}


    auto AbPath::getPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}


    auto AbPath::setPath(std::string path) -> void{
this->path= path;
    
}




        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATH_CPP
