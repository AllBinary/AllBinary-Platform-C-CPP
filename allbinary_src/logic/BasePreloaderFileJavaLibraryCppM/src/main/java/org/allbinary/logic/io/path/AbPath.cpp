
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
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/RuntimeException.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/FilePathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbPathData.h"
#include "PathUtil.h"

class AbPath
            : public Object
         {

    public: static AbPath createAbPath(){

        try {
            
    std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AbPath(EMPTY_STRING, EMPTY_STRING);
    

                //: 
} catch(ex) 
            {



                            throw RuntimeException();
                    
}

}


    private: static const std::string NETWORK_SEP = ":/";

    private: const CommonSeps commonSeps = CommonSeps::getInstance();

    private: const AbPathData abPathData = AbPathData::getInstance();

    private: const PathUtil abPathUtil = PathUtil::getInstance();

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    protected: std::string schema = this->EMPTY_STRING;

    private: std::string path = this->EMPTY_STRING;

    protected: std::string nameP = this->EMPTY_STRING;

    private: bool hasSchemaP = false;

    private: int32_t numberOfSeps = 0;

public: AbPath(std::string aPath, std::string name){

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isEmpty(aPath))
                        
                                    {
                                    this->schema= this->getSchema(aPath);
    
this->nameP= name;
    
this->path= this->abPathUtil.adjustEnd(this->abPathUtil.adjust(this->getPathFromPath(aPath)));
    

                                    }
                                
                        else {
                            this->init();
    

                        if(!stringValidationUtil.isEmpty(name))
                        
                                    {
                                    this->nameP= name;
    

                                    }
                                

                        }
                            
}


    private: void init(){
this->schema= this->EMPTY_STRING;
    
this->setPath(this->abPathData.SEPARATOR);
    
this->nameP= this->EMPTY_STRING;
    
}


    protected: std::string getSchema(std::string aPath){

    int32_t beginIndex = aPath.indexOf(this->commonSeps.COLON);;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    this->hasSchemaP= true;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aPath.substring(0, beginIndex);;
    

                                    }
                                
this->hasSchemaP= false;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->EMPTY_STRING;
    
}


    public: bool hasSchema(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hasSchemaP;
    
}


                //@Throws(Exception.constructor)
            
    public: std::string getPathFromPath(std::string aPath){

    FilePathData filePathData = FilePathData::getInstance();;
    

    std::string tempPath = aPath;;
    

                        if(!this->hasSchema())
                        
                                    {
                                    tempPath= this->abPathUtil.adjustStart(tempPath);
    

                                    }
                                
                        else {
                            
    int32_t beginIndex = tempPath.indexOf(this->commonSeps.COLON);;
    

                        if(beginIndex >= 0)
                        
                                    {
                                    beginIndex++;
    

        while(tempPath[beginIndex] == this->abPathData.SEPARATORCHAR || tempPath[beginIndex] == filePathData.SEPARATORCHAR)
        {
beginIndex++;
    
this->numberOfSeps++;
    

                        if(this->numberOfSeps > 2)
                        
                                    {
                                    


                            throw Exception("Should Not Have More Than Two Seps");
                    

                                    }
                                
}

tempPath= tempPath.substring(beginIndex, tempPath.size());
    

                                    }
                                

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tempPath;
    
}


    public: void setName(std::string name){
this->nameP= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->nameP;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

                        if(this->hasSchema())
                        
                                    {
                                    stringBuffer.append(this->schema);
    
stringBuffer.append(AbPath::NETWORK_SEP);
    

                                    }
                                
stringBuffer.append(this->getPath());
    
stringBuffer.append(this->nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string toFileSystemString(){

                        if(this->hasSchema())
                        
                                    {
                                    
    FilePathData filePathData = FilePathData::getInstance();;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(this->schema);
    
stringBuffer.append(this->commonSeps.COLON);
    
stringBuffer.append(filePathData.PATH_START);
    
stringBuffer.append(FilePathUtil::adjust(this->getPath()));
    
stringBuffer.append(this->nameP);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FilePathUtil::adjust(this->getPath()) +this->nameP;
    

                        }
                            
}


    public: std::string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}


    protected: void setPath(std::string path){
this->path= path;
    
}


};

            

