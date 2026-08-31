
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/http/file/upload/FileUploadData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbIOSystem.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/Directory.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DeleteCloud
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

public constructor (){

            super();
        }


    public bool delete(string prePath, int32_t current, int32_t total){

        try {
            
                        if(AbIOSystem.getInstance()!.isType("com.vobject.appengine.java.io"))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(URLGLOBALS.getWebappPath());
    
stringBuffer!.append(prePath);
    

    path: AbPath = new AbPath(stringBuffer!.toString(), StringUtil.getInstance()!.EMPTY_STRING);;
    

    file: AbFile = AbFile.createAbFileFromAbPath(path)!;;
    

    fileBasicArrayList: BasicArrayList = Directory.getInstance()!.search(file, true)!;;
    

    size: int32_t = fileBasicArrayList!.size()!;;
    
stringBuffer!.delete(0, stringBuffer!.length());
    
stringBuffer!.append("Searched: ");
    
stringBuffer!.append(path.toFileSystemString());
    
stringBuffer!.append(" BasicArrayList: ");
    
stringBuffer!.appendint(size);
    

    portion: int32_t = size /total +1;;
    

    start: int32_t = portion *current;;
    

    end: int32_t = start +portion;;
    

                        if(end > size)
                        
                                    {
                                    end= size;
    

                                    }
                                
stringBuffer!.append(" Section: ");
    
stringBuffer!.appendint(start);
    
stringBuffer!.append(" - ");
    
stringBuffer!.appendint(end);
    
this.logUtil!.putF(stringBuffer!.toString(), this, "initialize()");
    

    nextFile: AbFile;;
    




                        for (
    index: int32_t = start;index < end; index++)
        {
nextFile= fileBasicArrayList!.get(index) as AbFile;
    

        try {
            
                        if(nextFile!.getPath()!.indexOf(FileUploadData.getInstance()!.FILE) < 0)
                        
                                    {
                                    nextFile!.delete();
    

                                    }
                                

                //: 
} catch(e) 
            {
}

}

this.logUtil!.putF("Deleted Files From Cloud", this, "initialize()");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {
this.logUtil!.put("Unable to copy installer files into cloud", this, "initialize()", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


};

            

