
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
        
#include <java/io/BufferedWriter.h>

      
#include <java/io/FileWriter.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/AbFileNativeUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BufferedWriterUtil
            : public Object
         {
        

    private: static const instance: BufferedWriterUtil = new BufferedWriterUtil();

    public static BufferedWriterUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BufferedWriterUtil.instance;
    
}


    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const commonLabels: CommonLabels = CommonLabels.getInstance()!;

    private: const REMOVING_OLD: string = "Remove old for overwritting: ";

                //@Throws(Exception.constructor)
            
    public overwrite(string path, string data){

    abFile: AbFile = AbFile.createAbFile(path)!;;
    

                        if(abFile!.exists())
                        
                                    {
                                    this.logUtil!.putF(this.REMOVING_OLD +path, this, this.commonStrings!.CREATE);
    
abFile!.delete();
    

                                    }
                                
                        else {
                            
    name: string = AbPathData.getInstance()!.removeNameFromPath(path)!;;
    

    abFileDirectory: AbFile = AbFile.createAbFile(name)!;;
    

                        if(abFileDirectory!.exists())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    stringBuilder: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringBuilder!.append(this.commonStrings!.CREATE)!.append(this.commonLabels!.COLON_SEP)!.append(name)!.toString(), this, this.commonStrings!.CREATE);
    

    result: bool = abFileDirectory!.mkdirs()!;;
    
stringBuilder!.delete(0, stringBuilder!.length());
    
this.logUtil!.putF(stringBuilder!.append(this.commonLabels!.RESULT_)!.appendboolean(result)!.toString(), this, this.commonStrings!.CREATE);
    

                        }
                            

                        }
                            
this.write(abFile, data);
    
}


                //@Throws(Exception.constructor)
            
    public overwrite(AbFile abFile, string data){

                        if(abFile!.exists())
                        
                                    {
                                    this.logUtil!.putF(this.REMOVING_OLD +abFile!.getPath(), this, this.commonStrings!.CREATE);
    
abFile!.delete();
    

                                    }
                                
                        else {
                            
    name: string = AbPathData.getInstance()!.removeNameFromPath(abFile!.getAbsolutePath())!;;
    

    abFileDirectory: AbFile = AbFile.createAbFile(name)!;;
    

                        if(abFileDirectory!.exists())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    stringBuilder: StringMaker = new StringMaker();;
    
this.logUtil!.putF(stringBuilder!.append(this.commonStrings!.CREATE)!.append(this.commonLabels!.COLON_SEP)!.append(name)!.toString(), this, this.commonStrings!.CREATE);
    

    result: bool = abFileDirectory!.mkdirs()!;;
    
stringBuilder!.delete(0, stringBuilder!.length());
    
this.logUtil!.putF(stringBuilder!.append(this.commonLabels!.RESULT_)!.appendboolean(result)!.toString(), this, this.commonStrings!.CREATE);
    

                        }
                            

                        }
                            
this.write(abFile, data);
    
}


                //@Throws(Exception.constructor)
            
    public write(AbFile abFile, string data){

    fileOut: BufferedWriter = new BufferedWriter(new FileWriter(AbFileNativeUtil.get(abFile)));;
    
fileOut!.write(data, 0, data.length);
    
fileOut!.newLine();
    
fileOut!.flush();
    
}


};

            

