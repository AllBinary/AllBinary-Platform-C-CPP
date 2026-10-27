
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileTableMapping
            : public Object
        , public TableMappingInterface {

    private: AbFile* file;

public: FileTableMapping(AbFile* file){
this->file= file;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file->getPath();
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector(){

    BasicArrayList* filePropertyVector = new BasicArrayListD();;
    
filePropertyVector->add(this->file->getAbsolutePath());
    
filePropertyVector->add(this->file->getCanonicalPath());
    
filePropertyVector->add(this->file->getName());
    
filePropertyVector->add(this->file->getParent());
    
filePropertyVector->add(this->file->getPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePropertyVector;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* filePropertyHashMap = StdUtil::getInstance()->createHashMap();;
    

    AbPathData* pathData = AbPathData::getInstance();;
    

    PathUtil* pathUtil = PathUtil::getInstance();;
    

    std::string rootFileName = pathData->getNameFromPath(pathUtil->getWithoutExtension(this->file->getPath()));;
    

    FileData* fileData = FileData::getInstance();;
    
filePropertyHashMap->put(fileData->ROOT_NAME, rootFileName);
    
filePropertyHashMap->put(fileData->ISFILE, Boolean::valueOf(this->file->isFile())->toString());
    
filePropertyHashMap->put(fileData->ISDIRECTORY, Boolean::valueOf(this->file->isDirectory())->toString());
    
filePropertyHashMap->put(fileData->ISHIDDEN, Boolean::valueOf(this->file->isHidden())->toString());
    
filePropertyHashMap->put(fileData->ISABSOLUTE, Boolean::valueOf(this->file->isAbsolute())->toString());
    
filePropertyHashMap->put(fileData->ABSOLUTE_PATH, file->getAbsolutePath());
    
filePropertyHashMap->put(fileData->CANONICAL_PATH, file->getCanonicalPath());
    
filePropertyHashMap->put(fileData->NAME, file->getName());
    
filePropertyHashMap->put(fileData->PARENT, file->getParent());
    
filePropertyHashMap->put(fileData->PATH, file->getPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePropertyHashMap;
    
}


};

            

