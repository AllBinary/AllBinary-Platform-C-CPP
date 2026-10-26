
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/path/AbFilePath.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Used to correct user input for paths
class AbPathUtilOld
            : public Object
         {

    private: static AbPathUtilOld instance() { return AbPathUtilOld(); }

    public: static AbPathUtilOld getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPathUtilOld::instance();
    
}


    private: static const int32_t MIN = 4;

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const AbPathData abPathData = AbPathData::getInstance();

    private: const FilePathData filePathData = FilePathData::getInstance();

private: AbPathUtilOld(){
}


                //@Throws(Exception.constructor)
            
    public: std::string getExtension(AbFilePath abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getExtension(abFilePath.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getExtension(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getExtension(abPath.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getExtension(std::string filePath){

                        if(filePath.size() < AbPathUtilOld::MIN)
                        
                                    {
                                    


                            throw Exception("Could not be a file path since its less that 4 characters");
                    

                                    }
                                

    int32_t beginIndex = filePath.size() -AbPathUtilOld::MIN;;
    

    std::string extension = filePath.substring(beginIndex +1);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("FileExtension: " +extension, this, "getExtension()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return extension;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(AbFilePath abFilePath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getWithoutExtension(abFilePath.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getWithoutExtension(abPath.toString());;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getWithoutExtension(std::string filePath){

                        if(filePath.size() < AbPathUtilOld::MIN)
                        
                                    {
                                    


                            throw Exception("Could not be a file path since its less that 4 characters");
                    

                                    }
                                

    int32_t endIndex = filePath.size() -AbPathUtilOld::MIN;;
    

    std::string pathWithoutExtension = filePath.substring(0, endIndex);;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().VIEW))
                        
                                    {
                                    this->logUtil.putF("FileWithoutExtension: " +pathWithoutExtension, this, "getWithoutExtension()");
    

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

                        if(path[0] == this->abPathData.SEPARATORCHAR)
                        
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

                        if(StringValidationUtil::getInstance().isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                

                        if(path[path.size() -1] == this->abPathData.SEPARATORCHAR)
                        
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
                                    path= this->abPathData.SEPARATOR +path;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public: std::string adjustEnd(std::string path){

                        if(!this->isValidEnd(path))
                        
                                    {
                                    path= path +this->abPathData.SEPARATOR;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}


    public: std::string adjust(std::string path){

                        if(StringValidationUtil::getInstance().isEmpty(path))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->abPathData.SEPARATOR;
    

                                    }
                                

                        if(path.indexOf("\\") >= 0)
                        
                                    {
                                    path= path.replace('\\', this->abPathData.SEPARATORCHAR);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return path;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getNameFromPath(std::string categoryPath){

    int32_t endIndex = categoryPath.lastIndexOf(this->abPathData.SEPARATOR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= categoryPath.lastIndexOf(this->filePathData.SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryPath;
    

                        if(categoryPath.size() == endIndex +1)
                        
                                    {
                                    
    std::string categoryName = categoryPath.substring(0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getNameFromPath(categoryName);;
    

                                    }
                                
                        else {
                            
    std::string categoryName = categoryPath.substring(endIndex +1);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return categoryName;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: AbPath removeNameFromPath(std::string categoryPath){

    int32_t endIndex = categoryPath.lastIndexOf(this->abPathData.SEPARATOR);;
    

                        if(endIndex < 0)
                        
                                    {
                                    endIndex= categoryPath.lastIndexOf(this->filePathData.SEPARATORCHAR);
    

                                    }
                                

                        if(endIndex < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath::createAbPath();;
    

                                    }
                                

                        if(categoryPath.size() == endIndex +1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->removeNameFromPath(categoryPath.substring(0, endIndex -1));;
    

                                    }
                                
                        else {
                            
    std::string categoryName = categoryPath.substring(0, endIndex);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(categoryName, StringUtil::getInstance().EMPTY_STRING);
    

                        }
                            
}


};

            

