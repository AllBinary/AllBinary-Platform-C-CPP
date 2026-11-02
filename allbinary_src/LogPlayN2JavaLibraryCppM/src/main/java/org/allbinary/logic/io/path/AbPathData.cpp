
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP
        #define ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/io/path/AbPathData.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Used to correct user input for paths
auto AbPathData::instance_owner() -> AbPathData* { static std::unique_ptr<AbPathData> value(new AbPathData()); return value.get(); }
AbPathData* AbPathData::instance = AbPathData::instance_owner();

    auto AbPathData::getInstance() -> AbPathData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathData::instance;
    
}


AbPathData::AbPathData() : EXTENSION_SEP(CommonSeps::getInstance()->PERIOD), SEPARATOR(CommonSeps::getInstance()->FORWARD_SLASH){
}


    auto AbPathData::getExtensionIndex(std::string filePath) -> int32_t{

    int32_t indexOfFileExtensionDelmiter = JavaString::lastIndexOf(filePath, this->EXTENSION_SEP);;
    

    int32_t indexOfLatDelimiter = JavaString::lastIndexOf(filePath, this->SEPARATORCHAR);;
    

                        if(indexOfFileExtensionDelmiter < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                

                        if(indexOfFileExtensionDelmiter < indexOfLatDelimiter)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return indexOfFileExtensionDelmiter;
    
}


    auto AbPathData::getExtensionWithDot(std::string filePath) -> std::string{

    int32_t indexOfFileExtensionDelmiter = this->getExtensionIndex(filePath);;
    

    std::string extension = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= JavaString::substring(filePath, indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    auto AbPathData::getExtension(std::string filePath) -> std::string{

    int32_t indexOfFileExtensionDelmiter = this->getExtensionIndex(filePath);;
    

    std::string extension = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= JavaString::substring(filePath, indexOfFileExtensionDelmiter +1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    auto AbPathData::getNameFromPath(std::string path) -> std::string{

    int32_t endIndex = JavaString::lastIndexOf(path, this->SEPARATORCHAR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= JavaString::lastIndexOf(path, FilePathData::getInstance()->SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                                    }
                                

                        if(path.size() == endIndex +1)
                        
                                    {
                                    
    std::string categoryName = JavaString::substring(path, 0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getNameFromPath(categoryName);;
    

                                    }
                                
                        else {
                            
    std::string categoryName = JavaString::substring(path, endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryName;
    

                        }
                            
}


    auto AbPathData::removeNameFromPath(std::string path) -> std::string{

    int32_t endIndex = JavaString::lastIndexOf(path, this->SEPARATORCHAR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= JavaString::lastIndexOf(path, FilePathData::getInstance()->SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    

                                    }
                                

                        if(path.size() == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removeNameFromPath(JavaString::substring(path, 0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    std::string pathWithoutName = JavaString::substring(path, 0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathWithoutName;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_IO_PATH_ABPATHDATA_CPP
