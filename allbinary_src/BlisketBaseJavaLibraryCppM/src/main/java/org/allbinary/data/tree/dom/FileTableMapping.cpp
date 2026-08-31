
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
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FileData.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/io/path/PathUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class FileTableMapping
            : public Object
        : public TableMappingInterface {
        

    private: file: AbFile;

public constructor (AbFile file){

            super();
        this.file= file;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.file.getPath();
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    filePropertyVector: Vector = new Vector();;
    
filePropertyVector!.add(this.file.getAbsolutePath());
    
filePropertyVector!.add(this.file.getCanonicalPath());
    
filePropertyVector!.add(this.file.getName());
    
filePropertyVector!.add(this.file.getParent());
    
filePropertyVector!.add(this.file.getPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePropertyVector;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){

    filePropertyHashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    pathData: AbPathData = AbPathData.getInstance()!;;
    

    pathUtil: PathUtil = PathUtil.getInstance()!;;
    

    rootFileName: string = pathData!.getNameFromPath(pathUtil!.getWithoutExtension(this.file.getPath()))!;;
    

    fileData: FileData = FileData.getInstance()!;;
    
filePropertyHashMap!.put(fileData!.ROOT_NAME, rootFileName);
    
filePropertyHashMap!.put(fileData!.ISFILE, Boolean.valueOf(this.file.isFile())!.toString());
    
filePropertyHashMap!.put(fileData!.ISDIRECTORY, Boolean.valueOf(this.file.isDirectory())!.toString());
    
filePropertyHashMap!.put(fileData!.ISHIDDEN, Boolean.valueOf(this.file.isHidden())!.toString());
    
filePropertyHashMap!.put(fileData!.ISABSOLUTE, Boolean.valueOf(this.file.isAbsolute())!.toString());
    
filePropertyHashMap!.put(fileData!.ABSOLUTE_PATH, file.getAbsolutePath());
    
filePropertyHashMap!.put(fileData!.CANONICAL_PATH, file.getCanonicalPath());
    
filePropertyHashMap!.put(fileData!.NAME, file.getName());
    
filePropertyHashMap!.put(fileData!.PARENT, file.getParent());
    
filePropertyHashMap!.put(fileData!.PATH, file.getPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePropertyHashMap;
    
}


};

            

