
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbPathData
            : public Object
         {

    private: static AbPathData* instance() { static std::unique_ptr<AbPathData> value(new AbPathData()); return value.get(); }

    public: static AbPathData* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathData::instance();
    
}


    public: const std::string EXTENSION_SEP = CommonSeps::getInstance()->PERIOD;

    public: const char SEPARATORCHAR = '/';

    public: const std::string SEPARATOR = CommonSeps::getInstance()->FORWARD_SLASH;

private: AbPathData(){
}


    public: int32_t getExtensionIndex(std::string filePath){

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


    public: std::string getExtensionWithDot(std::string filePath){

    int32_t indexOfFileExtensionDelmiter = this->getExtensionIndex(filePath);;
    

    std::string extension = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= JavaString::substring(filePath, indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public: std::string getExtension(std::string filePath){

    int32_t indexOfFileExtensionDelmiter = this->getExtensionIndex(filePath);;
    

    std::string extension = StringUtil::getInstance()->EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= JavaString::substring(filePath, indexOfFileExtensionDelmiter +1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public: std::string getNameFromPath(std::string path){

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


    public: std::string removeNameFromPath(std::string path){

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


};

            

