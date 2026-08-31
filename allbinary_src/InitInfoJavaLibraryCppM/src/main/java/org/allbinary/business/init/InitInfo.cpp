
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitInfoEntity.h"

class InitInfo
            : public Object
         {
        

    private: static const instance: InitInfo = new InitInfo();

    public static InitInfo getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InitInfo.instance;
    
}


    public const TESTING: string = "TESTING";

    public const MAINPATH: string = "MAINPATH";

    public const TESTHTMLPATH: string = "TESTHTMLPATH";

    private: testing: string = 
                null
            ;

    private: mainPath: AbPath = 
                null
            ;

    private: testHtmlPath: AbPath = 
                null
            ;

    private: hasRead: bool = false;

private constructor (){

            super();
        }


                //@Throws(InitException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public set(){

        try {
            
    initInfoEntity: InitInfoEntity = new InitInfoEntity();;
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("created entity", "InitInfo", "set()");
    

                                    }
                                

                        if(!initInfoEntity!.is())
                        
                                    {
                                    
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("adding", "InitInfo", "set()");
    

                                    }
                                
initInfoEntity!.add();
    

                                    }
                                
                        else {
                            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADER))
                        
                                    {
                                    PreLogUtil.put("update", "InitInfo", "set()");
    

                                    }
                                
initInfoEntity!.update();
    

                        }
                            
this.hasRead= false;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("error", "InitInfo", "set()", e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public set(HashMap<any, any> hashMap){

        try {
            this.testing= hashMap!.get(this.TESTING) as string;
    
this.mainPath= new AbPath(hashMap!.get(this.MAINPATH) as string, StringUtil.getInstance()!.EMPTY_STRING);
    
this.testHtmlPath= new AbPath(hashMap!.get(this.TESTHTMLPATH) as string, StringUtil.getInstance()!.EMPTY_STRING);
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("error", "InitInfo", "set()", e);
    

                                    }
                                
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    get(){

        try {
            this.testing= 
                                        nullptr
                                    ;
    
this.mainPath= 
                                        nullptr
                                    ;
    
this.testHtmlPath= 
                                        nullptr
                                    ;
    

    initInfoEntity: InitInfoEntity = new InitInfoEntity();;
    
initInfoEntity!.get();
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("error", "InitInfo", "set()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}

}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public setHasRead(bool value){
this.hasRead= value;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    updateIfNeeded(){

        try {
            
                        if(!this.hasRead)
                        
                                    {
                                    this.hasRead= true;
    
this.get();
    

                                    }
                                

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("error", "InitInfo", "updateIfNeeded()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    
}

}


    public bool isTesting(){

        try {
            this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil.getInstance()!.getFromString(this.testing);;
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.PRELOADERERROR))
                        
                                    {
                                    PreLogUtil.putOE("error", "InitInfo", "updateIfNeeded()", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    public string getTesting(){
this.updateIfNeeded();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testing;
    
}


    public string getTestHtmlPath(){
this.updateIfNeeded();
    

                        if(this.testHtmlPath != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.testHtmlPath!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public string getMainPath(){
this.updateIfNeeded();
    

                        if(this.mainPath != 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mainPath!.toString();;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                        }
                            
}


    public setTesting(string value){
this.testing= value;
    
}


    public setTestHtmlPath(AbPath value){
this.testHtmlPath= value;
    
}


    public setMainPath(AbPath value){
this.mainPath= value;
    
}


    public bool isMainPathValid(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public bool isTestHtmlPathValid(AbPath abPath){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


                //@Throws(Exception.constructor)
            
    public bool isTestingValid(string testing){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BooleanUtil.getInstance()!.isStringBoolean(testing);;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(this.TESTING, this.getTesting());
    
hashMap!.put(this.MAINPATH, this.getMainPath());
    
hashMap!.put(this.TESTHTMLPATH, this.getTestHtmlPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


};

            

