
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/path/PathUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
//Used to correct user input for paths
auto PathUtil::instance_owner() -> PathUtil* { static std::unique_ptr<PathUtil> value(new PathUtil()); return value.get(); }
PathUtil* PathUtil::instance = PathUtil::instance_owner();

    auto PathUtil::getInstance() -> PathUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return PathUtil::instance;
    
}


PathUtil::PathUtil() : abPathData(AbPathData::getInstance()), filePathData(FilePathData::getInstance()){
}


    auto PathUtil::getExtensionWithAbFilePath(AbFilePath* abFilePath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->abPathData->getExtension(abFilePath->toString());;
    
}


    auto PathUtil::getExtensionWithAbPath(AbPath* abPath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->abPathData->getExtension(abPath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    auto PathUtil::getWithoutExtensionWithAbFilePath(AbFilePath* abFilePath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getWithoutExtension(abFilePath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    auto PathUtil::getWithoutExtensionWithAbPath(AbPath* abPath) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getWithoutExtension(abPath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    auto PathUtil::getWithoutExtension(std::string filePath) -> std::string{

    int32_t indexOfFileExtensionDelmiter = this->abPathData->getExtensionIndex(filePath);;
    

    std::string pathWithoutExtension = filePath;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    pathWithoutExtension= JavaString::substring(filePath, 0, indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return pathWithoutExtension;
    
}


    auto PathUtil::isValid(std::string path) -> bool{

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


    auto PathUtil::isValidStart(std::string path) -> bool{

                        if(path[0] == this->abPathData->SEPARATORCHAR || path[0] == '.')
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto PathUtil::isValidEnd(std::string path) -> bool{

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(path))
                        
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


    auto PathUtil::adjustStart(std::string path) -> std::string{

                        if(!this->isValidStart(path))
                        
                                    {
                                    path= JavaString::valueOf(this->abPathData->SEPARATOR) +JavaString::valueOf(path);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}


    auto PathUtil::adjustEnd(std::string path) -> std::string{

                        if(!this->isValidEnd(path))
                        
                                    {
                                    path= JavaString::valueOf(path) +JavaString::valueOf(this->abPathData->SEPARATOR);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return path;
    
}


    auto PathUtil::adjust(std::string path) -> std::string{

    StringValidationUtil* stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(stringValidationUtil->isEmpty(path))
                        
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


                //@Throws(Exception.constructor)
            
    auto PathUtil::removeNameFromPath(std::string path) -> AbPath*{

    int32_t endIndex = JavaString::lastIndexOf(path, this->abPathData->SEPARATOR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= JavaString::lastIndexOf(path, this->filePathData->SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return AbPath::createAbPath();;
    

                                    }
                                

                        if(path.size() == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->removeNameFromPath(JavaString::substring(path, 0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    std::string pathWithoutName = JavaString::substring(path, 0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new AbPath(pathWithoutName, StringUtil::getInstance()->EMPTY_STRING);
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_PATHUTIL_CPP
