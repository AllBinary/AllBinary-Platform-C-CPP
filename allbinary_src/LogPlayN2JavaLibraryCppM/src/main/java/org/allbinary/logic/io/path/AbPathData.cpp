
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AbPathData
            : public Object
         {

    private: static AbPathData instance() { return AbPathData(); }

    public: static AbPathData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathData::instance();
    
}


    public: const std::string EXTENSION_SEP = CommonSeps::getInstance().PERIOD;

    public: const char SEPARATORCHAR = '/';

    public: const std::string SEPARATOR = CommonSeps::getInstance().FORWARD_SLASH;

private: AbPathData(){
}


    public: int32_t getExtensionIndex(std::string filePath){

    int32_t indexOfFileExtensionDelmiter = filePath.lastIndexOf(this->EXTENSION_SEP);;
    

    int32_t indexOfLatDelimiter = filePath.lastIndexOf(this->SEPARATORCHAR);;
    

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
    

    std::string extension = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= filePath.substring(indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public: std::string getExtension(std::string filePath){

    int32_t indexOfFileExtensionDelmiter = this->getExtensionIndex(filePath);;
    

    std::string extension = StringUtil::getInstance().EMPTY_STRING;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    extension= filePath.substring(indexOfFileExtensionDelmiter +1);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


    public: std::string getNameFromPath(std::string path){

    int32_t endIndex = path.lastIndexOf(this->SEPARATORCHAR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= path.lastIndexOf(FilePathData::getInstance().SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    

                                    }
                                

                        if(path.size() == endIndex +1)
                        
                                    {
                                    
    std::string categoryName = path.substring(0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getNameFromPath(categoryName);;
    

                                    }
                                
                        else {
                            
    std::string categoryName = path.substring(endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryName;
    

                        }
                            
}


    public: std::string removeNameFromPath(std::string path){

    int32_t endIndex = path.lastIndexOf(this->SEPARATORCHAR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= path.lastIndexOf(FilePathData::getInstance().SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    

                                    }
                                

                        if(path.size() == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removeNameFromPath(path.substring(0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    std::string pathWithoutName = path.substring(0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathWithoutName;
    

                        }
                            
}


};

            

