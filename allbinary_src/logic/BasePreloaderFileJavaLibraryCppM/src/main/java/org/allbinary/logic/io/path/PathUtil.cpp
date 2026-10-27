
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
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/io/path/AbFilePath.h"
#include "org/allbinary/logic/io/path/AbPath.h"
//Used to correct user input for paths
class PathUtil
            : public Object
         {

    private: static PathUtil* instance() { static std::unique_ptr<PathUtil> value(new PathUtil()); return value.get(); }

    public: static PathUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathUtil::instance();
    
}


    private: AbPathData* abPathData = AbPathData::getInstance();

    private: FilePathData* filePathData = FilePathData::getInstance();

private: PathUtil(){
}


    public: std::string getExtensionWithAbFilePath(AbFilePath* abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abPathData->getExtension(abFilePath->toString());;
    
}


    public: std::string getExtensionWithAbPath(AbPath* abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abPathData->getExtension(abPath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbFilePath(AbFilePath* abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getWithoutExtension(abFilePath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtensionWithAbPath(AbPath* abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getWithoutExtension(abPath->toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(std::string filePath){

    int32_t indexOfFileExtensionDelmiter = this->abPathData->getExtensionIndex(filePath);;
    

    std::string pathWithoutExtension = filePath;;
    

                        if(indexOfFileExtensionDelmiter >= 0)
                        
                                    {
                                    pathWithoutExtension= JavaString::substring(filePath, 0, indexOfFileExtensionDelmiter);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return pathWithoutExtension;
    
}


    public: bool isValid(std::string path){

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


    private: bool isValidStart(std::string path){

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


    private: bool isValidEnd(std::string path){

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


    public: std::string adjustStart(std::string path){

                        if(!this->isValidStart(path))
                        
                                    {
                                    path= this->abPathData->SEPARATOR +path;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public: std::string adjustEnd(std::string path){

                        if(!this->isValidEnd(path))
                        
                                    {
                                    path= path +this->abPathData->SEPARATOR;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public: std::string adjust(std::string path){

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
            
    public: AbPath* removeNameFromPath(std::string path){

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


};

            

