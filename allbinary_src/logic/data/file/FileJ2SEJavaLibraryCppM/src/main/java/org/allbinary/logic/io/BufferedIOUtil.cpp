
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
        
#include <java/io/BufferedReader.h>

      
#include <java/io/BufferedWriter.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/FileWriter.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedIOUtil
            : public Object
         {
        

                //@Throws(Exception.constructor)
            
    public static copy(AbFile backupFile, AbFile backupFileBak){

    line: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

    tmpOut: BufferedWriter = new BufferedWriter(new FileWriter(AbFileNativeUtil.get(backupFileBak)));;
    

    tmpIn: BufferedReader = new BufferedReader(new FileReader(AbFileNativeUtil.get(backupFile)));;
    

        while(true)
        {
line= tmpIn!.readLine();
    

                        if(line == 
                                    null
                                )
                        
                                    {
                                    break;

                    

                                    }
                                
tmpOut!.write(line, 0, line.length);
    
tmpOut!.newLine();
    
}

tmpOut!.flush();
    
}


};

            

