
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_CPP
        #define ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/file/path/AbPathUtilOld.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Used to correct user input for paths
auto AbPathUtilOld::instance_owner() -> AbPathUtilOld* { static std::unique_ptr<AbPathUtilOld> value(new AbPathUtilOld()); return value.get(); }
AbPathUtilOld* AbPathUtilOld::instance = AbPathUtilOld::instance_owner();

    auto AbPathUtilOld::getInstance() -> AbPathUtilOld*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbPathUtilOld::instance;
    
}


AbPathUtilOld::AbPathUtilOld() : logUtil(LogUtil::getInstance()), abPathData(AbPathData::getInstance()), filePathData(FilePathData::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getExtension(AbFilePath* abFilePath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getExtension(JavaString::valueOf(abFilePath));;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getExtension(AbPath* abPath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getExtension(JavaString::valueOf(abPath));;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getExtension(std::string filePath) -> std::string{

                        if(filePath.size() < AbPathUtilOld::MIN)
                        
                                    {
                                    


                            throw Exception("Could not be a file path since its less that 4 characters");
                    

                                    }
                                

    int32_t beginIndex = filePath.size() -AbPathUtilOld::MIN;;
    

    std::string extension = JavaString::substring(filePath, beginIndex +1);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("FileExtension: ") +JavaString::valueOf(extension), this, "getExtension()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return extension;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getWithoutExtension(AbFilePath* abFilePath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getWithoutExtension(JavaString::valueOf(abFilePath));;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getWithoutExtension(AbPath* abPath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getWithoutExtension(JavaString::valueOf(abPath));;
    
}


                //@Throws(Exception.constructor)
            
    auto AbPathUtilOld::getWithoutExtension(std::string filePath) -> std::string{

                        if(filePath.size() < AbPathUtilOld::MIN)
                        
                                    {
                                    


                            throw Exception("Could not be a file path since its less that 4 characters");
                    

                                    }
                                

    int32_t endIndex = filePath.size() -AbPathUtilOld::MIN;;
    

    std::string pathWithoutExtension = JavaString::substring(filePath, 0, endIndex);;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("FileWithoutExtension: ") +JavaString::valueOf(pathWithoutExtension), this, "getWithoutExtension()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pathWithoutExtension;
    
}


    auto AbPathUtilOld::isValid(std::string path) -> bool{

                        if(this->isValidStart(path))
                        
                                    {
                                    
                        if(this->isValidEnd(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto AbPathUtilOld::isValidStart(std::string path) -> bool{

                        if(path[0] == this->abPathData->SEPARATORCHAR)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto AbPathUtilOld::isValidEnd(std::string path) -> bool{

                        if(StringValidationUtil::getInstance()->isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                                    }
                                

                        if(path[path.size() -1] == this->abPathData->SEPARATORCHAR)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto AbPathUtilOld::adjustStart(std::string path) -> std::string{

                        if(!this->isValidStart(path))
                        
                                    {
                                    path= JavaString::valueOf(this->abPathData->SEPARATOR) +JavaString::valueOf(path);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}


    auto AbPathUtilOld::adjustEnd(std::string path) -> std::string{

                        if(!this->isValidEnd(path))
                        
                                    {
                                    path= JavaString::valueOf(path) +JavaString::valueOf(this->abPathData->SEPARATOR);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}


    auto AbPathUtilOld::adjust(std::string path) -> std::string{

                        if(StringValidationUtil::getInstance()->isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->abPathData->SEPARATOR;
    

                                    }
                                

                        if(JavaString::indexOf(path, "\\") >= 0)
                        
                                    {
                                    path= JavaString::replace(path, '\\', this->abPathData->SEPARATORCHAR);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbPathUtilOld::getNameFromPath(std::string categoryPath) -> std::string{

    int32_t endIndex = JavaString::lastIndexOf(categoryPath, this->abPathData->SEPARATOR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= JavaString::lastIndexOf(categoryPath, this->filePathData->SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryPath;
    

                        if(categoryPath.size() == endIndex +1)
                        
                                    {
                                    
    std::string categoryName = JavaString::substring(categoryPath, 0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getNameFromPath(categoryName);;
    

                                    }
                                
                        else {
                            
    std::string categoryName = JavaString::substring(categoryPath, endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return categoryName;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto AbPathUtilOld::removeNameFromPath(std::string categoryPath) -> AbPath*{

    int32_t endIndex = JavaString::lastIndexOf(categoryPath, this->abPathData->SEPARATOR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= JavaString::lastIndexOf(categoryPath, this->filePathData->SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbPath::createAbPath();;
    

                                    }
                                

                        if(categoryPath.size() == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->removeNameFromPath(JavaString::substring(categoryPath, 0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    std::string categoryName = JavaString::substring(categoryPath, 0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(categoryName, StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_IO_FILE_PATH_ABPATHUTILOLD_CPP
