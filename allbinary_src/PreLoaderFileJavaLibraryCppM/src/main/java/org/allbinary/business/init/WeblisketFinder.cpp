
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
        
            #include "../../../../java/lang/System.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WeblisketFinder
            : public Object
         {
        

    private: static const instance: WeblisketFinder = new WeblisketFinder();

    public static WeblisketFinder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return WeblisketFinder.instance;
    
}


    private: static const KEY: string = "installerdata.dat";

                //@Throws(Exception.constructor)
            
    public static main(std::vector<string> args){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    vector: BasicArrayList = WeblisketFinder.getInstance()!.findAll(stringUtil!.EMPTY_STRING)!;;
    
console.log(vector.size());
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const subDirectory: SubDirectory = SubDirectory.getInstance()!;

private constructor (){

            super();
        }


    public BasicArrayList findAll(string path){

        try {
            this.logUtil!.putF(this.commonStrings!.START, this, "findAll");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.subDirectory!.search(WeblisketFinder.KEY, AbFile.createAbFile(path));;
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "findAll", e);
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "findAll", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public string getInstallationPath(AbFile file){

        try {
            
    filePath: string = file.getPath()!;;
    

    end: int32_t = filePath!.indexOf(KEY)!;;
    

                        if(end < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return filePath!.substring(0, end);;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "getInstallationPath", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


};

            

