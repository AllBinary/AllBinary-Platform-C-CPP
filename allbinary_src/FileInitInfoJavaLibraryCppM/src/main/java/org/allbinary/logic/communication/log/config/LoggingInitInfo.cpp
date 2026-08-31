
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigsData.h"
#include "LogConfigData.h"
#include "LogConfig.h"

class LoggingInitInfo
            : public Object
         {
        

    private: static const INITFILENAME: string = "logConfig.xml";

    private: static const PACKAGE: string = PATH_GLOBALS.getInstance()!.INIT_PATH;

    private: static logConfigInfoList: BasicArrayList = 
                null
            ;

    private: static hasRead: bool = false;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static Document getDoc(){

    path: string = URLGLOBALS.getWebappPath() +LoggingInitInfo.PACKAGE;;
    

    FILEABPATH: AbPath = new AbPath(path, INITFILENAME);;
    

    file: AbFile = AbFile.createAbFileFromAbPath(FILEABPATH)!;;
    

    document: Document = DomDocumentHelper.create(new AbFileLocalInputStream(file))!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static write(){

        try {
            LoggingInitInfo.hasRead= false;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    static read(){

        try {
            
    document: Document = LoggingInitInfo.getDoc()!;;
    

    logConfigsNodeList: NodeList = document.getElementsByTagName(LogConfigsData.getInstance()!.NAME)!;;
    

    logConfigsNode: Node = logConfigsNodeList!.item(0)!;;
    

    logConfigNodeVector: Vector = DomSearchHelper.getAllNodes(LogConfigData.getInstance()!.NAME, logConfigsNode!.getChildNodes())!;;
    
LoggingInitInfo.logConfigInfoList= new BasicArrayListD();
    

    size: int32_t = logConfigNodeVector!.length!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    node: Node = logConfigNodeVector!.elementAt(i) as Node;;
    

    logConfigInfo: LogConfig = new LogConfig(node);;
    
LoggingInitInfo.logConfigInfoList!.add(logConfigInfo);
    
}


                //: 
} catch(e) 
            {



                            throw e;
                    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static setHasRead(bool value){
LoggingInitInfo.hasRead= value;
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    static updateIfNeeded(){

                        if(!LoggingInitInfo.hasRead)
                        
                                    {
                                    LoggingInitInfo.read();
    
LoggingInitInfo.hasRead= true;
    

                        if(LoggingInitInfo.logConfigInfoList == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Read Failed");
                    

                                    }
                                

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static set(BasicArrayList logConfigInfoVector){
LoggingInitInfo.logConfigInfoList= logConfigInfoVector;
    
}


                //@Throws(Exception.constructor)
            
    public static BasicArrayList get(){
LoggingInitInfo.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo.logConfigInfoList;
    
}


                //@Throws(Exception.constructor)
            
    public static BasicArrayList getTypeNameList(){
LoggingInitInfo.updateIfNeeded();
    

    allLogTypeVector: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = LoggingInitInfo.logConfigInfoList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    logConfigInfo: LogConfig = LoggingInitInfo.logConfigInfoList!.objectArray[index]! as LogConfig;;
    

    logTypeVector: BasicArrayList = logConfigInfo!.getTypeVector()!;;
    

                        if(logConfigInfo!.isEnabled())
                        
                                    {
                                    allLogTypeVector!.addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allLogTypeVector;
    
}


                //@Throws(Exception.constructor)
            
    public static BasicArrayList getTypeList(){
LoggingInitInfo.updateIfNeeded();
    

    allLogTypeVector: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = LoggingInitInfo.logConfigInfoList!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    logConfigInfo: LogConfig = LoggingInitInfo.logConfigInfoList!.objectArray[index]! as LogConfig;;
    

    logTypeVector: BasicArrayList = logConfigInfo!.getTypeVector()!;;
    

                        if(logConfigInfo!.isEnabled())
                        
                                    {
                                    allLogTypeVector!.addAllList(logTypeVector);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return allLogTypeVector;
    
}


public constructor (){

            super();
        }


    public bool isValid(){

        try {
            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


                //@Throws(Exception.constructor)
            
    public int32_t getNumberOfLogConfigs(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LoggingInitInfo.logConfigInfoList!.size();;
    
}


    public string toString(){

        try {
            
    document: Document = LoggingInitInfo.getDoc()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DomDocumentHelper.toString(document);;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Error";
    
}

}


};

            

